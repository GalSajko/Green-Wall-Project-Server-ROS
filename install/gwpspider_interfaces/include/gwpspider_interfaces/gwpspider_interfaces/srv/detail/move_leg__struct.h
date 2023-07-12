// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:srv/MoveLeg.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__STRUCT_H_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_position'
// Member 'spider_pose'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"
// Member 'trajectory_type'
// Member 'origin'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveLeg in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__MoveLeg_Request
{
  int8_t leg_id;
  std_msgs__msg__Float32MultiArray goal_position;
  rosidl_runtime_c__String trajectory_type;
  rosidl_runtime_c__String origin;
  float duration;
  bool is_offset;
  std_msgs__msg__Float32MultiArray spider_pose;
  bool open_gripper;
  bool close_gripper;
  bool use_prediction_model;
} gwpspider_interfaces__srv__MoveLeg_Request;

// Struct for a sequence of gwpspider_interfaces__srv__MoveLeg_Request.
typedef struct gwpspider_interfaces__srv__MoveLeg_Request__Sequence
{
  gwpspider_interfaces__srv__MoveLeg_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__MoveLeg_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MoveLeg in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__MoveLeg_Response
{
  bool success;
} gwpspider_interfaces__srv__MoveLeg_Response;

// Struct for a sequence of gwpspider_interfaces__srv__MoveLeg_Response.
typedef struct gwpspider_interfaces__srv__MoveLeg_Response__Sequence
{
  gwpspider_interfaces__srv__MoveLeg_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__MoveLeg_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__STRUCT_H_
