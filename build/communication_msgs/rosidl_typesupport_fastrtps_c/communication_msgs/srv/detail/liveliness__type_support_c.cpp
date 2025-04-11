// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from communication_msgs:srv/Liveliness.idl
// generated code does not contain a copyright notice
#include "communication_msgs/srv/detail/liveliness__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "communication_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "communication_msgs/srv/detail/liveliness__struct.h"
#include "communication_msgs/srv/detail/liveliness__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // request, sender_id
#include "rosidl_runtime_c/string_functions.h"  // request, sender_id

// forward declare type support functions


using _Liveliness_Request__ros_msg_type = communication_msgs__srv__Liveliness_Request;

static bool _Liveliness_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Liveliness_Request__ros_msg_type * ros_message = static_cast<const _Liveliness_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: sender_id
  {
    const rosidl_runtime_c__String * str = &ros_message->sender_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: request
  {
    const rosidl_runtime_c__String * str = &ros_message->request;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Liveliness_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Liveliness_Request__ros_msg_type * ros_message = static_cast<_Liveliness_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: sender_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sender_id.data) {
      rosidl_runtime_c__String__init(&ros_message->sender_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sender_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sender_id'\n");
      return false;
    }
  }

  // Field name: request
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->request.data) {
      rosidl_runtime_c__String__init(&ros_message->request);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->request,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'request'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_communication_msgs
size_t get_serialized_size_communication_msgs__srv__Liveliness_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Liveliness_Request__ros_msg_type * ros_message = static_cast<const _Liveliness_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sender_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sender_id.size + 1);
  // field.name request
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->request.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Liveliness_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_communication_msgs__srv__Liveliness_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_communication_msgs
size_t max_serialized_size_communication_msgs__srv__Liveliness_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sender_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: request
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = communication_msgs__srv__Liveliness_Request;
    is_plain =
      (
      offsetof(DataType, request) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Liveliness_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_communication_msgs__srv__Liveliness_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Liveliness_Request = {
  "communication_msgs::srv",
  "Liveliness_Request",
  _Liveliness_Request__cdr_serialize,
  _Liveliness_Request__cdr_deserialize,
  _Liveliness_Request__get_serialized_size,
  _Liveliness_Request__max_serialized_size
};

static rosidl_message_type_support_t _Liveliness_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Liveliness_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_msgs, srv, Liveliness_Request)() {
  return &_Liveliness_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "communication_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "communication_msgs/srv/detail/liveliness__struct.h"
// already included above
// #include "communication_msgs/srv/detail/liveliness__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // receiver_id, reply, requester_id
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // receiver_id, reply, requester_id

// forward declare type support functions


using _Liveliness_Response__ros_msg_type = communication_msgs__srv__Liveliness_Response;

static bool _Liveliness_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Liveliness_Response__ros_msg_type * ros_message = static_cast<const _Liveliness_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: receiver_id
  {
    const rosidl_runtime_c__String * str = &ros_message->receiver_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: requester_id
  {
    const rosidl_runtime_c__String * str = &ros_message->requester_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: reply
  {
    const rosidl_runtime_c__String * str = &ros_message->reply;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Liveliness_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Liveliness_Response__ros_msg_type * ros_message = static_cast<_Liveliness_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: receiver_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->receiver_id.data) {
      rosidl_runtime_c__String__init(&ros_message->receiver_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->receiver_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'receiver_id'\n");
      return false;
    }
  }

  // Field name: requester_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->requester_id.data) {
      rosidl_runtime_c__String__init(&ros_message->requester_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->requester_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'requester_id'\n");
      return false;
    }
  }

  // Field name: reply
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reply.data) {
      rosidl_runtime_c__String__init(&ros_message->reply);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reply,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reply'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_communication_msgs
size_t get_serialized_size_communication_msgs__srv__Liveliness_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Liveliness_Response__ros_msg_type * ros_message = static_cast<const _Liveliness_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name receiver_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->receiver_id.size + 1);
  // field.name requester_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->requester_id.size + 1);
  // field.name reply
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reply.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Liveliness_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_communication_msgs__srv__Liveliness_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_communication_msgs
size_t max_serialized_size_communication_msgs__srv__Liveliness_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: receiver_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: requester_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: reply
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = communication_msgs__srv__Liveliness_Response;
    is_plain =
      (
      offsetof(DataType, reply) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Liveliness_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_communication_msgs__srv__Liveliness_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Liveliness_Response = {
  "communication_msgs::srv",
  "Liveliness_Response",
  _Liveliness_Response__cdr_serialize,
  _Liveliness_Response__cdr_deserialize,
  _Liveliness_Response__get_serialized_size,
  _Liveliness_Response__max_serialized_size
};

static rosidl_message_type_support_t _Liveliness_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Liveliness_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_msgs, srv, Liveliness_Response)() {
  return &_Liveliness_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "communication_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "communication_msgs/srv/liveliness.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Liveliness__callbacks = {
  "communication_msgs::srv",
  "Liveliness",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_msgs, srv, Liveliness_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_msgs, srv, Liveliness_Response)(),
};

static rosidl_service_type_support_t Liveliness__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Liveliness__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_msgs, srv, Liveliness)() {
  return &Liveliness__handle;
}

#if defined(__cplusplus)
}
#endif
