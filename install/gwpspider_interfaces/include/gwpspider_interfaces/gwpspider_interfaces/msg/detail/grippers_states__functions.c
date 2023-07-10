// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gwpspider_interfaces:msg/GrippersStates.idl
// generated code does not contain a copyright notice
#include "gwpspider_interfaces/msg/detail/grippers_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `first_gripper`
// Member `second_gripper`
// Member `third_gripper`
// Member `fourth_gripper`
// Member `fifth_gripper`
#include "gwpspider_interfaces/msg/detail/gripper_state__functions.h"

bool
gwpspider_interfaces__msg__GrippersStates__init(gwpspider_interfaces__msg__GrippersStates * msg)
{
  if (!msg) {
    return false;
  }
  // first_gripper
  if (!gwpspider_interfaces__msg__GripperState__init(&msg->first_gripper)) {
    gwpspider_interfaces__msg__GrippersStates__fini(msg);
    return false;
  }
  // second_gripper
  if (!gwpspider_interfaces__msg__GripperState__init(&msg->second_gripper)) {
    gwpspider_interfaces__msg__GrippersStates__fini(msg);
    return false;
  }
  // third_gripper
  if (!gwpspider_interfaces__msg__GripperState__init(&msg->third_gripper)) {
    gwpspider_interfaces__msg__GrippersStates__fini(msg);
    return false;
  }
  // fourth_gripper
  if (!gwpspider_interfaces__msg__GripperState__init(&msg->fourth_gripper)) {
    gwpspider_interfaces__msg__GrippersStates__fini(msg);
    return false;
  }
  // fifth_gripper
  if (!gwpspider_interfaces__msg__GripperState__init(&msg->fifth_gripper)) {
    gwpspider_interfaces__msg__GrippersStates__fini(msg);
    return false;
  }
  return true;
}

void
gwpspider_interfaces__msg__GrippersStates__fini(gwpspider_interfaces__msg__GrippersStates * msg)
{
  if (!msg) {
    return;
  }
  // first_gripper
  gwpspider_interfaces__msg__GripperState__fini(&msg->first_gripper);
  // second_gripper
  gwpspider_interfaces__msg__GripperState__fini(&msg->second_gripper);
  // third_gripper
  gwpspider_interfaces__msg__GripperState__fini(&msg->third_gripper);
  // fourth_gripper
  gwpspider_interfaces__msg__GripperState__fini(&msg->fourth_gripper);
  // fifth_gripper
  gwpspider_interfaces__msg__GripperState__fini(&msg->fifth_gripper);
}

bool
gwpspider_interfaces__msg__GrippersStates__are_equal(const gwpspider_interfaces__msg__GrippersStates * lhs, const gwpspider_interfaces__msg__GrippersStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first_gripper
  if (!gwpspider_interfaces__msg__GripperState__are_equal(
      &(lhs->first_gripper), &(rhs->first_gripper)))
  {
    return false;
  }
  // second_gripper
  if (!gwpspider_interfaces__msg__GripperState__are_equal(
      &(lhs->second_gripper), &(rhs->second_gripper)))
  {
    return false;
  }
  // third_gripper
  if (!gwpspider_interfaces__msg__GripperState__are_equal(
      &(lhs->third_gripper), &(rhs->third_gripper)))
  {
    return false;
  }
  // fourth_gripper
  if (!gwpspider_interfaces__msg__GripperState__are_equal(
      &(lhs->fourth_gripper), &(rhs->fourth_gripper)))
  {
    return false;
  }
  // fifth_gripper
  if (!gwpspider_interfaces__msg__GripperState__are_equal(
      &(lhs->fifth_gripper), &(rhs->fifth_gripper)))
  {
    return false;
  }
  return true;
}

bool
gwpspider_interfaces__msg__GrippersStates__copy(
  const gwpspider_interfaces__msg__GrippersStates * input,
  gwpspider_interfaces__msg__GrippersStates * output)
{
  if (!input || !output) {
    return false;
  }
  // first_gripper
  if (!gwpspider_interfaces__msg__GripperState__copy(
      &(input->first_gripper), &(output->first_gripper)))
  {
    return false;
  }
  // second_gripper
  if (!gwpspider_interfaces__msg__GripperState__copy(
      &(input->second_gripper), &(output->second_gripper)))
  {
    return false;
  }
  // third_gripper
  if (!gwpspider_interfaces__msg__GripperState__copy(
      &(input->third_gripper), &(output->third_gripper)))
  {
    return false;
  }
  // fourth_gripper
  if (!gwpspider_interfaces__msg__GripperState__copy(
      &(input->fourth_gripper), &(output->fourth_gripper)))
  {
    return false;
  }
  // fifth_gripper
  if (!gwpspider_interfaces__msg__GripperState__copy(
      &(input->fifth_gripper), &(output->fifth_gripper)))
  {
    return false;
  }
  return true;
}

gwpspider_interfaces__msg__GrippersStates *
gwpspider_interfaces__msg__GrippersStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__GrippersStates * msg = (gwpspider_interfaces__msg__GrippersStates *)allocator.allocate(sizeof(gwpspider_interfaces__msg__GrippersStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gwpspider_interfaces__msg__GrippersStates));
  bool success = gwpspider_interfaces__msg__GrippersStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gwpspider_interfaces__msg__GrippersStates__destroy(gwpspider_interfaces__msg__GrippersStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gwpspider_interfaces__msg__GrippersStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gwpspider_interfaces__msg__GrippersStates__Sequence__init(gwpspider_interfaces__msg__GrippersStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__GrippersStates * data = NULL;

  if (size) {
    data = (gwpspider_interfaces__msg__GrippersStates *)allocator.zero_allocate(size, sizeof(gwpspider_interfaces__msg__GrippersStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gwpspider_interfaces__msg__GrippersStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gwpspider_interfaces__msg__GrippersStates__fini(&data[i - 1]);
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
gwpspider_interfaces__msg__GrippersStates__Sequence__fini(gwpspider_interfaces__msg__GrippersStates__Sequence * array)
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
      gwpspider_interfaces__msg__GrippersStates__fini(&array->data[i]);
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

gwpspider_interfaces__msg__GrippersStates__Sequence *
gwpspider_interfaces__msg__GrippersStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__msg__GrippersStates__Sequence * array = (gwpspider_interfaces__msg__GrippersStates__Sequence *)allocator.allocate(sizeof(gwpspider_interfaces__msg__GrippersStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gwpspider_interfaces__msg__GrippersStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gwpspider_interfaces__msg__GrippersStates__Sequence__destroy(gwpspider_interfaces__msg__GrippersStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gwpspider_interfaces__msg__GrippersStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gwpspider_interfaces__msg__GrippersStates__Sequence__are_equal(const gwpspider_interfaces__msg__GrippersStates__Sequence * lhs, const gwpspider_interfaces__msg__GrippersStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gwpspider_interfaces__msg__GrippersStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gwpspider_interfaces__msg__GrippersStates__Sequence__copy(
  const gwpspider_interfaces__msg__GrippersStates__Sequence * input,
  gwpspider_interfaces__msg__GrippersStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gwpspider_interfaces__msg__GrippersStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gwpspider_interfaces__msg__GrippersStates * data =
      (gwpspider_interfaces__msg__GrippersStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gwpspider_interfaces__msg__GrippersStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gwpspider_interfaces__msg__GrippersStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gwpspider_interfaces__msg__GrippersStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
