// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gwpspider_interfaces:msg/LegTrajectory.idl
// generated code does not contain a copyright notice
#include "gwpspider_interfaces/msg/detail/leg_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position_trajectory`
// Member `velocity_trajectory`
// Member `acceleration_trajectory`
#include "std_msgs/msg/detail/float32_multi_array__functions.h"

bool
gwpspider_interfaces__msg__LegTrajectory__init(gwpspider_interfaces__msg__LegTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // position_trajectory
  if (!std_msgs__msg__Float32MultiArray__init(&msg->position_trajectory)) {
    gwpspider_interfaces__msg__LegTrajectory__fini(msg);
    return false;
  }
  // velocity_trajectory
  if (!std_msgs__msg__Float32MultiArray__init(&msg->velocity_trajectory)) {
    gwpspider_interfaces__msg__LegTrajectory__fini(msg);
    return false;
  }
  // acceleration_trajectory
  if (!std_msgs__msg__Float32MultiArray__init(&msg->acceleration_trajectory)) {
    gwpspider_interfaces__msg__LegTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
gwpspider_interfaces__msg__LegTrajectory__fini(gwpspider_interfaces__msg__LegTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // position_trajectory
  std_msgs__msg__Float32MultiArray__fini(&msg->position_trajectory);
  // velocity_trajectory
  std_msgs__msg__Float32MultiArray__fini(&msg->velocity_trajectory);
  // acceleration_trajectory
  std_msgs__msg__Float32MultiArray__fini(&msg->acceleration_trajectory);
}

bool
gwpspider_interfaces__msg__LegTrajectory__are_equal(const gwpspider_interfaces__msg__LegTrajectory * lhs, const gwpspider_interfaces__msg__LegTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position_trajectory
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->position_trajectory), &(rhs->position_trajectory)))
  {
    return false;
  }
  // velocity_trajectory
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->velocity_trajectory), &(rhs->velocity_trajectory)))
  {
    return false;
  }
  // acceleration_trajectory
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->acceleration_trajectory), &(rhs->acceleration_trajectory)))
  {
    return false;
  }
  return true;
}

bool
gwpspider_interfaces__msg__LegTrajectory__copy(
  const gwpspider_interfaces__msg__LegTrajectory * input,
  gwpspider_interfaces__msg__LegTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // position_trajectory
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->position_trajectory), &(output->position_trajectory)))
  {
    return false;
  }
  // velocity_trajectory
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->velocity_trajectory), &(output->velocity_trajectory)))
  {
    return false;
  }
  // acceleration_trajectory
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->acceleration_trajectory), &(output->acceleration_trajectory)))
  {
    return false;
  }
  return true;
}

gwpspider_interfaces__msg__LegTrajectory *
gwpspider_interfaces__msg__LegTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__LegTrajectory * msg = (gwpspider_interfaces__msg__LegTrajectory *)allocator.allocate(sizeof(gwpspider_interfaces__msg__LegTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gwpspider_interfaces__msg__LegTrajectory));
  bool success = gwpspider_interfaces__msg__LegTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gwpspider_interfaces__msg__LegTrajectory__destroy(gwpspider_interfaces__msg__LegTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gwpspider_interfaces__msg__LegTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gwpspider_interfaces__msg__LegTrajectory__Sequence__init(gwpspider_interfaces__msg__LegTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__LegTrajectory * data = NULL;

  if (size) {
    data = (gwpspider_interfaces__msg__LegTrajectory *)allocator.zero_allocate(size, sizeof(gwpspider_interfaces__msg__LegTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gwpspider_interfaces__msg__LegTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gwpspider_interfaces__msg__LegTrajectory__fini(&data[i - 1]);
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
gwpspider_interfaces__msg__LegTrajectory__Sequence__fini(gwpspider_interfaces__msg__LegTrajectory__Sequence * array)
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
      gwpspider_interfaces__msg__LegTrajectory__fini(&array->data[i]);
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

gwpspider_interfaces__msg__LegTrajectory__Sequence *
gwpspider_interfaces__msg__LegTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__LegTrajectory__Sequence * array = (gwpspider_interfaces__msg__LegTrajectory__Sequence *)allocator.allocate(sizeof(gwpspider_interfaces__msg__LegTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gwpspider_interfaces__msg__LegTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gwpspider_interfaces__msg__LegTrajectory__Sequence__destroy(gwpspider_interfaces__msg__LegTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gwpspider_interfaces__msg__LegTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gwpspider_interfaces__msg__LegTrajectory__Sequence__are_equal(const gwpspider_interfaces__msg__LegTrajectory__Sequence * lhs, const gwpspider_interfaces__msg__LegTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gwpspider_interfaces__msg__LegTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gwpspider_interfaces__msg__LegTrajectory__Sequence__copy(
  const gwpspider_interfaces__msg__LegTrajectory__Sequence * input,
  gwpspider_interfaces__msg__LegTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gwpspider_interfaces__msg__LegTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gwpspider_interfaces__msg__LegTrajectory * data =
      (gwpspider_interfaces__msg__LegTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gwpspider_interfaces__msg__LegTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gwpspider_interfaces__msg__LegTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gwpspider_interfaces__msg__LegTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
