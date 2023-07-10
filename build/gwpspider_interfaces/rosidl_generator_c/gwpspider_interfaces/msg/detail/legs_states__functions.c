// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gwpspider_interfaces:msg/LegsStates.idl
// generated code does not contain a copyright notice
#include "gwpspider_interfaces/msg/detail/legs_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joints_positions`
// Member `legs_local_positions`
// Member `forces`
// Member `torques`
#include "std_msgs/msg/detail/float32_multi_array__functions.h"

bool
gwpspider_interfaces__msg__LegsStates__init(gwpspider_interfaces__msg__LegsStates * msg)
{
  if (!msg) {
    return false;
  }
  // joints_positions
  if (!std_msgs__msg__Float32MultiArray__init(&msg->joints_positions)) {
    gwpspider_interfaces__msg__LegsStates__fini(msg);
    return false;
  }
  // legs_local_positions
  if (!std_msgs__msg__Float32MultiArray__init(&msg->legs_local_positions)) {
    gwpspider_interfaces__msg__LegsStates__fini(msg);
    return false;
  }
  // forces
  if (!std_msgs__msg__Float32MultiArray__init(&msg->forces)) {
    gwpspider_interfaces__msg__LegsStates__fini(msg);
    return false;
  }
  // torques
  if (!std_msgs__msg__Float32MultiArray__init(&msg->torques)) {
    gwpspider_interfaces__msg__LegsStates__fini(msg);
    return false;
  }
  return true;
}

void
gwpspider_interfaces__msg__LegsStates__fini(gwpspider_interfaces__msg__LegsStates * msg)
{
  if (!msg) {
    return;
  }
  // joints_positions
  std_msgs__msg__Float32MultiArray__fini(&msg->joints_positions);
  // legs_local_positions
  std_msgs__msg__Float32MultiArray__fini(&msg->legs_local_positions);
  // forces
  std_msgs__msg__Float32MultiArray__fini(&msg->forces);
  // torques
  std_msgs__msg__Float32MultiArray__fini(&msg->torques);
}

bool
gwpspider_interfaces__msg__LegsStates__are_equal(const gwpspider_interfaces__msg__LegsStates * lhs, const gwpspider_interfaces__msg__LegsStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joints_positions
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->joints_positions), &(rhs->joints_positions)))
  {
    return false;
  }
  // legs_local_positions
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->legs_local_positions), &(rhs->legs_local_positions)))
  {
    return false;
  }
  // forces
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->forces), &(rhs->forces)))
  {
    return false;
  }
  // torques
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->torques), &(rhs->torques)))
  {
    return false;
  }
  return true;
}

bool
gwpspider_interfaces__msg__LegsStates__copy(
  const gwpspider_interfaces__msg__LegsStates * input,
  gwpspider_interfaces__msg__LegsStates * output)
{
  if (!input || !output) {
    return false;
  }
  // joints_positions
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->joints_positions), &(output->joints_positions)))
  {
    return false;
  }
  // legs_local_positions
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->legs_local_positions), &(output->legs_local_positions)))
  {
    return false;
  }
  // forces
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->forces), &(output->forces)))
  {
    return false;
  }
  // torques
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->torques), &(output->torques)))
  {
    return false;
  }
  return true;
}

gwpspider_interfaces__msg__LegsStates *
gwpspider_interfaces__msg__LegsStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__LegsStates * msg = (gwpspider_interfaces__msg__LegsStates *)allocator.allocate(sizeof(gwpspider_interfaces__msg__LegsStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gwpspider_interfaces__msg__LegsStates));
  bool success = gwpspider_interfaces__msg__LegsStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gwpspider_interfaces__msg__LegsStates__destroy(gwpspider_interfaces__msg__LegsStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gwpspider_interfaces__msg__LegsStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gwpspider_interfaces__msg__LegsStates__Sequence__init(gwpspider_interfaces__msg__LegsStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__LegsStates * data = NULL;

  if (size) {
    data = (gwpspider_interfaces__msg__LegsStates *)allocator.zero_allocate(size, sizeof(gwpspider_interfaces__msg__LegsStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gwpspider_interfaces__msg__LegsStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gwpspider_interfaces__msg__LegsStates__fini(&data[i - 1]);
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
gwpspider_interfaces__msg__LegsStates__Sequence__fini(gwpspider_interfaces__msg__LegsStates__Sequence * array)
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
      gwpspider_interfaces__msg__LegsStates__fini(&array->data[i]);
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

gwpspider_interfaces__msg__LegsStates__Sequence *
gwpspider_interfaces__msg__LegsStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__LegsStates__Sequence * array = (gwpspider_interfaces__msg__LegsStates__Sequence *)allocator.allocate(sizeof(gwpspider_interfaces__msg__LegsStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gwpspider_interfaces__msg__LegsStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gwpspider_interfaces__msg__LegsStates__Sequence__destroy(gwpspider_interfaces__msg__LegsStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gwpspider_interfaces__msg__LegsStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gwpspider_interfaces__msg__LegsStates__Sequence__are_equal(const gwpspider_interfaces__msg__LegsStates__Sequence * lhs, const gwpspider_interfaces__msg__LegsStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gwpspider_interfaces__msg__LegsStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gwpspider_interfaces__msg__LegsStates__Sequence__copy(
  const gwpspider_interfaces__msg__LegsStates__Sequence * input,
  gwpspider_interfaces__msg__LegsStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gwpspider_interfaces__msg__LegsStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gwpspider_interfaces__msg__LegsStates * data =
      (gwpspider_interfaces__msg__LegsStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gwpspider_interfaces__msg__LegsStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gwpspider_interfaces__msg__LegsStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gwpspider_interfaces__msg__LegsStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
