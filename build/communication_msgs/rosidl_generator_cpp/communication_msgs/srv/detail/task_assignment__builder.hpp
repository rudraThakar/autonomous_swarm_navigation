// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_msgs:srv/TaskAssignment.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__BUILDER_HPP_
#define COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication_msgs/srv/detail/task_assignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication_msgs
{

namespace srv
{

namespace builder
{

class Init_TaskAssignment_Request_coordinates
{
public:
  explicit Init_TaskAssignment_Request_coordinates(::communication_msgs::srv::TaskAssignment_Request & msg)
  : msg_(msg)
  {}
  ::communication_msgs::srv::TaskAssignment_Request coordinates(::communication_msgs::srv::TaskAssignment_Request::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_msgs::srv::TaskAssignment_Request msg_;
};

class Init_TaskAssignment_Request_task_id
{
public:
  Init_TaskAssignment_Request_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskAssignment_Request_coordinates task_id(::communication_msgs::srv::TaskAssignment_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskAssignment_Request_coordinates(msg_);
  }

private:
  ::communication_msgs::srv::TaskAssignment_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_msgs::srv::TaskAssignment_Request>()
{
  return communication_msgs::srv::builder::Init_TaskAssignment_Request_task_id();
}

}  // namespace communication_msgs


namespace communication_msgs
{

namespace srv
{

namespace builder
{

class Init_TaskAssignment_Response_message
{
public:
  Init_TaskAssignment_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication_msgs::srv::TaskAssignment_Response message(::communication_msgs::srv::TaskAssignment_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_msgs::srv::TaskAssignment_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_msgs::srv::TaskAssignment_Response>()
{
  return communication_msgs::srv::builder::Init_TaskAssignment_Response_message();
}

}  // namespace communication_msgs

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__BUILDER_HPP_
