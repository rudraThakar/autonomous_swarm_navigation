import os
import time
import numpy as np
import torch
import torch.optim as optim
import torch.nn as nn
import torch.nn.functional as F
from numpy import inf
from torch.utils.tensorboard import SummaryWriter

from replay_buffer import ReplayBuffer

import matplotlib.pyplot as plt
import rclpy
from rclpy.node import Node
import threading

import math
import random

import point_cloud2 as pc2
from gazebo_msgs.msg import ModelState
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from sensor_msgs.msg import PointCloud2
from squaternion import Quaternion
from std_srvs.srv import Empty
from train_velodyne_node import GOAL_REACHED_DIST, COLLISION_DIST, TIME_DELTA, environment_dim, velodyne_data, evaluate, check_pos, GazeboEnv, Odom_subscriber, Velodyne_subscriber

torch.cuda.empty_cache()

class ActorCritic(nn.Module):
    def __init__(self, state_dim, action_dim, max_action):
        super(ActorCritic, self).__init__()
        self.actor = nn.Sequential(
            nn.Linear(state_dim, 800),
            nn.ReLU(),
            nn.Linear(800, 600),
            nn.ReLU(),
            nn.Linear(600, action_dim),
            nn.Tanh()
        )
        self.critic = nn.Sequential(
            nn.Linear(state_dim, 800),
            nn.ReLU(),
            nn.Linear(800, 600),
            nn.ReLU(),
            nn.Linear(600, 1)
        )
        self.max_action = max_action

    def forward(self, state):
        action = self.actor(state) * self.max_action
        value = self.critic(state)
        return action, value

class PPO:
    def __init__(self, state_dim, action_dim, max_action, clip_param=0.2, gamma=0.99, lr=3e-4, update_epochs=10):
        self.network = ActorCritic(state_dim, action_dim, max_action)  # No .to(device) here, so it stays on CPU by default
        self.optimizer = optim.Adam(self.network.parameters(), lr=lr)
        self.clip_param = clip_param
        self.gamma = gamma
        self.update_epochs = update_epochs

    def compute_advantages(self, rewards, values, dones):
        advantages = []
        advantage = 0
        for t in reversed(range(len(rewards))):
            delta = rewards[t] + (1 - dones[t]) * self.gamma * values[t + 1] - values[t]
            advantage = delta + (1 - dones[t]) * self.gamma * advantage
            advantages.insert(0, advantage)
        return torch.tensor(advantages, dtype=torch.float32)  # Removed .to(device)

    def train(self, memory):
        states, actions, old_log_probs, rewards, values, dones = memory
        advantages = self.compute_advantages(rewards, values, dones)

        for _ in range(self.update_epochs):
            _, new_values = self.network(states)
            dist = torch.distributions.Normal(self.network.actor(states), 1)
            new_log_probs = dist.log_prob(actions).sum(dim=1)

            ratio = torch.exp(new_log_probs - old_log_probs)
            surr1 = ratio * advantages
            surr2 = torch.clamp(ratio, 1 - self.clip_param, 1 + self.clip_param) * advantages
            policy_loss = -torch.min(surr1, surr2).mean()
            value_loss = ((rewards + self.gamma * new_values - values) ** 2).mean()

            loss = policy_loss + 0.5 * value_loss

            self.optimizer.zero_grad()
            loss.backward()
            self.optimizer.step()

    def get_action(self, state):
        state = torch.tensor(state, dtype=torch.float32).unsqueeze(0)  # Removed .to(device)
        action, _ = self.network(state)
        dist = torch.distributions.Normal(action, 1)
        sampled_action = dist.sample().cpu().numpy()[0]  # Ensures output is on CPU
        return np.clip(sampled_action, -self.network.max_action, self.network.max_action)


