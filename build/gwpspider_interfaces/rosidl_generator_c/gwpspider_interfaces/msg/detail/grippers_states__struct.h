// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:msg/GrippersStates.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__STRUCT_H_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'first_gripper'
// Member 'second_gripper'
// Member 'third_gripper'
// Member 'fourth_gripper'
// Member 'fifth_gripper'
#include "gwpspider_interfaces/msg/detail/gripper_state__struct.h"

/// Struct defined in msg/GrippersStates in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__msg__GrippersStates
{
  gwpspider_interfaces__msg__GripperState first_gripper;
  gwpspider_interfaces__msg__GripperState second_gripper;
  gwpspider_interfaces__msg__GripperState third_gripper;
  gwpspider_interfaces__msg__GripperState fourth_gripper;
  gwpspider_interfaces__msg__GripperState fifth_gripper;
} gwpspider_interfaces__msg__GrippersStates;

// Struct for a sequence of gwpspider_interfaces__msg__GrippersStates.
typedef struct gwpspider_interfaces__msg__GrippersStates__Sequence
{
  gwpspider_interfaces__msg__GrippersStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__msg__GrippersStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__STRUCT_H_
