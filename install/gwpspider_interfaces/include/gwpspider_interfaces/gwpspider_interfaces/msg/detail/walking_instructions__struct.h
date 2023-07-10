// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:msg/WalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__STRUCT_H_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'poses'
// Member 'pins_instructions'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in msg/WalkingInstructions in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__msg__WalkingInstructions
{
  std_msgs__msg__Float32MultiArray poses;
  std_msgs__msg__Float32MultiArray pins_instructions;
} gwpspider_interfaces__msg__WalkingInstructions;

// Struct for a sequence of gwpspider_interfaces__msg__WalkingInstructions.
typedef struct gwpspider_interfaces__msg__WalkingInstructions__Sequence
{
  gwpspider_interfaces__msg__WalkingInstructions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__msg__WalkingInstructions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__STRUCT_H_
