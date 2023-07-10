// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:srv/GetWalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_WALKING_INSTRUCTIONS__STRUCT_H_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_WALKING_INSTRUCTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_pose'
// Member 'goal_pose'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in srv/GetWalkingInstructions in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__GetWalkingInstructions_Request
{
  std_msgs__msg__Float32MultiArray start_pose;
  std_msgs__msg__Float32MultiArray goal_pose;
} gwpspider_interfaces__srv__GetWalkingInstructions_Request;

// Struct for a sequence of gwpspider_interfaces__srv__GetWalkingInstructions_Request.
typedef struct gwpspider_interfaces__srv__GetWalkingInstructions_Request__Sequence
{
  gwpspider_interfaces__srv__GetWalkingInstructions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__GetWalkingInstructions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'walking_instructions'
#include "gwpspider_interfaces/msg/detail/walking_instructions__struct.h"

/// Struct defined in srv/GetWalkingInstructions in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__GetWalkingInstructions_Response
{
  gwpspider_interfaces__msg__WalkingInstructions walking_instructions;
} gwpspider_interfaces__srv__GetWalkingInstructions_Response;

// Struct for a sequence of gwpspider_interfaces__srv__GetWalkingInstructions_Response.
typedef struct gwpspider_interfaces__srv__GetWalkingInstructions_Response__Sequence
{
  gwpspider_interfaces__srv__GetWalkingInstructions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__GetWalkingInstructions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_WALKING_INSTRUCTIONS__STRUCT_H_
