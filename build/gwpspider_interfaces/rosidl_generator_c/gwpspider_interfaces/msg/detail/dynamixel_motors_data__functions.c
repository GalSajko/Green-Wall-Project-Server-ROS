// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gwpspider_interfaces:msg/DynamixelMotorsData.idl
// generated code does not contain a copyright notice
#include "gwpspider_interfaces/msg/detail/dynamixel_motors_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `positions`
// Member `currents`
// Member `motor_errors`
// Member `temperatures`
#include "std_msgs/msg/detail/float32_multi_array__functions.h"

bool
gwpspider_interfaces__msg__DynamixelMotorsData__init(gwpspider_interfaces__msg__DynamixelMotorsData * msg)
{
  if (!msg) {
    return false;
  }
  // positions
  if (!std_msgs__msg__Float32MultiArray__init(&msg->positions)) {
    gwpspider_interfaces__msg__DynamixelMotorsData__fini(msg);
    return false;
  }
  // currents
  if (!std_msgs__msg__Float32MultiArray__init(&msg->currents)) {
    gwpspider_interfaces__msg__DynamixelMotorsData__fini(msg);
    return false;
  }
  // motor_errors
  if (!std_msgs__msg__Float32MultiArray__init(&msg->motor_errors)) {
    gwpspider_interfaces__msg__DynamixelMotorsData__fini(msg);
    return false;
  }
  // temperatures
  if (!std_msgs__msg__Float32MultiArray__init(&msg->temperatures)) {
    gwpspider_interfaces__msg__DynamixelMotorsData__fini(msg);
    return false;
  }
  return true;
}

void
gwpspider_interfaces__msg__DynamixelMotorsData__fini(gwpspider_interfaces__msg__DynamixelMotorsData * msg)
{
  if (!msg) {
    return;
  }
  // positions
  std_msgs__msg__Float32MultiArray__fini(&msg->positions);
  // currents
  std_msgs__msg__Float32MultiArray__fini(&msg->currents);
  // motor_errors
  std_msgs__msg__Float32MultiArray__fini(&msg->motor_errors);
  // temperatures
  std_msgs__msg__Float32MultiArray__fini(&msg->temperatures);
}

bool
gwpspider_interfaces__msg__DynamixelMotorsData__are_equal(const gwpspider_interfaces__msg__DynamixelMotorsData * lhs, const gwpspider_interfaces__msg__DynamixelMotorsData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positions
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  // currents
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->currents), &(rhs->currents)))
  {
    return false;
  }
  // motor_errors
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->motor_errors), &(rhs->motor_errors)))
  {
    return false;
  }
  // temperatures
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->temperatures), &(rhs->temperatures)))
  {
    return false;
  }
  return true;
}

bool
gwpspider_interfaces__msg__DynamixelMotorsData__copy(
  const gwpspider_interfaces__msg__DynamixelMotorsData * input,
  gwpspider_interfaces__msg__DynamixelMotorsData * output)
{
  if (!input || !output) {
    return false;
  }
  // positions
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  // currents
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->currents), &(output->currents)))
  {
    return false;
  }
  // motor_errors
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->motor_errors), &(output->motor_errors)))
  {
    return false;
  }
  // temperatures
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->temperatures), &(output->temperatures)))
  {
    return false;
  }
  return true;
}

gwpspider_interfaces__msg__DynamixelMotorsData *
gwpspider_interfaces__msg__DynamixelMotorsData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__DynamixelMotorsData * msg = (gwpspider_interfaces__msg__DynamixelMotorsData *)allocator.allocate(sizeof(gwpspider_interfaces__msg__DynamixelMotorsData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gwpspider_interfaces__msg__DynamixelMotorsData));
  bool success = gwpspider_interfaces__msg__DynamixelMotorsData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gwpspider_interfaces__msg__DynamixelMotorsData__destroy(gwpspider_interfaces__msg__DynamixelMotorsData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gwpspider_interfaces__msg__DynamixelMotorsData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gwpspider_interfaces__msg__DynamixelMotorsData__Sequence__init(gwpspider_interfaces__msg__DynamixelMotorsData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__DynamixelMotorsData * data = NULL;

  if (size) {
    data = (gwpspider_interfaces__msg__DynamixelMotorsData *)allocator.zero_allocate(size, sizeof(gwpspider_interfaces__msg__DynamixelMotorsData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gwpspider_interfaces__msg__DynamixelMotorsData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gwpspider_interfaces__msg__DynamixelMotorsData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gwpspider_interfaces__msg__DynamixelMotorsData__Sequence__fini(gwpspider_interfaces__msg__DynamixelMotorsData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gwpspider_interfaces__msg__DynamixelMotorsData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gwpspider_interfaces__msg__DynamixelMotorsData__Sequence *
gwpspider_interfaces__msg__DynamixelMotorsData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__DynamixelMotorsData__Sequence * array = (gwpspider_interfaces__msg__DynamixelMotorsData__Sequence *)allocator.allocate(sizeof(gwpspider_interfaces__msg__DynamixelMotorsData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gwpspider_interfaces__msg__DynamixelMotorsData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gwpspider_interfaces__msg__DynamixelMotorsData__Sequence__destroy(gwpspider_interfaces__msg__DynamixelMotorsData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gwpspider_interfaces__msg__DynamixelMotorsData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gwpspider_interfaces__msg__DynamixelMotorsData__Sequence__are_equal(const gwpspider_interfaces__msg__DynamixelMotorsData__Sequence * lhs, const gwpspider_interfaces__msg__DynamixelMotorsData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gwpspider_interfaces__msg__DynamixelMotorsData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gwpspider_interfaces__msg__DynamixelMotorsData__Sequence__copy(
  const gwpspider_interfaces__msg__DynamixelMotorsData__Sequence * input,
  gwpspider_interfaces__msg__DynamixelMotorsData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gwpspider_interfaces__msg__DynamixelMotorsData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gwpspider_interfaces__msg__DynamixelMotorsData * data =
      (gwpspider_interfaces__msg__DynamixelMotorsData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gwpspider_interfaces__msg__DynamixelMotorsData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gwpspider_interfaces__msg__DynamixelMotorsData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gwpspider_interfaces__msg__DynamixelMotorsData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
