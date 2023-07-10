// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:srv/MoveSpider.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_SPIDER__STRUCT_H_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_SPIDER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'legs_ids'
#include "std_msgs/msg/detail/int8_multi_array__struct.h"
// Member 'used_pins_positions'
// Member 'goal_spider_pose'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in srv/MoveSpider in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__MoveSpider_Request
{
  std_msgs__msg__Int8MultiArray legs_ids;
  std_msgs__msg__Float32MultiArray used_pins_positions;
  std_msgs__msg__Float32MultiArray goal_spider_pose;
  float duration;
} gwpspider_interfaces__srv__MoveSpider_Request;

// Struct for a sequence of gwpspider_interfaces__srv__MoveSpider_Request.
typedef struct gwpspider_interfaces__srv__MoveSpider_Request__Sequence
{
  gwpspider_interfaces__srv__MoveSpider_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__MoveSpider_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MoveSpider in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__MoveSpider_Response
{
  bool success;
} gwpspider_interfaces__srv__MoveSpider_Response;

// Struct for a sequence of gwpspider_interfaces__srv__MoveSpider_Response.
typedef struct gwpspider_interfaces__srv__MoveSpider_Response__Sequence
{
  gwpspider_interfaces__srv__MoveSpider_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__MoveSpider_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_SPIDER__STRUCT_H_
