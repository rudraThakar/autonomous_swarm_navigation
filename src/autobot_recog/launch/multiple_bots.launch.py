#!/usr/bin/env python3

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    # Get package share directory
    pkg_share = get_package_share_directory('autobot_recog')
    
    # Gazebo launch files directory
    pkg_gazebo_ros = get_package_share_directory('gazebo_ros')

    # Paths
    world_path = 'src/autobot_recog/worlds/warehouse_world.world'
    urdf_path = 'src/autobot_recog/urdf/velodyne_bot.sdf'

    # Launch arguments
    declare_world_cmd = DeclareLaunchArgument(
        'world',
        default_value=world_path,
        description='Full path to the world model file to load'
    )

    declare_num_robots_cmd = DeclareLaunchArgument(
        'num_robots', 
        default_value='5',
        description='Number of robots to spawn'
    )

    # Launch configurations
    world = LaunchConfiguration('world')
    num_robots = LaunchConfiguration('num_robots')

    # Gazebo server launch
    gzserver_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')
        ),
        launch_arguments={'world': world}.items()
    )

    # Gazebo client launch
    gzclient_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')
        )
    )

    # Create launch description
    ld = LaunchDescription()

    # Add launch arguments
    ld.add_action(declare_world_cmd)
    ld.add_action(declare_num_robots_cmd)

    # Add Gazebo server and client
    ld.add_action(gzserver_cmd)
    ld.add_action(gzclient_cmd)

    # Hardcoded positions for 5 robots
    robot_positions = [
        {'name': 'robot_0', 'x': 1.0, 'y': 5.0, 'z': 0.01},
        {'name': 'robot_1', 'x': 3.0, 'y': 1.0, 'z': 0.01},
        {'name': 'robot_2', 'x': 5.0, 'y': 7.0, 'z': 0.01},
        {'name': 'robot_3', 'x': 1.0, 'y': 5.5, 'z': 0.01},
        {'name': 'robot_4', 'x': 9.3, 'y': 7.0, 'z': 0.01},


#large warehouse
        # {'name': 'robot_0', 'x': 2.0, 'y': 3.5, 'z': 0.01},
        # {'name': 'robot_1', 'x': 14.6, 'y': 28.0, 'z': 0.01},
        # {'name': 'robot_2', 'x': 13.5, 'y': 16.0, 'z': 0.01},
        # {'name': 'robot_3', 'x': 22, 'y': 9, 'z': 0.01},
        # {'name': 'robot_4', 'x': 20, 'y': 23.0, 'z': 0.01},



        # {'name': 'robot_5', 'x': 1, 'y': 2, 'z': 0.01},
        # {'name': 'robot_6', 'x': 3.0, 'y': 4.0, 'z': 0.01},
        # {'name': 'robot_7', 'x': 1.0, 'y': 4.0, 'z': 0.01},
        # {'name': 'robot_8', 'x': 0.5, 'y': 9.5, 'z': 0.01},
        # {'name': 'robot_7', 'x': 8.0, 'y': 1.0, 'z': 0.01},
    ]

    # Spawn robots with hardcoded positions
    for robot in robot_positions:
        robot_name = robot['name']
        robot_namespace = f'/{robot_name}'

        # Spawn robot with hardcoded coordinates
        spawn_robot_cmd = Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', robot_name,
                '-file', urdf_path,
                '-x', str(robot['x']),
                '-y', str(robot['y']),
                '-z', str(robot['z']),
                '-robot_namespace', robot_namespace
            ],
            output='screen',
            parameters=[
                {'use_sim_time': True}
            ]
        )
        
        ld.add_action(spawn_robot_cmd)

    return ld
