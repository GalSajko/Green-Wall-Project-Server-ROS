// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:srv/GetLegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__STRUCT_H_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_position'
// Member 'goal_position'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"
// Member 'trajectory_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetLegTrajectory in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__GetLegTrajectory_Request
{
  std_msgs__msg__Float32MultiArray current_position;
  std_msgs__msg__Float32MultiArray goal_position;
  float duration;
  rosidl_runtime_c__String trajectory_type;
} gwpspider_interfaces__srv__GetLegTrajectory_Request;

// Struct for a sequence of gwpspider_interfaces__srv__GetLegTrajectory_Request.
typedef struct gwpspider_interfaces__srv__GetLegTrajectory_Request__Sequence
{
  gwpspider_interfaces__srv__GetLegTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__GetLegTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'trajectories'
#include "gwpspider_interfaces/msg/detail/leg_trajectory__struct.h"

/// Struct defined in srv/GetLegTrajectory in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__GetLegTrajectory_Response
{
  gwpspider_interfaces__msg__LegTrajectory trajectories;
} gwpspider_interfaces__srv__GetLegTrajectory_Response;

// Struct for a sequence of gwpspider_interfaces__srv__GetLegTrajectory_Response.
typedef struct gwpspider_interfaces__srv__GetLegTrajectory_Response__Sequence
{
  gwpspider_interfaces__srv__GetLegTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__GetLegTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__STRUCT_H_
