// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from communication_msgs:srv/TaskAssignment.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__FUNCTIONS_H_
#define COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "communication_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "communication_msgs/srv/detail/task_assignment__struct.h"

/// Initialize srv/TaskAssignment message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * communication_msgs__srv__TaskAssignment_Request
 * )) before or use
 * communication_msgs__srv__TaskAssignment_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Request__init(communication_msgs__srv__TaskAssignment_Request * msg);

/// Finalize srv/TaskAssignment message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
void
communication_msgs__srv__TaskAssignment_Request__fini(communication_msgs__srv__TaskAssignment_Request * msg);

/// Create srv/TaskAssignment message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * communication_msgs__srv__TaskAssignment_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
communication_msgs__srv__TaskAssignment_Request *
communication_msgs__srv__TaskAssignment_Request__create();

/// Destroy srv/TaskAssignment message.
/**
 * It calls
 * communication_msgs__srv__TaskAssignment_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
void
communication_msgs__srv__TaskAssignment_Request__destroy(communication_msgs__srv__TaskAssignment_Request * msg);

/// Check for srv/TaskAssignment message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Request__are_equal(const communication_msgs__srv__TaskAssignment_Request * lhs, const communication_msgs__srv__TaskAssignment_Request * rhs);

/// Copy a srv/TaskAssignment message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Request__copy(
  const communication_msgs__srv__TaskAssignment_Request * input,
  communication_msgs__srv__TaskAssignment_Request * output);

/// Initialize array of srv/TaskAssignment messages.
/**
 * It allocates the memory for the number of elements and calls
 * communication_msgs__srv__TaskAssignment_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Request__Sequence__init(communication_msgs__srv__TaskAssignment_Request__Sequence * array, size_t size);

/// Finalize array of srv/TaskAssignment messages.
/**
 * It calls
 * communication_msgs__srv__TaskAssignment_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
void
communication_msgs__srv__TaskAssignment_Request__Sequence__fini(communication_msgs__srv__TaskAssignment_Request__Sequence * array);

/// Create array of srv/TaskAssignment messages.
/**
 * It allocates the memory for the array and calls
 * communication_msgs__srv__TaskAssignment_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
communication_msgs__srv__TaskAssignment_Request__Sequence *
communication_msgs__srv__TaskAssignment_Request__Sequence__create(size_t size);

/// Destroy array of srv/TaskAssignment messages.
/**
 * It calls
 * communication_msgs__srv__TaskAssignment_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
void
communication_msgs__srv__TaskAssignment_Request__Sequence__destroy(communication_msgs__srv__TaskAssignment_Request__Sequence * array);

/// Check for srv/TaskAssignment message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Request__Sequence__are_equal(const communication_msgs__srv__TaskAssignment_Request__Sequence * lhs, const communication_msgs__srv__TaskAssignment_Request__Sequence * rhs);

/// Copy an array of srv/TaskAssignment messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Request__Sequence__copy(
  const communication_msgs__srv__TaskAssignment_Request__Sequence * input,
  communication_msgs__srv__TaskAssignment_Request__Sequence * output);

/// Initialize srv/TaskAssignment message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * communication_msgs__srv__TaskAssignment_Response
 * )) before or use
 * communication_msgs__srv__TaskAssignment_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Response__init(communication_msgs__srv__TaskAssignment_Response * msg);

/// Finalize srv/TaskAssignment message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
void
communication_msgs__srv__TaskAssignment_Response__fini(communication_msgs__srv__TaskAssignment_Response * msg);

/// Create srv/TaskAssignment message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * communication_msgs__srv__TaskAssignment_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
communication_msgs__srv__TaskAssignment_Response *
communication_msgs__srv__TaskAssignment_Response__create();

/// Destroy srv/TaskAssignment message.
/**
 * It calls
 * communication_msgs__srv__TaskAssignment_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
void
communication_msgs__srv__TaskAssignment_Response__destroy(communication_msgs__srv__TaskAssignment_Response * msg);

/// Check for srv/TaskAssignment message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Response__are_equal(const communication_msgs__srv__TaskAssignment_Response * lhs, const communication_msgs__srv__TaskAssignment_Response * rhs);

/// Copy a srv/TaskAssignment message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Response__copy(
  const communication_msgs__srv__TaskAssignment_Response * input,
  communication_msgs__srv__TaskAssignment_Response * output);

/// Initialize array of srv/TaskAssignment messages.
/**
 * It allocates the memory for the number of elements and calls
 * communication_msgs__srv__TaskAssignment_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Response__Sequence__init(communication_msgs__srv__TaskAssignment_Response__Sequence * array, size_t size);

/// Finalize array of srv/TaskAssignment messages.
/**
 * It calls
 * communication_msgs__srv__TaskAssignment_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
void
communication_msgs__srv__TaskAssignment_Response__Sequence__fini(communication_msgs__srv__TaskAssignment_Response__Sequence * array);

/// Create array of srv/TaskAssignment messages.
/**
 * It allocates the memory for the array and calls
 * communication_msgs__srv__TaskAssignment_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
communication_msgs__srv__TaskAssignment_Response__Sequence *
communication_msgs__srv__TaskAssignment_Response__Sequence__create(size_t size);

/// Destroy array of srv/TaskAssignment messages.
/**
 * It calls
 * communication_msgs__srv__TaskAssignment_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
void
communication_msgs__srv__TaskAssignment_Response__Sequence__destroy(communication_msgs__srv__TaskAssignment_Response__Sequence * array);

/// Check for srv/TaskAssignment message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Response__Sequence__are_equal(const communication_msgs__srv__TaskAssignment_Response__Sequence * lhs, const communication_msgs__srv__TaskAssignment_Response__Sequence * rhs);

/// Copy an array of srv/TaskAssignment messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication_msgs
bool
communication_msgs__srv__TaskAssignment_Response__Sequence__copy(
  const communication_msgs__srv__TaskAssignment_Response__Sequence * input,
  communication_msgs__srv__TaskAssignment_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_MSGS__SRV__DETAIL__TASK_ASSIGNMENT__FUNCTIONS_H_
