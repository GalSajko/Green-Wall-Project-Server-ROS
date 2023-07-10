// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gwpspider_interfaces:msg/GripperCommand.idl
// generated code does not contain a copyright notice
#include "gwpspider_interfaces/msg/detail/gripper_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
gwpspider_interfaces__msg__GripperCommand__init(gwpspider_interfaces__msg__GripperCommand * msg)
{
  if (!msg) {
    return false;
  }
  // leg_id
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    gwpspider_interfaces__msg__GripperCommand__fini(msg);
    return false;
  }
  return true;
}

void
gwpspider_interfaces__msg__GripperCommand__fini(gwpspider_interfaces__msg__GripperCommand * msg)
{
  if (!msg) {
    return;
  }
  // leg_id
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
gwpspider_interfaces__msg__GripperCommand__are_equal(const gwpspider_interfaces__msg__GripperCommand * lhs, const gwpspider_interfaces__msg__GripperCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // leg_id
  if (lhs->leg_id != rhs->leg_id) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
gwpspider_interfaces__msg__GripperCommand__copy(
  const gwpspider_interfaces__msg__GripperCommand * input,
  gwpspider_interfaces__msg__GripperCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // leg_id
  output->leg_id = input->leg_id;
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

gwpspider_interfaces__msg__GripperCommand *
gwpspider_interfaces__msg__GripperCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__GripperCommand * msg = (gwpspider_interfaces__msg__GripperCommand *)allocator.allocate(sizeof(gwpspider_interfaces__msg__GripperCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gwpspider_interfaces__msg__GripperCommand));
  bool success = gwpspider_interfaces__msg__GripperCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gwpspider_interfaces__msg__GripperCommand__destroy(gwpspider_interfaces__msg__GripperCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gwpspider_interfaces__msg__GripperCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gwpspider_interfaces__msg__GripperCommand__Sequence__init(gwpspider_interfaces__msg__GripperCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__GripperCommand * data = NULL;

  if (size) {
    data = (gwpspider_interfaces__msg__GripperCommand *)allocator.zero_allocate(size, sizeof(gwpspider_interfaces__msg__GripperCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gwpspider_interfaces__msg__GripperCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gwpspider_interfaces__msg__GripperCommand__fini(&data[i - 1]);
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
gwpspider_interfaces__msg__GripperCommand__Sequence__fini(gwpspider_interfaces__msg__GripperCommand__Sequence * array)
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
      gwpspider_interfaces__msg__GripperCommand__fini(&array->data[i]);
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

gwpspider_interfaces__msg__GripperCommand__Sequence *
gwpspider_interfaces__msg__GripperCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__GripperCommand__Sequence * array = (gwpspider_interfaces__msg__GripperCommand__Sequence *)allocator.allocate(sizeof(gwpspider_interfaces__msg__GripperCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gwpspider_interfaces__msg__GripperCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gwpspider_interfaces__msg__GripperCommand__Sequence__destroy(gwpspider_interfaces__msg__GripperCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gwpspider_interfaces__msg__GripperCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gwpspider_interfaces__msg__GripperCommand__Sequence__are_equal(const gwpspider_interfaces__msg__GripperCommand__Sequence * lhs, const gwpspider_interfaces__msg__GripperCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gwpspider_interfaces__msg__GripperCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gwpspider_interfaces__msg__GripperCommand__Sequence__copy(
  const gwpspider_interfaces__msg__GripperCommand__Sequence * input,
  gwpspider_interfaces__msg__GripperCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gwpspider_interfaces__msg__GripperCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gwpspider_interfaces__msg__GripperCommand * data =
      (gwpspider_interfaces__msg__GripperCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gwpspider_interfaces__msg__GripperCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gwpspider_interfaces__msg__GripperCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gwpspider_interfaces__msg__GripperCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
