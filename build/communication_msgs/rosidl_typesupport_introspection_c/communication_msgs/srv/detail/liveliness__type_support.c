// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication_msgs:srv/Liveliness.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication_msgs/srv/detail/liveliness__rosidl_typesupport_introspection_c.h"
#include "communication_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication_msgs/srv/detail/liveliness__functions.h"
#include "communication_msgs/srv/detail/liveliness__struct.h"


// Include directives for member types
// Member `sender_id`
// Member `request`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_msgs__srv__Liveliness_Request__init(message_memory);
}

void communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_fini_function(void * message_memory)
{
  communication_msgs__srv__Liveliness_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_message_member_array[2] = {
  {
    "sender_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_msgs__srv__Liveliness_Request, sender_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_msgs__srv__Liveliness_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_message_members = {
  "communication_msgs__srv",  // message namespace
  "Liveliness_Request",  // message name
  2,  // number of fields
  sizeof(communication_msgs__srv__Liveliness_Request),
  communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_message_member_array,  // message members
  communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_message_type_support_handle = {
  0,
  &communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, Liveliness_Request)() {
  if (!communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_message_type_support_handle.typesupport_identifier) {
    communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication_msgs__srv__Liveliness_Request__rosidl_typesupport_introspection_c__Liveliness_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "communication_msgs/srv/detail/liveliness__rosidl_typesupport_introspection_c.h"
// already included above
// #include "communication_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "communication_msgs/srv/detail/liveliness__functions.h"
// already included above
// #include "communication_msgs/srv/detail/liveliness__struct.h"


// Include directives for member types
// Member `receiver_id`
// Member `requester_id`
// Member `reply`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_msgs__srv__Liveliness_Response__init(message_memory);
}

void communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_fini_function(void * message_memory)
{
  communication_msgs__srv__Liveliness_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_message_member_array[3] = {
  {
    "receiver_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_msgs__srv__Liveliness_Response, receiver_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requester_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_msgs__srv__Liveliness_Response, requester_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reply",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_msgs__srv__Liveliness_Response, reply),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_message_members = {
  "communication_msgs__srv",  // message namespace
  "Liveliness_Response",  // message name
  3,  // number of fields
  sizeof(communication_msgs__srv__Liveliness_Response),
  communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_message_member_array,  // message members
  communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_message_type_support_handle = {
  0,
  &communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, Liveliness_Response)() {
  if (!communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_message_type_support_handle.typesupport_identifier) {
    communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication_msgs__srv__Liveliness_Response__rosidl_typesupport_introspection_c__Liveliness_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "communication_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "communication_msgs/srv/detail/liveliness__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers communication_msgs__srv__detail__liveliness__rosidl_typesupport_introspection_c__Liveliness_service_members = {
  "communication_msgs__srv",  // service namespace
  "Liveliness",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // communication_msgs__srv__detail__liveliness__rosidl_typesupport_introspection_c__Liveliness_Request_message_type_support_handle,
  NULL  // response message
  // communication_msgs__srv__detail__liveliness__rosidl_typesupport_introspection_c__Liveliness_Response_message_type_support_handle
};

static rosidl_service_type_support_t communication_msgs__srv__detail__liveliness__rosidl_typesupport_introspection_c__Liveliness_service_type_support_handle = {
  0,
  &communication_msgs__srv__detail__liveliness__rosidl_typesupport_introspection_c__Liveliness_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, Liveliness_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, Liveliness_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, Liveliness)() {
  if (!communication_msgs__srv__detail__liveliness__rosidl_typesupport_introspection_c__Liveliness_service_type_support_handle.typesupport_identifier) {
    communication_msgs__srv__detail__liveliness__rosidl_typesupport_introspection_c__Liveliness_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)communication_msgs__srv__detail__liveliness__rosidl_typesupport_introspection_c__Liveliness_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, Liveliness_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_msgs, srv, Liveliness_Response)()->data;
  }

  return &communication_msgs__srv__detail__liveliness__rosidl_typesupport_introspection_c__Liveliness_service_type_support_handle;
}
