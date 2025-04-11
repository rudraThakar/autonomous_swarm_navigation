// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_msgs:srv/TaskCompletion.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__TASK_COMPLETION__BUILDER_HPP_
#define COMMUNICATION_MSGS__SRV__DETAIL__TASK_COMPLETION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication_msgs/srv/detail/task_completion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication_msgs
{

namespace srv
{

namespace builder
{

class Init_TaskCompletion_Request_status
{
public:
  explicit Init_TaskCompletion_Request_status(::communication_msgs::srv::TaskCompletion_Request & msg)
  : msg_(msg)
  {}
  ::communication_msgs::srv::TaskCompletion_Request status(::communication_msgs::srv::TaskCompletion_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_msgs::srv::TaskCompletion_Request msg_;
};

class Init_TaskCompletion_Request_slave_id
{
public:
  explicit Init_TaskCompletion_Request_slave_id(::communication_msgs::srv::TaskCompletion_Request & msg)
  : msg_(msg)
  {}
  Init_TaskCompletion_Request_status slave_id(::communication_msgs::srv::TaskCompletion_Request::_slave_id_type arg)
  {
    msg_.slave_id = std::move(arg);
    return Init_TaskCompletion_Request_status(msg_);
  }

private:
  ::communication_msgs::srv::TaskCompletion_Request msg_;
};

class Init_TaskCompletion_Request_task_id
{
public:
  Init_TaskCompletion_Request_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskCompletion_Request_slave_id task_id(::communication_msgs::srv::TaskCompletion_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskCompletion_Request_slave_id(msg_);
  }

private:
  ::communication_msgs::srv::TaskCompletion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_msgs::srv::TaskCompletion_Request>()
{
  return communication_msgs::srv::builder::Init_TaskCompletion_Request_task_id();
}

}  // namespace communication_msgs


namespace communication_msgs
{

namespace srv
{

namespace builder
{

class Init_TaskCompletion_Response_message
{
public:
  Init_TaskCompletion_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication_msgs::srv::TaskCompletion_Response message(::communication_msgs::srv::TaskCompletion_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_msgs::srv::TaskCompletion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_msgs::srv::TaskCompletion_Response>()
{
  return communication_msgs::srv::builder::Init_TaskCompletion_Response_message();
}

}  // namespace communication_msgs

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__TASK_COMPLETION__BUILDER_HPP_
