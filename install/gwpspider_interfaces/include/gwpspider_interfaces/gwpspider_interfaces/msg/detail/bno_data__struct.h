// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:msg/BnoData.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__STRUCT_H_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rpy'
// Member 'gravity_vector'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in msg/BnoData in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__msg__BnoData
{
  std_msgs__msg__Float32MultiArray rpy;
  std_msgs__msg__Float32MultiArray gravity_vector;
} gwpspider_interfaces__msg__BnoData;

// Struct for a sequence of gwpspider_interfaces__msg__BnoData.
typedef struct gwpspider_interfaces__msg__BnoData__Sequence
{
  gwpspider_interfaces__msg__BnoData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__msg__BnoData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__STRUCT_H_
