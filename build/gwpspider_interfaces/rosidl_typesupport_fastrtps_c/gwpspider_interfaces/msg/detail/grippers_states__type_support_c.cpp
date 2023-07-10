// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gwpspider_interfaces:msg/GrippersStates.idl
// generated code does not contain a copyright notice
#include "gwpspider_interfaces/msg/detail/grippers_states__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gwpspider_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gwpspider_interfaces/msg/detail/grippers_states__struct.h"
#include "gwpspider_interfaces/msg/detail/grippers_states__functions.h"
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

#include "gwpspider_interfaces/msg/detail/gripper_state__functions.h"  // fifth_gripper, first_gripper, fourth_gripper, second_gripper, third_gripper

// forward declare type support functions
size_t get_serialized_size_gwpspider_interfaces__msg__GripperState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gwpspider_interfaces__msg__GripperState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState)();


using _GrippersStates__ros_msg_type = gwpspider_interfaces__msg__GrippersStates;

static bool _GrippersStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GrippersStates__ros_msg_type * ros_message = static_cast<const _GrippersStates__ros_msg_type *>(untyped_ros_message);
  // Field name: first_gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->first_gripper, cdr))
    {
      return false;
    }
  }

  // Field name: second_gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->second_gripper, cdr))
    {
      return false;
    }
  }

  // Field name: third_gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->third_gripper, cdr))
    {
      return false;
    }
  }

  // Field name: fourth_gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fourth_gripper, cdr))
    {
      return false;
    }
  }

  // Field name: fifth_gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fifth_gripper, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GrippersStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GrippersStates__ros_msg_type * ros_message = static_cast<_GrippersStates__ros_msg_type *>(untyped_ros_message);
  // Field name: first_gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->first_gripper))
    {
      return false;
    }
  }

  // Field name: second_gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->second_gripper))
    {
      return false;
    }
  }

  // Field name: third_gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->third_gripper))
    {
      return false;
    }
  }

  // Field name: fourth_gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fourth_gripper))
    {
      return false;
    }
  }

  // Field name: fifth_gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GripperState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fifth_gripper))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gwpspider_interfaces
size_t get_serialized_size_gwpspider_interfaces__msg__GrippersStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GrippersStates__ros_msg_type * ros_message = static_cast<const _GrippersStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name first_gripper

  current_alignment += get_serialized_size_gwpspider_interfaces__msg__GripperState(
    &(ros_message->first_gripper), current_alignment);
  // field.name second_gripper

  current_alignment += get_serialized_size_gwpspider_interfaces__msg__GripperState(
    &(ros_message->second_gripper), current_alignment);
  // field.name third_gripper

  current_alignment += get_serialized_size_gwpspider_interfaces__msg__GripperState(
    &(ros_message->third_gripper), current_alignment);
  // field.name fourth_gripper

  current_alignment += get_serialized_size_gwpspider_interfaces__msg__GripperState(
    &(ros_message->fourth_gripper), current_alignment);
  // field.name fifth_gripper

  current_alignment += get_serialized_size_gwpspider_interfaces__msg__GripperState(
    &(ros_message->fifth_gripper), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GrippersStates__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gwpspider_interfaces__msg__GrippersStates(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gwpspider_interfaces
size_t max_serialized_size_gwpspider_interfaces__msg__GrippersStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: first_gripper
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_gwpspider_interfaces__msg__GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: second_gripper
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_gwpspider_interfaces__msg__GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: third_gripper
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_gwpspider_interfaces__msg__GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fourth_gripper
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_gwpspider_interfaces__msg__GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fifth_gripper
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_gwpspider_interfaces__msg__GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GrippersStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gwpspider_interfaces__msg__GrippersStates(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GrippersStates = {
  "gwpspider_interfaces::msg",
  "GrippersStates",
  _GrippersStates__cdr_serialize,
  _GrippersStates__cdr_deserialize,
  _GrippersStates__get_serialized_size,
  _GrippersStates__max_serialized_size
};

static rosidl_message_type_support_t _GrippersStates__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GrippersStates,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gwpspider_interfaces, msg, GrippersStates)() {
  return &_GrippersStates__type_support;
}

#if defined(__cplusplus)
}
#endif
