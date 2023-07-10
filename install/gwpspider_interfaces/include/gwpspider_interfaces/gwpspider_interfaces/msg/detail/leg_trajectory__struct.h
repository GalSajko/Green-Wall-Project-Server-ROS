// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:msg/LegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__STRUCT_H_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position_trajectory'
// Member 'velocity_trajectory'
// Member 'acceleration_trajectory'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in msg/LegTrajectory in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__msg__LegTrajectory
{
  std_msgs__msg__Float32MultiArray position_trajectory;
  std_msgs__msg__Float32MultiArray velocity_trajectory;
  std_msgs__msg__Float32MultiArray acceleration_trajectory;
} gwpspider_interfaces__msg__LegTrajectory;

// Struct for a sequence of gwpspider_interfaces__msg__LegTrajectory.
typedef struct gwpspider_interfaces__msg__LegTrajectory__Sequence
{
  gwpspider_interfaces__msg__LegTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__msg__LegTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__STRUCT_H_
