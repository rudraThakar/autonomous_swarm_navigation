// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_msgs:srv/Liveliness.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__BUILDER_HPP_
#define COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication_msgs/srv/detail/liveliness__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication_msgs
{

namespace srv
{

namespace builder
{

class Init_Liveliness_Request_request
{
public:
  explicit Init_Liveliness_Request_request(::communication_msgs::srv::Liveliness_Request & msg)
  : msg_(msg)
  {}
  ::communication_msgs::srv::Liveliness_Request request(::communication_msgs::srv::Liveliness_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_msgs::srv::Liveliness_Request msg_;
};

class Init_Liveliness_Request_sender_id
{
public:
  Init_Liveliness_Request_sender_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Liveliness_Request_request sender_id(::communication_msgs::srv::Liveliness_Request::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_Liveliness_Request_request(msg_);
  }

private:
  ::communication_msgs::srv::Liveliness_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_msgs::srv::Liveliness_Request>()
{
  return communication_msgs::srv::builder::Init_Liveliness_Request_sender_id();
}

}  // namespace communication_msgs


namespace communication_msgs
{

namespace srv
{

namespace builder
{

class Init_Liveliness_Response_reply
{
public:
  explicit Init_Liveliness_Response_reply(::communication_msgs::srv::Liveliness_Response & msg)
  : msg_(msg)
  {}
  ::communication_msgs::srv::Liveliness_Response reply(::communication_msgs::srv::Liveliness_Response::_reply_type arg)
  {
    msg_.reply = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_msgs::srv::Liveliness_Response msg_;
};

class Init_Liveliness_Response_requester_id
{
public:
  explicit Init_Liveliness_Response_requester_id(::communication_msgs::srv::Liveliness_Response & msg)
  : msg_(msg)
  {}
  Init_Liveliness_Response_reply requester_id(::communication_msgs::srv::Liveliness_Response::_requester_id_type arg)
  {
    msg_.requester_id = std::move(arg);
    return Init_Liveliness_Response_reply(msg_);
  }

private:
  ::communication_msgs::srv::Liveliness_Response msg_;
};

class Init_Liveliness_Response_receiver_id
{
public:
  Init_Liveliness_Response_receiver_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Liveliness_Response_requester_id receiver_id(::communication_msgs::srv::Liveliness_Response::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_Liveliness_Response_requester_id(msg_);
  }

private:
  ::communication_msgs::srv::Liveliness_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_msgs::srv::Liveliness_Response>()
{
  return communication_msgs::srv::builder::Init_Liveliness_Response_receiver_id();
}

}  // namespace communication_msgs

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__BUILDER_HPP_
