// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:srv/GetCorrectionOffset.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__STRUCT_H_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'legs_positions'
// Member 'rpy'
// Member 'commanded_position'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"
// Member 'one_hot_legs'
#include "std_msgs/msg/detail/int8_multi_array__struct.h"

/// Struct defined in srv/GetCorrectionOffset in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__GetCorrectionOffset_Request
{
  std_msgs__msg__Float32MultiArray legs_positions;
  std_msgs__msg__Float32MultiArray rpy;
  std_msgs__msg__Float32MultiArray commanded_position;
  std_msgs__msg__Int8MultiArray one_hot_legs;
} gwpspider_interfaces__srv__GetCorrectionOffset_Request;

// Struct for a sequence of gwpspider_interfaces__srv__GetCorrectionOffset_Request.
typedef struct gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence
{
  gwpspider_interfaces__srv__GetCorrectionOffset_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'correction_offset'
// already included above
// #include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in srv/GetCorrectionOffset in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__GetCorrectionOffset_Response
{
  std_msgs__msg__Float32MultiArray correction_offset;
} gwpspider_interfaces__srv__GetCorrectionOffset_Response;

// Struct for a sequence of gwpspider_interfaces__srv__GetCorrectionOffset_Response.
typedef struct gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence
{
  gwpspider_interfaces__srv__GetCorrectionOffset_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__STRUCT_H_
