// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'switch_state'
// Member 'fingers_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GripperState in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__msg__GripperState
{
  rosidl_runtime_c__String switch_state;
  rosidl_runtime_c__String fingers_state;
  bool is_attached;
} gwpspider_interfaces__msg__GripperState;

// Struct for a sequence of gwpspider_interfaces__msg__GripperState.
typedef struct gwpspider_interfaces__msg__GripperState__Sequence
{
  gwpspider_interfaces__msg__GripperState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__msg__GripperState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
