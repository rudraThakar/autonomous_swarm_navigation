#!/usr/bin/env python3
import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
import numpy as np

# Waypoints to visit
waypoints = [
        # {'x': 4.5, 'y': 8.0},
        # {'x': 4.5, 'y': 9},
        # {'x': 2.5, 'y': 9},
        # {'x': 2.5, 'y': 7},
        # {'x': 1, 'y': 6},


        {'x': 8.24, 'y': 1.02},
        {'x': 6.85, 'y': 1.02},
        {'x': 6.05, 'y': 0.63},
        {'x': 3.12, 'y': 0.6},
        {'x': 1.23, 'y': 0.6},

#large warehouse
        # {'x': 13, 'y': 14},
        # {'x': 10.5, 'y': 13.5},
        # {'x': 7.5, 'y': 14.5},
        # {'x': 4.2, 'y': 20},
        # {'x': 4.5, 'y': 21},
]

def euler_from_quaternion(quaternion):
    """
    Converts quaternion (w in last place) to euler roll, pitch, yaw
    quaternion = [x, y, z, w]
    """
    x, y, z, w = quaternion
    
    sinr_cosp = 2 * (w * x + y * z)
    cosr_cosp = 1 - 2 * (x * x + y * y)
    roll = np.arctan2(sinr_cosp, cosr_cosp)

    sinp = 2 * (w * y - z * x)
    pitch = np.arcsin(sinp)

    siny_cosp = 2 * (w * z + x * y)
    cosy_cosp = 1 - 2 * (y * y + z * z)
    yaw = np.arctan2(siny_cosp, cosy_cosp)

    return roll, pitch, yaw

class RobotMover(Node):
    def __init__(self):
        super().__init__('robot_mover')
        
        # Update the topic names for robot1
        self.cmd_vel_pub = self.create_publisher(Twist, '/robot_2/cmd_vel', 10)
        
        self.odom_sub = self.create_subscription(
            Odometry, 
            '/robot_2/odom',  # Subscribe to robot1's odom topic
            self.update_position, 
            10
        )
        
        self.current_position = {'x': 0.0, 'y': 0.0, 'theta': 0.0}
        
        self.distance_threshold = 0.2  # Waypoint reached when within 20 cm
        self.angle_threshold = 0.1  # Angle alignment threshold
        
        self.max_linear_speed = 0.22  # m/s
        self.max_angular_speed = 1.0  # rad/s
        
        self.first_odom_received = False
        
        self.get_logger().info('Robot Mover Node Initialized')

    def update_position(self, msg):
        pose = msg.pose.pose
        self.current_position['x'] = pose.position.x
        self.current_position['y'] = pose.position.y
        
        quaternion = (
            pose.orientation.x,
            pose.orientation.y,
            pose.orientation.z,
            pose.orientation.w
        )
        _, _, yaw = euler_from_quaternion(quaternion)
        self.current_position['theta'] = yaw
        
        if not self.first_odom_received:
            self.first_odom_received = True
            self.get_logger().info('First odometry received')

    def normalize_angle(self, angle):
        """Normalize angle to [-pi, pi]"""
        return (angle + np.pi) % (2 * np.pi) - np.pi

    def move_to_waypoint(self, waypoint):

        move_cmd = Twist()
        
        while True:
            distance = math.sqrt(
                (waypoint['x'] - self.current_position['x']) ** 2 + 
                (waypoint['y'] - self.current_position['y']) ** 2
            )
            
            if distance <= self.distance_threshold:
                self.get_logger().info(f"Reached waypoint {waypoint}")
                
                move_cmd.linear.x = 0.0
                move_cmd.angular.z = 0.0
                self.cmd_vel_pub.publish(move_cmd)
                break
            
            target_angle = math.atan2(
                waypoint['y'] - self.current_position['y'],
                waypoint['x'] - self.current_position['x']
            )
            
            angle_diff = self.normalize_angle(target_angle - self.current_position['theta'])
            
            if abs(angle_diff) > self.angle_threshold:
                move_cmd.linear.x = 0.0
                move_cmd.angular.z = max(min(angle_diff * 1.0, self.max_angular_speed), -self.max_angular_speed)
                self.get_logger().info(f'Rotating. Angle diff: {angle_diff}')
            else:
                move_cmd.angular.z = 0.0
                move_cmd.linear.x = min(distance, self.max_linear_speed)
                self.get_logger().info(f'Moving. Distance: {distance}')
            
            self.cmd_vel_pub.publish(move_cmd)
            
            rclpy.spin_once(self, timeout_sec=0.1)

    def run(self):

        while not self.first_odom_received:
            self.get_logger().info('Waiting for first odometry...')
            rclpy.spin_once(self, timeout_sec=1.0)
        
        for waypoint in waypoints:
            self.get_logger().info(f"Moving to waypoint {waypoint}")
            self.move_to_waypoint(waypoint)

def main(args=None):

    rclpy.init(args=args)
    
    robot_mover = RobotMover()
    
    try:
        robot_mover.run()
    except KeyboardInterrupt:
        robot_mover.get_logger().info('Node stopped cleanly.')
    finally:

        robot_mover.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
