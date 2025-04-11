// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_msgs:srv/TaskCompletion.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__TASK_COMPLETION__STRUCT_H_
#define COMMUNICATION_MSGS__SRV__DETAIL__TASK_COMPLETION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'slave_id'
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TaskCompletion in the package communication_msgs.
typedef struct communication_msgs__srv__TaskCompletion_Request
{
  int64_t task_id;
  rosidl_runtime_c__String slave_id;
  rosidl_runtime_c__String status;
} communication_msgs__srv__TaskCompletion_Request;

// Struct for a sequence of communication_msgs__srv__TaskCompletion_Request.
typedef struct communication_msgs__srv__TaskCompletion_Request__Sequence
{
  communication_msgs__srv__TaskCompletion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_msgs__srv__TaskCompletion_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TaskCompletion in the package communication_msgs.
typedef struct communication_msgs__srv__TaskCompletion_Response
{
  rosidl_runtime_c__String message;
} communication_msgs__srv__TaskCompletion_Response;

// Struct for a sequence of communication_msgs__srv__TaskCompletion_Response.
typedef struct communication_msgs__srv__TaskCompletion_Response__Sequence
{
  communication_msgs__srv__TaskCompletion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_msgs__srv__TaskCompletion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__TASK_COMPLETION__STRUCT_H_
