// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_msgs:srv/TaskAssignment.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__STRUCT_HPP_
#define COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__communication_msgs__srv__TaskAssignment_Request __attribute__((deprecated))
#else
# define DEPRECATED__communication_msgs__srv__TaskAssignment_Request __declspec(deprecated)
#endif

namespace communication_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskAssignment_Request_
{
  using Type = TaskAssignment_Request_<ContainerAllocator>;

  explicit TaskAssignment_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = 0ll;
    }
  }

  explicit TaskAssignment_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = 0ll;
    }
  }

  // field types and members
  using _task_id_type =
    int64_t;
  _task_id_type task_id;
  using _coordinates_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _coordinates_type coordinates;

  // setters for named parameter idiom
  Type & set__task_id(
    const int64_t & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__coordinates(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->coordinates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_msgs__srv__TaskAssignment_Request
    std::shared_ptr<communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_msgs__srv__TaskAssignment_Request
    std::shared_ptr<communication_msgs::srv::TaskAssignment_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskAssignment_Request_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->coordinates != other.coordinates) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskAssignment_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskAssignment_Request_

// alias to use template instance with default allocator
using TaskAssignment_Request =
  communication_msgs::srv::TaskAssignment_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication_msgs


#ifndef _WIN32
# define DEPRECATED__communication_msgs__srv__TaskAssignment_Response __attribute__((deprecated))
#else
# define DEPRECATED__communication_msgs__srv__TaskAssignment_Response __declspec(deprecated)
#endif

namespace communication_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskAssignment_Response_
{
  using Type = TaskAssignment_Response_<ContainerAllocator>;

  explicit TaskAssignment_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit TaskAssignment_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_msgs__srv__TaskAssignment_Response
    std::shared_ptr<communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_msgs__srv__TaskAssignment_Response
    std::shared_ptr<communication_msgs::srv::TaskAssignment_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskAssignment_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskAssignment_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskAssignment_Response_

// alias to use template instance with default allocator
using TaskAssignment_Response =
  communication_msgs::srv::TaskAssignment_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication_msgs

namespace communication_msgs
{

namespace srv
{

struct TaskAssignment
{
  using Request = communication_msgs::srv::TaskAssignment_Request;
  using Response = communication_msgs::srv::TaskAssignment_Response;
};

}  // namespace srv

}  // namespace communication_msgs

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__STRUCT_HPP_
