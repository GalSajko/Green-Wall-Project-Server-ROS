// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_service_interfaces:srv/SetValue.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__STRUCT_H_
#define MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetValue in the package my_service_interfaces.
typedef struct my_service_interfaces__srv__SetValue_Request
{
  uint8_t structure_needs_at_least_one_member;
} my_service_interfaces__srv__SetValue_Request;

// Struct for a sequence of my_service_interfaces__srv__SetValue_Request.
typedef struct my_service_interfaces__srv__SetValue_Request__Sequence
{
  my_service_interfaces__srv__SetValue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_interfaces__srv__SetValue_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetValue in the package my_service_interfaces.
typedef struct my_service_interfaces__srv__SetValue_Response
{
  rosidl_runtime_c__float__Sequence data;
  bool go_refill;
  int32_t volume;
} my_service_interfaces__srv__SetValue_Response;

// Struct for a sequence of my_service_interfaces__srv__SetValue_Response.
typedef struct my_service_interfaces__srv__SetValue_Response__Sequence
{
  my_service_interfaces__srv__SetValue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_interfaces__srv__SetValue_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__STRUCT_H_
