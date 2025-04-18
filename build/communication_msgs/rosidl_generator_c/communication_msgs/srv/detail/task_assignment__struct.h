// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_msgs:srv/TaskAssignment.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__STRUCT_H_
#define COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/TaskAssignment in the package communication_msgs.
typedef struct communication_msgs__srv__TaskAssignment_Request
{
  int64_t task_id;
  geometry_msgs__msg__Point coordinates;
} communication_msgs__srv__TaskAssignment_Request;

// Struct for a sequence of communication_msgs__srv__TaskAssignment_Request.
typedef struct communication_msgs__srv__TaskAssignment_Request__Sequence
{
  communication_msgs__srv__TaskAssignment_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_msgs__srv__TaskAssignment_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TaskAssignment in the package communication_msgs.
typedef struct communication_msgs__srv__TaskAssignment_Response
{
  rosidl_runtime_c__String message;
} communication_msgs__srv__TaskAssignment_Response;

// Struct for a sequence of communication_msgs__srv__TaskAssignment_Response.
typedef struct communication_msgs__srv__TaskAssignment_Response__Sequence
{
  communication_msgs__srv__TaskAssignment_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_msgs__srv__TaskAssignment_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__STRUCT_H_
