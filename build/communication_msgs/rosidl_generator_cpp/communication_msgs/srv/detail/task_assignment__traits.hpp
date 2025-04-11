// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication_msgs:srv/TaskAssignment.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__TRAITS_HPP_
#define COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication_msgs/srv/detail/task_assignment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace communication_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskAssignment_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: coordinates
  {
    out << "coordinates: ";
    to_flow_style_yaml(msg.coordinates, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskAssignment_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinates:\n";
    to_block_style_yaml(msg.coordinates, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskAssignment_Request & msg, bool use_flow_style = false)
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
  const communication_msgs::srv::TaskAssignment_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication_msgs::srv::TaskAssignment_Request & msg)
{
  return communication_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication_msgs::srv::TaskAssignment_Request>()
{
  return "communication_msgs::srv::TaskAssignment_Request";
}

template<>
inline const char * name<communication_msgs::srv::TaskAssignment_Request>()
{
  return "communication_msgs/srv/TaskAssignment_Request";
}

template<>
struct has_fixed_size<communication_msgs::srv::TaskAssignment_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<communication_msgs::srv::TaskAssignment_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<communication_msgs::srv::TaskAssignment_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace communication_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskAssignment_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskAssignment_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskAssignment_Response & msg, bool use_flow_style = false)
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
  const communication_msgs::srv::TaskAssignment_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication_msgs::srv::TaskAssignment_Response & msg)
{
  return communication_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication_msgs::srv::TaskAssignment_Response>()
{
  return "communication_msgs::srv::TaskAssignment_Response";
}

template<>
inline const char * name<communication_msgs::srv::TaskAssignment_Response>()
{
  return "communication_msgs/srv/TaskAssignment_Response";
}

template<>
struct has_fixed_size<communication_msgs::srv::TaskAssignment_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication_msgs::srv::TaskAssignment_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication_msgs::srv::TaskAssignment_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_msgs::srv::TaskAssignment>()
{
  return "communication_msgs::srv::TaskAssignment";
}

template<>
inline const char * name<communication_msgs::srv::TaskAssignment>()
{
  return "communication_msgs/srv/TaskAssignment";
}

template<>
struct has_fixed_size<communication_msgs::srv::TaskAssignment>
  : std::integral_constant<
    bool,
    has_fixed_size<communication_msgs::srv::TaskAssignment_Request>::value &&
    has_fixed_size<communication_msgs::srv::TaskAssignment_Response>::value
  >
{
};

template<>
struct has_bounded_size<communication_msgs::srv::TaskAssignment>
  : std::integral_constant<
    bool,
    has_bounded_size<communication_msgs::srv::TaskAssignment_Request>::value &&
    has_bounded_size<communication_msgs::srv::TaskAssignment_Response>::value
  >
{
};

template<>
struct is_service<communication_msgs::srv::TaskAssignment>
  : std::true_type
{
};

template<>
struct is_service_request<communication_msgs::srv::TaskAssignment_Request>
  : std::true_type
{
};

template<>
struct is_service_response<communication_msgs::srv::TaskAssignment_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__TRAITS_HPP_
