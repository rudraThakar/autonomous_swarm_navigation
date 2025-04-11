// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication_msgs:srv/Liveliness.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__TRAITS_HPP_
#define COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication_msgs/srv/detail/liveliness__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace communication_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Liveliness_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: sender_id
  {
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << ", ";
  }

  // member: request
  {
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Liveliness_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sender_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << "\n";
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Liveliness_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace communication_msgs

namespace rosidl_generator_traits
{

[[deprecated("use communication_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication_msgs::srv::Liveliness_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication_msgs::srv::Liveliness_Request & msg)
{
  return communication_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication_msgs::srv::Liveliness_Request>()
{
  return "communication_msgs::srv::Liveliness_Request";
}

template<>
inline const char * name<communication_msgs::srv::Liveliness_Request>()
{
  return "communication_msgs/srv/Liveliness_Request";
}

template<>
struct has_fixed_size<communication_msgs::srv::Liveliness_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication_msgs::srv::Liveliness_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication_msgs::srv::Liveliness_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace communication_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Liveliness_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: receiver_id
  {
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << ", ";
  }

  // member: requester_id
  {
    out << "requester_id: ";
    rosidl_generator_traits::value_to_yaml(msg.requester_id, out);
    out << ", ";
  }

  // member: reply
  {
    out << "reply: ";
    rosidl_generator_traits::value_to_yaml(msg.reply, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Liveliness_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: receiver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << "\n";
  }

  // member: requester_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requester_id: ";
    rosidl_generator_traits::value_to_yaml(msg.requester_id, out);
    out << "\n";
  }

  // member: reply
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reply: ";
    rosidl_generator_traits::value_to_yaml(msg.reply, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Liveliness_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace communication_msgs

namespace rosidl_generator_traits
{

[[deprecated("use communication_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication_msgs::srv::Liveliness_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication_msgs::srv::Liveliness_Response & msg)
{
  return communication_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication_msgs::srv::Liveliness_Response>()
{
  return "communication_msgs::srv::Liveliness_Response";
}

template<>
inline const char * name<communication_msgs::srv::Liveliness_Response>()
{
  return "communication_msgs/srv/Liveliness_Response";
}

template<>
struct has_fixed_size<communication_msgs::srv::Liveliness_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication_msgs::srv::Liveliness_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication_msgs::srv::Liveliness_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_msgs::srv::Liveliness>()
{
  return "communication_msgs::srv::Liveliness";
}

template<>
inline const char * name<communication_msgs::srv::Liveliness>()
{
  return "communication_msgs/srv/Liveliness";
}

template<>
struct has_fixed_size<communication_msgs::srv::Liveliness>
  : std::integral_constant<
    bool,
    has_fixed_size<communication_msgs::srv::Liveliness_Request>::value &&
    has_fixed_size<communication_msgs::srv::Liveliness_Response>::value
  >
{
};

template<>
struct has_bounded_size<communication_msgs::srv::Liveliness>
  : std::integral_constant<
    bool,
    has_bounded_size<communication_msgs::srv::Liveliness_Request>::value &&
    has_bounded_size<communication_msgs::srv::Liveliness_Response>::value
  >
{
};

template<>
struct is_service<communication_msgs::srv::Liveliness>
  : std::true_type
{
};

template<>
struct is_service_request<communication_msgs::srv::Liveliness_Request>
  : std::true_type
{
};

template<>
struct is_service_response<communication_msgs::srv::Liveliness_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__TRAITS_HPP_
