// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:srv/MoveGripper.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_GRIPPER__STRUCT_H_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'instructions'
#include "gwpspider_interfaces/msg/detail/gripper_command__struct.h"

/// Struct defined in srv/MoveGripper in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__MoveGripper_Request
{
  gwpspider_interfaces__msg__GripperCommand instructions;
} gwpspider_interfaces__srv__MoveGripper_Request;

// Struct for a sequence of gwpspider_interfaces__srv__MoveGripper_Request.
typedef struct gwpspider_interfaces__srv__MoveGripper_Request__Sequence
{
  gwpspider_interfaces__srv__MoveGripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__MoveGripper_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MoveGripper in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__MoveGripper_Response
{
  bool success;
} gwpspider_interfaces__srv__MoveGripper_Response;

// Struct for a sequence of gwpspider_interfaces__srv__MoveGripper_Response.
typedef struct gwpspider_interfaces__srv__MoveGripper_Response__Sequence
{
  gwpspider_interfaces__srv__MoveGripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__MoveGripper_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_GRIPPER__STRUCT_H_
