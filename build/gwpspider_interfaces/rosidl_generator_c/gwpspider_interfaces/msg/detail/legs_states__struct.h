// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:msg/LegsStates.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__STRUCT_H_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joints_positions'
// Member 'legs_local_positions'
// Member 'forces'
// Member 'torques'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in msg/LegsStates in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__msg__LegsStates
{
  std_msgs__msg__Float32MultiArray joints_positions;
  std_msgs__msg__Float32MultiArray legs_local_positions;
  std_msgs__msg__Float32MultiArray forces;
  std_msgs__msg__Float32MultiArray torques;
} gwpspider_interfaces__msg__LegsStates;

// Struct for a sequence of gwpspider_interfaces__msg__LegsStates.
typedef struct gwpspider_interfaces__msg__LegsStates__Sequence
{
  gwpspider_interfaces__msg__LegsStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__msg__LegsStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__STRUCT_H_
