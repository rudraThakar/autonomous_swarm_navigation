import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
import numpy as np
from rclpy.executors import MultiThreadedExecutor
from threading import Event
import math
from threading import Thread

# Waypoints to visit for each robot (unchanged)
waypoints = [[
        {'x': 1, 'y': 1.1},
        {'x': 1.5, 'y': 0.5},
        {'x': 3, 'y': 1},
    ],[
        {'x': 4.5, 'y': 2.0},
        {'x': 5.0, 'y': 3},
        {'x': 4.5, 'y': 3.5},
        {'x': 2.0, 'y': 3.5},
    ],[
        {'x': 6.5, 'y': 4.0},
        {'x': 7.0, 'y': 5},
        {'x': 6.5, 'y': 5.5},
        {'x': 4.0, 'y': 5.5},
    ],
]

def euler_from_quaternion(quaternion):
    """Converts quaternion to Euler angles (roll, pitch, yaw)"""
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

class TurtleBotMover(Node):
    def _init_(self, robot_name, waypoints):
        super()._init_(f'{robot_name}_mover')
        self.robot_name = robot_name

        self.cmd_vel_pub = self.create_publisher(Twist, f'/{robot_name}/cmd_vel', 10)
        self.odom_sub = self.create_subscription(
            Odometry,
            f'/{robot_name}/odom',
            self.update_position,
            10
        )

        self.current_position = {'x': 0.0, 'y': 0.0, 'theta': 0.0}
        self.first_odom_received = False
        self.waypoints = waypoints

        self.distance_threshold = 0.2  # Waypoint reached when within 20 cm
        self.angle_threshold = 0.1  # Angle alignment threshold
        self.max_linear_speed = 0.22  # m/s
        self.max_angular_speed = 1.0  # rad/s

        # Event to signal when all waypoints are reached
        self.waypoint_completion_event = Event()

        self.get_logger().info(f'{self.robot_name} TurtleBot Mover Node Initialized')

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
                self.get_logger().info(f"{self.robot_name} reached waypoint {waypoint}")
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
                self.get_logger().info(f'{self.robot_name} rotating. Angle diff: {angle_diff}')
            else:
                move_cmd.angular.z = 0.0
                move_cmd.linear.x = min(distance, self.max_linear_speed)
                self.get_logger().info(f'{self.robot_name} moving. Distance: {distance}')
            
            self.cmd_vel_pub.publish(move_cmd)
            rclpy.spin_once(self, timeout_sec=0.1)

    def run(self):
        while not self.first_odom_received:
            self.get_logger().info(f'{self.robot_name} waiting for first odometry...')
            rclpy.spin_once(self, timeout_sec=1.0)
        
        for waypoint in self.waypoints:
            self.get_logger().info(f"{self.robot_name} moving to waypoint {waypoint}")
            self.move_to_waypoint(waypoint)
        
        # Signal that all waypoints have been reached
        self.waypoint_completion_event.set()

def main(args=None):
    rclpy.init(args=args)

    # Create a list of nodes for each robot
    robot_nodes = [
        TurtleBotMover('robot_0', waypoints[0]),
        TurtleBotMover('robot_1', waypoints[1]),
        TurtleBotMover('robot_2', waypoints[2])
    ]

    try:
        # Create a MultiThreadedExecutor
        executor = MultiThreadedExecutor()
        
        # Add all robot nodes to the executor
        for robot in robot_nodes:
            executor.add_node(robot)
        
        # Create a thread for running the executor
        executor_thread = Thread(target=executor.spin)
        executor_thread.start()
        
        # Run the movement for each robot in parallel
        for robot in robot_nodes:
            robot.run()
        
        # Wait for all robots to complete their waypoints
        for robot in robot_nodes:
            robot.waypoint_completion_event.wait()
        
        # Cleanup
        executor.shutdown()
        executor_thread.join()
    
    except KeyboardInterrupt:
        pass
    finally:
        for robot in robot_nodes:
            executor.remove_node(robot)
        rclpy.shutdown()

if __name__ == '_main_':
    main()