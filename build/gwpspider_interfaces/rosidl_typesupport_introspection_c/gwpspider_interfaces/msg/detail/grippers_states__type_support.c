// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gwpspider_interfaces:msg/GrippersStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gwpspider_interfaces/msg/detail/grippers_states__rosidl_typesupport_introspection_c.h"
#include "gwpspider_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gwpspider_interfaces/msg/detail/grippers_states__functions.h"
#include "gwpspider_interfaces/msg/detail/grippers_states__struct.h"


// Include directives for member types
// Member `first_gripper`
// Member `second_gripper`
// Member `third_gripper`
// Member `fourth_gripper`
// Member `fifth_gripper`
#include "gwpspider_interfaces/msg/gripper_state.h"
// Member `first_gripper`
// Member `second_gripper`
// Member `third_gripper`
// Member `fourth_gripper`
// Member `fifth_gripper`
#include "gwpspider_interfaces/msg/detail/gripper_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gwpspider_interfaces__msg__GrippersStates__init(message_memory);
}

void gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_fini_function(void * message_memory)
{
  gwpspider_interfaces__msg__GrippersStates__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_member_array[5] = {
  {
    "first_gripper",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gwpspider_interfaces__msg__GrippersStates, first_gripper),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second_gripper",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gwpspider_interfaces__msg__GrippersStates, second_gripper),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "third_gripper",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gwpspider_interfaces__msg__GrippersStates, third_gripper),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fourth_gripper",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gwpspider_interfaces__msg__GrippersStates, fourth_gripper),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fifth_gripper",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gwpspider_interfaces__msg__GrippersStates, fifth_gripper),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_members = {
  "gwpspider_interfaces__msg",  // message namespace
  "GrippersStates",  // message name
  5,  // number of fields
  sizeof(gwpspider_interfaces__msg__GrippersStates),
  gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_member_array,  // message members
  gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_init_function,  // function to initialize message memory (memory has to be allocated)
  gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_type_support_handle = {
  0,
  &gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gwpspider_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gwpspider_interfaces, msg, GrippersStates)() {
  gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gwpspider_interfaces, msg, GripperState)();
  gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gwpspider_interfaces, msg, GripperState)();
  gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gwpspider_interfaces, msg, GripperState)();
  gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gwpspider_interfaces, msg, GripperState)();
  gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gwpspider_interfaces, msg, GripperState)();
  if (!gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_type_support_handle.typesupport_identifier) {
    gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gwpspider_interfaces__msg__GrippersStates__rosidl_typesupport_introspection_c__GrippersStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
