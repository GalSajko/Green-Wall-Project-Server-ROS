// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:srv/ControlWaterPump.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__CONTROL_WATER_PUMP__STRUCT_H_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__CONTROL_WATER_PUMP__STRUCT_H_

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
#include "gwpspider_interfaces/msg/detail/water_pump_command__struct.h"

/// Struct defined in srv/ControlWaterPump in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__ControlWaterPump_Request
{
  gwpspider_interfaces__msg__WaterPumpCommand instructions;
} gwpspider_interfaces__srv__ControlWaterPump_Request;

// Struct for a sequence of gwpspider_interfaces__srv__ControlWaterPump_Request.
typedef struct gwpspider_interfaces__srv__ControlWaterPump_Request__Sequence
{
  gwpspider_interfaces__srv__ControlWaterPump_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__ControlWaterPump_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ControlWaterPump in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__srv__ControlWaterPump_Response
{
  bool success;
} gwpspider_interfaces__srv__ControlWaterPump_Response;

// Struct for a sequence of gwpspider_interfaces__srv__ControlWaterPump_Response.
typedef struct gwpspider_interfaces__srv__ControlWaterPump_Response__Sequence
{
  gwpspider_interfaces__srv__ControlWaterPump_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__srv__ControlWaterPump_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__CONTROL_WATER_PUMP__STRUCT_H_
