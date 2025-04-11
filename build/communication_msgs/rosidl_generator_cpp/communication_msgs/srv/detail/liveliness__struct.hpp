// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_msgs:srv/Liveliness.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__STRUCT_HPP_
#define COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__communication_msgs__srv__Liveliness_Request __attribute__((deprecated))
#else
# define DEPRECATED__communication_msgs__srv__Liveliness_Request __declspec(deprecated)
#endif

namespace communication_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Liveliness_Request_
{
  using Type = Liveliness_Request_<ContainerAllocator>;

  explicit Liveliness_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = "";
      this->request = "";
    }
  }

  explicit Liveliness_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sender_id(_alloc),
    request(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = "";
      this->request = "";
    }
  }

  // field types and members
  using _sender_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sender_id_type sender_id;
  using _request_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__sender_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sender_id = _arg;
    return *this;
  }
  Type & set__request(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_msgs::srv::Liveliness_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_msgs::srv::Liveliness_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_msgs::srv::Liveliness_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_msgs::srv::Liveliness_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_msgs::srv::Liveliness_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_msgs::srv::Liveliness_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_msgs::srv::Liveliness_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_msgs::srv::Liveliness_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_msgs::srv::Liveliness_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_msgs::srv::Liveliness_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_msgs__srv__Liveliness_Request
    std::shared_ptr<communication_msgs::srv::Liveliness_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_msgs__srv__Liveliness_Request
    std::shared_ptr<communication_msgs::srv::Liveliness_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Liveliness_Request_ & other) const
  {
    if (this->sender_id != other.sender_id) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const Liveliness_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Liveliness_Request_

// alias to use template instance with default allocator
using Liveliness_Request =
  communication_msgs::srv::Liveliness_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication_msgs


#ifndef _WIN32
# define DEPRECATED__communication_msgs__srv__Liveliness_Response __attribute__((deprecated))
#else
# define DEPRECATED__communication_msgs__srv__Liveliness_Response __declspec(deprecated)
#endif

namespace communication_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Liveliness_Response_
{
  using Type = Liveliness_Response_<ContainerAllocator>;

  explicit Liveliness_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->receiver_id = "";
      this->requester_id = "";
      this->reply = "";
    }
  }

  explicit Liveliness_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : receiver_id(_alloc),
    requester_id(_alloc),
    reply(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->receiver_id = "";
      this->requester_id = "";
      this->reply = "";
    }
  }

  // field types and members
  using _receiver_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _receiver_id_type receiver_id;
  using _requester_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _requester_id_type requester_id;
  using _reply_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reply_type reply;

  // setters for named parameter idiom
  Type & set__receiver_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->receiver_id = _arg;
    return *this;
  }
  Type & set__requester_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->requester_id = _arg;
    return *this;
  }
  Type & set__reply(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reply = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_msgs::srv::Liveliness_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_msgs::srv::Liveliness_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_msgs::srv::Liveliness_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_msgs::srv::Liveliness_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_msgs::srv::Liveliness_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_msgs::srv::Liveliness_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_msgs::srv::Liveliness_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_msgs::srv::Liveliness_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_msgs::srv::Liveliness_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_msgs::srv::Liveliness_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_msgs__srv__Liveliness_Response
    std::shared_ptr<communication_msgs::srv::Liveliness_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_msgs__srv__Liveliness_Response
    std::shared_ptr<communication_msgs::srv::Liveliness_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Liveliness_Response_ & other) const
  {
    if (this->receiver_id != other.receiver_id) {
      return false;
    }
    if (this->requester_id != other.requester_id) {
      return false;
    }
    if (this->reply != other.reply) {
      return false;
    }
    return true;
  }
  bool operator!=(const Liveliness_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Liveliness_Response_

// alias to use template instance with default allocator
using Liveliness_Response =
  communication_msgs::srv::Liveliness_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication_msgs

namespace communication_msgs
{

namespace srv
{

struct Liveliness
{
  using Request = communication_msgs::srv::Liveliness_Request;
  using Response = communication_msgs::srv::Liveliness_Response;
};

}  // namespace srv

}  // namespace communication_msgs

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__STRUCT_HPP_
