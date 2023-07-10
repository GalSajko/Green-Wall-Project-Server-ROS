// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:srv/GetModifiedWalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_MODIFIED_WALKING_INSTRUCTIONS__STRUCT_H_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_MODIFIED_WALKING_INSTRUCTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_legs_positions'
// Member 'goal_pose'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in srv/GetModifiedWalkingInstructions in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Request
{
  std_msgs__msg__Float32MultiArray start_legs_positions;
  std_msgs__msg__Float32MultiArray goal_pose;
} gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Request;

// Struct for a sequence of gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Request.
typedef struct gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Request__Sequence
{
  gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'walking_instructions'
#include "gwpspider_interfaces/msg/detail/walking_instructions__struct.h"

/// Struct defined in srv/GetModifiedWalkingInstructions in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Response
{
  gwpspider_interfaces__msg__WalkingInstructions walking_instructions;
} gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Response;

// Struct for a sequence of gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Response.
typedef struct gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Response__Sequence
{
  gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__GetModifiedWalkingInstructions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_MODIFIED_WALKING_INSTRUCTIONS__STRUCT_H_
