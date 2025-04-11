// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_msgs:srv/Liveliness.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__STRUCT_H_
#define COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sender_id'
// Member 'request'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Liveliness in the package communication_msgs.
typedef struct communication_msgs__srv__Liveliness_Request
{
  rosidl_runtime_c__String sender_id;
  rosidl_runtime_c__String request;
} communication_msgs__srv__Liveliness_Request;

// Struct for a sequence of communication_msgs__srv__Liveliness_Request.
typedef struct communication_msgs__srv__Liveliness_Request__Sequence
{
  communication_msgs__srv__Liveliness_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_msgs__srv__Liveliness_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'receiver_id'
// Member 'requester_id'
// Member 'reply'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Liveliness in the package communication_msgs.
typedef struct communication_msgs__srv__Liveliness_Response
{
  rosidl_runtime_c__String receiver_id;
  rosidl_runtime_c__String requester_id;
  rosidl_runtime_c__String reply;
} communication_msgs__srv__Liveliness_Response;

// Struct for a sequence of communication_msgs__srv__Liveliness_Response.
typedef struct communication_msgs__srv__Liveliness_Response__Sequence
{
  communication_msgs__srv__Liveliness_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_msgs__srv__Liveliness_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__LIVELINESS__STRUCT_H_
