// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gwpspider_interfaces:msg/WaterPumpCommand.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__WATER_PUMP_COMMAND__STRUCT_H_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__WATER_PUMP_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WaterPumpCommand in the package gwpspider_interfaces.
typedef struct gwpspider_interfaces__msg__WaterPumpCommand
{
  int64_t pump;
  rosidl_runtime_c__String command;
} gwpspider_interfaces__msg__WaterPumpCommand;

// Struct for a sequence of gwpspider_interfaces__msg__WaterPumpCommand.
typedef struct gwpspider_interfaces__msg__WaterPumpCommand__Sequence
{
  gwpspider_interfaces__msg__WaterPumpCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gwpspider_interfaces__msg__WaterPumpCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__WATER_PUMP_COMMAND__STRUCT_H_
