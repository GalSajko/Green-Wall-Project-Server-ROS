// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:srv/SpiderGoal.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__SPIDER_GOAL__STRUCT_H_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__SPIDER_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SpiderGoal in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__SpiderGoal_Request
{
  bool request_new_goal;
} gwpspider_interfaces__srv__SpiderGoal_Request;

// Struct for a sequence of gwpspider_interfaces__srv__SpiderGoal_Request.
typedef struct gwpspider_interfaces__srv__SpiderGoal_Request__Sequence
{
  gwpspider_interfaces__srv__SpiderGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__SpiderGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'watering_position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SpiderGoal in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__SpiderGoal_Response
{
  rosidl_runtime_c__float__Sequence watering_position;
  bool go_refill;
  int32_t volume;
} gwpspider_interfaces__srv__SpiderGoal_Response;

// Struct for a sequence of gwpspider_interfaces__srv__SpiderGoal_Response.
typedef struct gwpspider_interfaces__srv__SpiderGoal_Response__Sequence
{
  gwpspider_interfaces__srv__SpiderGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__SpiderGoal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__SPIDER_GOAL__STRUCT_H_
