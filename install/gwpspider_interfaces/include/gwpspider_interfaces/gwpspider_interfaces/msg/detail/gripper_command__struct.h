// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GripperCommand in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__msg__GripperCommand
{
  int64_t leg_id;
  rosidl_runtime_c__String command;
} gwpspider_interfaces__msg__GripperCommand;

// Struct for a sequence of gwpspider_interfaces__msg__GripperCommand.
typedef struct gwpspider_interfaces__msg__GripperCommand__Sequence
{
  gwpspider_interfaces__msg__GripperCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__msg__GripperCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_
