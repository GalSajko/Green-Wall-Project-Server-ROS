// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:msg/DynamixelMotorsData.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__STRUCT_H_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
// Member 'currents'
// Member 'motor_errors'
// Member 'temperatures'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in msg/DynamixelMotorsData in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__msg__DynamixelMotorsData
{
  std_msgs__msg__Float32MultiArray positions;
  std_msgs__msg__Float32MultiArray currents;
  std_msgs__msg__Float32MultiArray motor_errors;
  std_msgs__msg__Float32MultiArray temperatures;
} gwpspider_interfaces__msg__DynamixelMotorsData;

// Struct for a sequence of gwpspider_interfaces__msg__DynamixelMotorsData.
typedef struct gwpspider_interfaces__msg__DynamixelMotorsData__Sequence
{
  gwpspider_interfaces__msg__DynamixelMotorsData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__msg__DynamixelMotorsData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__STRUCT_H_
