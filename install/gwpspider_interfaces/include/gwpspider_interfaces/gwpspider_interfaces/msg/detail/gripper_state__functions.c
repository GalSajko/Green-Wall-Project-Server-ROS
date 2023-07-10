// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gwpspider_interfaces:msg/GripperState.idl
// generated code does not contain a copyright notice
#include "gwpspider_interfaces/msg/detail/gripper_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `switch_state`
// Member `fingers_state`
#include "rosidl_runtime_c/string_functions.h"

bool
gwpspider_interfaces__msg__GripperState__init(gwpspider_interfaces__msg__GripperState * msg)
{
  if (!msg) {
    return false;
  }
  // switch_state
  if (!rosidl_runtime_c__String__init(&msg->switch_state)) {
    gwpspider_interfaces__msg__GripperState__fini(msg);
    return false;
  }
  // fingers_state
  if (!rosidl_runtime_c__String__init(&msg->fingers_state)) {
    gwpspider_interfaces__msg__GripperState__fini(msg);
    return false;
  }
  // is_attached
  return true;
}

void
gwpspider_interfaces__msg__GripperState__fini(gwpspider_interfaces__msg__GripperState * msg)
{
  if (!msg) {
    return;
  }
  // switch_state
  rosidl_runtime_c__String__fini(&msg->switch_state);
  // fingers_state
  rosidl_runtime_c__String__fini(&msg->fingers_state);
  // is_attached
}

bool
gwpspider_interfaces__msg__GripperState__are_equal(const gwpspider_interfaces__msg__GripperState * lhs, const gwpspider_interfaces__msg__GripperState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // switch_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->switch_state), &(rhs->switch_state)))
  {
    return false;
  }
  // fingers_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fingers_state), &(rhs->fingers_state)))
  {
    return false;
  }
  // is_attached
  if (lhs->is_attached != rhs->is_attached) {
    return false;
  }
  return true;
}

bool
gwpspider_interfaces__msg__GripperState__copy(
  const gwpspider_interfaces__msg__GripperState * input,
  gwpspider_interfaces__msg__GripperState * output)
{
  if (!input || !output) {
    return false;
  }
  // switch_state
  if (!rosidl_runtime_c__String__copy(
      &(input->switch_state), &(output->switch_state)))
  {
    return false;
  }
  // fingers_state
  if (!rosidl_runtime_c__String__copy(
      &(input->fingers_state), &(output->fingers_state)))
  {
    return false;
  }
  // is_attached
  output->is_attached = input->is_attached;
  return true;
}

gwpspider_interfaces__msg__GripperState *
gwpspider_interfaces__msg__GripperState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__GripperState * msg = (gwpspider_interfaces__msg__GripperState *)allocator.allocate(sizeof(gwpspider_interfaces__msg__GripperState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gwpspider_interfaces__msg__GripperState));
  bool success = gwpspider_interfaces__msg__GripperState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gwpspider_interfaces__msg__GripperState__destroy(gwpspider_interfaces__msg__GripperState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gwpspider_interfaces__msg__GripperState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gwpspider_interfaces__msg__GripperState__Sequence__init(gwpspider_interfaces__msg__GripperState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__GripperState * data = NULL;

  if (size) {
    data = (gwpspider_interfaces__msg__GripperState *)allocator.zero_allocate(size, sizeof(gwpspider_interfaces__msg__GripperState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gwpspider_interfaces__msg__GripperState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gwpspider_interfaces__msg__GripperState__fini(&data[i - 1]);
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
gwpspider_interfaces__msg__GripperState__Sequence__fini(gwpspider_interfaces__msg__GripperState__Sequence * array)
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
      gwpspider_interfaces__msg__GripperState__fini(&array->data[i]);
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

gwpspider_interfaces__msg__GripperState__Sequence *
gwpspider_interfaces__msg__GripperState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__GripperState__Sequence * array = (gwpspider_interfaces__msg__GripperState__Sequence *)allocator.allocate(sizeof(gwpspider_interfaces__msg__GripperState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gwpspider_interfaces__msg__GripperState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gwpspider_interfaces__msg__GripperState__Sequence__destroy(gwpspider_interfaces__msg__GripperState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gwpspider_interfaces__msg__GripperState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gwpspider_interfaces__msg__GripperState__Sequence__are_equal(const gwpspider_interfaces__msg__GripperState__Sequence * lhs, const gwpspider_interfaces__msg__GripperState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gwpspider_interfaces__msg__GripperState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gwpspider_interfaces__msg__GripperState__Sequence__copy(
  const gwpspider_interfaces__msg__GripperState__Sequence * input,
  gwpspider_interfaces__msg__GripperState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gwpspider_interfaces__msg__GripperState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gwpspider_interfaces__msg__GripperState * data =
      (gwpspider_interfaces__msg__GripperState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gwpspider_interfaces__msg__GripperState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gwpspider_interfaces__msg__GripperState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gwpspider_interfaces__msg__GripperState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
