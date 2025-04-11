// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication_msgs:srv/TaskCompletion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication_msgs/srv/detail/task_completion__rosidl_typesupport_introspection_c.h"
#include "communication_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication_msgs/srv/detail/task_completion__functions.h"
#include "communication_msgs/srv/detail/task_completion__struct.h"


// Include directives for member types
// Member `slave_id`
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_msgs__srv__TaskCompletion_Request__init(message_memory);
}

void communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_fini_function(void * message_memory)
{
  communication_msgs__srv__TaskCompletion_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_message_member_array[3] = {
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_msgs__srv__TaskCompletion_Request, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slave_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_msgs__srv__TaskCompletion_Request, slave_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_msgs__srv__TaskCompletion_Request, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_message_members = {
  "communication_msgs__srv",  // message namespace
  "TaskCompletion_Request",  // message name
  3,  // number of fields
  sizeof(communication_msgs__srv__TaskCompletion_Request),
  communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_message_member_array,  // message members
  communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_message_type_support_handle = {
  0,
  &communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, TaskCompletion_Request)() {
  if (!communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_message_type_support_handle.typesupport_identifier) {
    communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication_msgs__srv__TaskCompletion_Request__rosidl_typesupport_introspection_c__TaskCompletion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "communication_msgs/srv/detail/task_completion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "communication_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "communication_msgs/srv/detail/task_completion__functions.h"
// already included above
// #include "communication_msgs/srv/detail/task_completion__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_msgs__srv__TaskCompletion_Response__init(message_memory);
}

void communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_fini_function(void * message_memory)
{
  communication_msgs__srv__TaskCompletion_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_message_member_array[1] = {
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_msgs__srv__TaskCompletion_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_message_members = {
  "communication_msgs__srv",  // message namespace
  "TaskCompletion_Response",  // message name
  1,  // number of fields
  sizeof(communication_msgs__srv__TaskCompletion_Response),
  communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_message_member_array,  // message members
  communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_message_type_support_handle = {
  0,
  &communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, TaskCompletion_Response)() {
  if (!communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_message_type_support_handle.typesupport_identifier) {
    communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication_msgs__srv__TaskCompletion_Response__rosidl_typesupport_introspection_c__TaskCompletion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "communication_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "communication_msgs/srv/detail/task_completion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers communication_msgs__srv__detail__task_completion__rosidl_typesupport_introspection_c__TaskCompletion_service_members = {
  "communication_msgs__srv",  // service namespace
  "TaskCompletion",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // communication_msgs__srv__detail__task_completion__rosidl_typesupport_introspection_c__TaskCompletion_Request_message_type_support_handle,
  NULL  // response message
  // communication_msgs__srv__detail__task_completion__rosidl_typesupport_introspection_c__TaskCompletion_Response_message_type_support_handle
};

static rosidl_service_type_support_t communication_msgs__srv__detail__task_completion__rosidl_typesupport_introspection_c__TaskCompletion_service_type_support_handle = {
  0,
  &communication_msgs__srv__detail__task_completion__rosidl_typesupport_introspection_c__TaskCompletion_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, TaskCompletion_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, TaskCompletion_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, TaskCompletion)() {
  if (!communication_msgs__srv__detail__task_completion__rosidl_typesupport_introspection_c__TaskCompletion_service_type_support_handle.typesupport_identifier) {
    communication_msgs__srv__detail__task_completion__rosidl_typesupport_introspection_c__TaskCompletion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)communication_msgs__srv__detail__task_completion__rosidl_typesupport_introspection_c__TaskCompletion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, TaskCompletion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, TaskCompletion_Response)()->data;
  }

  return &communication_msgs__srv__detail__task_completion__rosidl_typesupport_introspection_c__TaskCompletion_service_type_support_handle;
}