if __name__ == '_main_':

    rclpy.init(args=None)

    seed = 0  # Random seed number
    eval_freq = 5e3  # After how many steps to perform the evaluation
    max_ep = 500  # maximum number of steps per episode
    eval_ep = 10  # number of episodes for evaluation
    max_timesteps = 5e6  # Maximum number of steps to perform
    expl_noise = 1  # Initial exploration noise starting value in range [expl_min ... 1]
    expl_decay_steps = (
        500000  # Number of steps over which the initial exploration noise will decay over
    )
    expl_min = 0.1  # Exploration noise after the decay in range [0...expl_noise]
    batch_size = 40  # Size of the mini-batch
    discount = 0.99999  # Discount factor to calculate the discounted future reward (should be close to 1)
    tau = 0.005  # Soft target update variable (should be close to 0)
    policy_noise = 0.2  # Added noise for exploration
    noise_clip = 0.5  # Maximum clamping values of the noise
    policy_freq = 2  # Frequency of Actor network updates
    buffer_size = 1e6  # Maximum size of the buffer
    file_name = "ppo_velodyne"  # name of the file to store the policy
    save_model = True  # Weather to save the model or not
    load_model = False  # Weather to load a stored model
    random_near_obstacle = True  # To take random actions near obstacles or not

    # Create the network storage folders
    if not os.path.exists("./results"):
        os.makedirs("./results")
    if save_model and not os.path.exists("./pytorch_models"):
        os.makedirs("./pytorch_models")

    # Create the training environment
    environment_dim = 20
    robot_dim = 4

    torch.manual_seed(seed)
    np.random.seed(seed)
    state_dim = environment_dim + robot_dim
    action_dim = 2
    max_action = 1

    # Create the network
    network = PPO(state_dim, action_dim, max_action)
    # Create a replay buffer
    replay_buffer = ReplayBuffer(buffer_size, seed)
    if load_model:
        try:
            print("Will load existing model.")
            network.load(file_name, "./pytorch_models")
        except:
            print("Could not load the stored model parameters, initializing training with random parameters")

    # Create evaluation data store
    evaluations = []

    timestep = 0
    timesteps_since_eval = 0
    episode_num = 0
    done = True
    epoch = 1

    count_rand_actions = 0
    random_action = []

    env = GazeboEnv()
    odom_subscriber = Odom_subscriber()
    velodyne_subscriber = Velodyne_subscriber()
    
    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(odom_subscriber)
    executor.add_node(velodyne_subscriber)

    executor_thread = threading.Thread(target=executor.spin, daemon=True)
    executor_thread.start()
    
    rate = odom_subscriber.create_rate(2)
    try:
        while rclpy.ok():
            if timestep < max_timesteps:
                # On termination of episode
                if done:
                    env.get_logger().info(f"Done. timestep : {timestep}")
                    if timestep != 0:
                        env.get_logger().info(f"train")
                        network.train(
                        replay_buffer,
                        episode_timesteps,
                        batch_size,
                        discount,
                        tau,
                        policy_noise,
                        noise_clip,
                        policy_freq,
                        )

                    if timesteps_since_eval >= eval_freq:
                        env.get_logger().info("Validating")
                        timesteps_since_eval %= eval_freq
                        evaluations.append(
                            evaluate(network=network, epoch=epoch, eval_episodes=eval_ep)
                        )

                        network.save(file_name, directory="./pytorch_models")
                        np.save("./results/%s" % (file_name), evaluations)
                        epoch += 1

                    state = env.reset()
                    done = False

                    episode_reward = 0
                    episode_timesteps = 0
                    episode_num += 1

                # add some exploration noise
                if expl_noise > expl_min:
                    expl_noise = expl_noise - ((1 - expl_min) / expl_decay_steps)

                action = network.get_action(np.array(state))
                action = (action + np.random.normal(0, expl_noise, size=action_dim)).clip(
                     -max_action, max_action
                )

                # If the robot is facing an obstacle, randomly force it to take a consistent random action.
                # This is done to increase exploration in situations near obstacles.
                # Training can also be performed without it
                if random_near_obstacle:
                    if (
                        np.random.uniform(0, 1) > 0.85
                        and min(state[4:-8]) < 0.6
                        and count_rand_actions < 1
                    ):
                        count_rand_actions = np.random.randint(8, 15)
                        random_action = np.random.uniform(-1, 1, 2)

                    if count_rand_actions > 0:
                        count_rand_actions -= 1
                        action = random_action
                        action[0] = -1

                # Update action to fall in range [0,1] for linear velocity and [-1,1] for angular velocity
                a_in = [(action[0] + 1) / 2, action[1]]
                next_state, reward, done, target = env.step(a_in)
                done_bool = 0 if episode_timesteps + 1 == max_ep else int(done)
                done = 1 if episode_timesteps + 1 == max_ep else int(done)
                episode_reward += reward

                # Save the tuple in replay buffer
                replay_buffer.add(state, action, reward, done_bool, next_state)

                # Update the counters
                state = next_state
                episode_timesteps += 1
                timestep += 1
                timesteps_since_eval += 1

    except KeyboardInterrupt:
        pass

    rclpy.shutdown()