// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_msgs:srv/Liveliness.idl
// generated code does not contain a copyright notice
#include "communication_msgs/srv/detail/liveliness__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `sender_id`
// Member `request`
#include "rosidl_runtime_c/string_functions.h"

bool
communication_msgs__srv__Liveliness_Request__init(communication_msgs__srv__Liveliness_Request * msg)
{
  if (!msg) {
    return false;
  }
  // sender_id
  if (!rosidl_runtime_c__String__init(&msg->sender_id)) {
    communication_msgs__srv__Liveliness_Request__fini(msg);
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__init(&msg->request)) {
    communication_msgs__srv__Liveliness_Request__fini(msg);
    return false;
  }
  return true;
}

void
communication_msgs__srv__Liveliness_Request__fini(communication_msgs__srv__Liveliness_Request * msg)
{
  if (!msg) {
    return;
  }
  // sender_id
  rosidl_runtime_c__String__fini(&msg->sender_id);
  // request
  rosidl_runtime_c__String__fini(&msg->request);
}

bool
communication_msgs__srv__Liveliness_Request__are_equal(const communication_msgs__srv__Liveliness_Request * lhs, const communication_msgs__srv__Liveliness_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sender_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sender_id), &(rhs->sender_id)))
  {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  return true;
}

bool
communication_msgs__srv__Liveliness_Request__copy(
  const communication_msgs__srv__Liveliness_Request * input,
  communication_msgs__srv__Liveliness_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // sender_id
  if (!rosidl_runtime_c__String__copy(
      &(input->sender_id), &(output->sender_id)))
  {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  return true;
}

communication_msgs__srv__Liveliness_Request *
communication_msgs__srv__Liveliness_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_msgs__srv__Liveliness_Request * msg = (communication_msgs__srv__Liveliness_Request *)allocator.allocate(sizeof(communication_msgs__srv__Liveliness_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_msgs__srv__Liveliness_Request));
  bool success = communication_msgs__srv__Liveliness_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_msgs__srv__Liveliness_Request__destroy(communication_msgs__srv__Liveliness_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_msgs__srv__Liveliness_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_msgs__srv__Liveliness_Request__Sequence__init(communication_msgs__srv__Liveliness_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_msgs__srv__Liveliness_Request * data = NULL;

  if (size) {
    data = (communication_msgs__srv__Liveliness_Request *)allocator.zero_allocate(size, sizeof(communication_msgs__srv__Liveliness_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_msgs__srv__Liveliness_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_msgs__srv__Liveliness_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
communication_msgs__srv__Liveliness_Request__Sequence__fini(communication_msgs__srv__Liveliness_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication_msgs__srv__Liveliness_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

communication_msgs__srv__Liveliness_Request__Sequence *
communication_msgs__srv__Liveliness_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_msgs__srv__Liveliness_Request__Sequence * array = (communication_msgs__srv__Liveliness_Request__Sequence *)allocator.allocate(sizeof(communication_msgs__srv__Liveliness_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_msgs__srv__Liveliness_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_msgs__srv__Liveliness_Request__Sequence__destroy(communication_msgs__srv__Liveliness_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_msgs__srv__Liveliness_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_msgs__srv__Liveliness_Request__Sequence__are_equal(const communication_msgs__srv__Liveliness_Request__Sequence * lhs, const communication_msgs__srv__Liveliness_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_msgs__srv__Liveliness_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_msgs__srv__Liveliness_Request__Sequence__copy(
  const communication_msgs__srv__Liveliness_Request__Sequence * input,
  communication_msgs__srv__Liveliness_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_msgs__srv__Liveliness_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication_msgs__srv__Liveliness_Request * data =
      (communication_msgs__srv__Liveliness_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_msgs__srv__Liveliness_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication_msgs__srv__Liveliness_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication_msgs__srv__Liveliness_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `receiver_id`
// Member `requester_id`
// Member `reply`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
communication_msgs__srv__Liveliness_Response__init(communication_msgs__srv__Liveliness_Response * msg)
{
  if (!msg) {
    return false;
  }
  // receiver_id
  if (!rosidl_runtime_c__String__init(&msg->receiver_id)) {
    communication_msgs__srv__Liveliness_Response__fini(msg);
    return false;
  }
  // requester_id
  if (!rosidl_runtime_c__String__init(&msg->requester_id)) {
    communication_msgs__srv__Liveliness_Response__fini(msg);
    return false;
  }
  // reply
  if (!rosidl_runtime_c__String__init(&msg->reply)) {
    communication_msgs__srv__Liveliness_Response__fini(msg);
    return false;
  }
  return true;
}

void
communication_msgs__srv__Liveliness_Response__fini(communication_msgs__srv__Liveliness_Response * msg)
{
  if (!msg) {
    return;
  }
  // receiver_id
  rosidl_runtime_c__String__fini(&msg->receiver_id);
  // requester_id
  rosidl_runtime_c__String__fini(&msg->requester_id);
  // reply
  rosidl_runtime_c__String__fini(&msg->reply);
}

bool
communication_msgs__srv__Liveliness_Response__are_equal(const communication_msgs__srv__Liveliness_Response * lhs, const communication_msgs__srv__Liveliness_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // receiver_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->receiver_id), &(rhs->receiver_id)))
  {
    return false;
  }
  // requester_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->requester_id), &(rhs->requester_id)))
  {
    return false;
  }
  // reply
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reply), &(rhs->reply)))
  {
    return false;
  }
  return true;
}

bool
communication_msgs__srv__Liveliness_Response__copy(
  const communication_msgs__srv__Liveliness_Response * input,
  communication_msgs__srv__Liveliness_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // receiver_id
  if (!rosidl_runtime_c__String__copy(
      &(input->receiver_id), &(output->receiver_id)))
  {
    return false;
  }
  // requester_id
  if (!rosidl_runtime_c__String__copy(
      &(input->requester_id), &(output->requester_id)))
  {
    return false;
  }
  // reply
  if (!rosidl_runtime_c__String__copy(
      &(input->reply), &(output->reply)))
  {
    return false;
  }
  return true;
}

communication_msgs__srv__Liveliness_Response *
communication_msgs__srv__Liveliness_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_msgs__srv__Liveliness_Response * msg = (communication_msgs__srv__Liveliness_Response *)allocator.allocate(sizeof(communication_msgs__srv__Liveliness_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_msgs__srv__Liveliness_Response));
  bool success = communication_msgs__srv__Liveliness_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_msgs__srv__Liveliness_Response__destroy(communication_msgs__srv__Liveliness_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_msgs__srv__Liveliness_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_msgs__srv__Liveliness_Response__Sequence__init(communication_msgs__srv__Liveliness_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_msgs__srv__Liveliness_Response * data = NULL;

  if (size) {
    data = (communication_msgs__srv__Liveliness_Response *)allocator.zero_allocate(size, sizeof(communication_msgs__srv__Liveliness_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_msgs__srv__Liveliness_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_msgs__srv__Liveliness_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
communication_msgs__srv__Liveliness_Response__Sequence__fini(communication_msgs__srv__Liveliness_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication_msgs__srv__Liveliness_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

communication_msgs__srv__Liveliness_Response__Sequence *
communication_msgs__srv__Liveliness_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_msgs__srv__Liveliness_Response__Sequence * array = (communication_msgs__srv__Liveliness_Response__Sequence *)allocator.allocate(sizeof(communication_msgs__srv__Liveliness_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_msgs__srv__Liveliness_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_msgs__srv__Liveliness_Response__Sequence__destroy(communication_msgs__srv__Liveliness_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_msgs__srv__Liveliness_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_msgs__srv__Liveliness_Response__Sequence__are_equal(const communication_msgs__srv__Liveliness_Response__Sequence * lhs, const communication_msgs__srv__Liveliness_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_msgs__srv__Liveliness_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_msgs__srv__Liveliness_Response__Sequence__copy(
  const communication_msgs__srv__Liveliness_Response__Sequence * input,
  communication_msgs__srv__Liveliness_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_msgs__srv__Liveliness_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication_msgs__srv__Liveliness_Response * data =
      (communication_msgs__srv__Liveliness_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_msgs__srv__Liveliness_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication_msgs__srv__Liveliness_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication_msgs__srv__Liveliness_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
