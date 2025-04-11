#!/usr/bin/env python3

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, TextSubstitution
from launch_ros.actions import Node
import random

def generate_launch_description():
    # Get package share directory
    pkg_share = get_package_share_directory('autobot_recog')
    
    # Gazebo launch files directory
    pkg_gazebo_ros = get_package_share_directory('gazebo_ros')

    # Paths
    world_path = 'src/autobot_recog/worlds/office_world.world'
    urdf_path = 'src/autobot_recog/urdf/realsense_bot/model.sdf'

    # Launch arguments
    declare_world_cmd = DeclareLaunchArgument(
        'world',
        default_value=world_path,
        description='Full path to the world model file to load'
    )

    declare_num_robots_cmd = DeclareLaunchArgument(
        'num_robots', 
        default_value='3',
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

    # Spawn multiple robots with unique namespaces and parameters
    for i in range(5):  # Hardcoded to 3 for now
        robot_name = f'robot_{i}'
        robot_namespace = f'/{robot_name}'
        
        x_pos = round(random.uniform(0.2, 10), 2)
        y_pos = round(random.uniform(0.2, 10), 2)
        # Spawn robot with unique namespace
        spawn_robot_cmd = Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', robot_name,
                '-file', urdf_path,
                '-x', str(x_pos),
                '-y', str(y_pos),
                '-z', '0.01',
                '-robot_namespace', robot_namespace
            ],
            output='screen',
            parameters=[
                {'use_sim_time': True}
            ]
        )
        
        ld.add_action(spawn_robot_cmd)

    return ld
