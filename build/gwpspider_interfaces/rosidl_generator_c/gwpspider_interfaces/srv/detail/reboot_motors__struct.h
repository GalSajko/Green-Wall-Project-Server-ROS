// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:srv/RebootMotors.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__REBOOT_MOTORS__STRUCT_H_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__REBOOT_MOTORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motors'
#include "std_msgs/msg/detail/int8_multi_array__struct.h"

/// Struct defined in srv/RebootMotors in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__RebootMotors_Request
{
  std_msgs__msg__Int8MultiArray motors;
} gwpspider_interfaces__srv__RebootMotors_Request;

// Struct for a sequence of gwpspider_interfaces__srv__RebootMotors_Request.
typedef struct gwpspider_interfaces__srv__RebootMotors_Request__Sequence
{
  gwpspider_interfaces__srv__RebootMotors_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__RebootMotors_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RebootMotors in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__RebootMotors_Response
{
  bool success;
} gwpspider_interfaces__srv__RebootMotors_Response;

// Struct for a sequence of gwpspider_interfaces__srv__RebootMotors_Response.
typedef struct gwpspider_interfaces__srv__RebootMotors_Response__Sequence
{
  gwpspider_interfaces__srv__RebootMotors_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__RebootMotors_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__REBOOT_MOTORS__STRUCT_H_
