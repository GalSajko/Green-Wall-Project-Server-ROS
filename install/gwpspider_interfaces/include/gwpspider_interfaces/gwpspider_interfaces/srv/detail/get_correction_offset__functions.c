// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gwpspider_interfaces:srv/GetCorrectionOffset.idl
// generated code does not contain a copyright notice
#include "gwpspider_interfaces/srv/detail/get_correction_offset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `legs_positions`
// Member `rpy`
// Member `commanded_position`
#include "std_msgs/msg/detail/float32_multi_array__functions.h"
// Member `one_hot_legs`
#include "std_msgs/msg/detail/int8_multi_array__functions.h"

bool
gwpspider_interfaces__srv__GetCorrectionOffset_Request__init(gwpspider_interfaces__srv__GetCorrectionOffset_Request * msg)
{
  if (!msg) {
    return false;
  }
  // legs_positions
  if (!std_msgs__msg__Float32MultiArray__init(&msg->legs_positions)) {
    gwpspider_interfaces__srv__GetCorrectionOffset_Request__fini(msg);
    return false;
  }
  // rpy
  if (!std_msgs__msg__Float32MultiArray__init(&msg->rpy)) {
    gwpspider_interfaces__srv__GetCorrectionOffset_Request__fini(msg);
    return false;
  }
  // commanded_position
  if (!std_msgs__msg__Float32MultiArray__init(&msg->commanded_position)) {
    gwpspider_interfaces__srv__GetCorrectionOffset_Request__fini(msg);
    return false;
  }
  // one_hot_legs
  if (!std_msgs__msg__Int8MultiArray__init(&msg->one_hot_legs)) {
    gwpspider_interfaces__srv__GetCorrectionOffset_Request__fini(msg);
    return false;
  }
  return true;
}

void
gwpspider_interfaces__srv__GetCorrectionOffset_Request__fini(gwpspider_interfaces__srv__GetCorrectionOffset_Request * msg)
{
  if (!msg) {
    return;
  }
  // legs_positions
  std_msgs__msg__Float32MultiArray__fini(&msg->legs_positions);
  // rpy
  std_msgs__msg__Float32MultiArray__fini(&msg->rpy);
  // commanded_position
  std_msgs__msg__Float32MultiArray__fini(&msg->commanded_position);
  // one_hot_legs
  std_msgs__msg__Int8MultiArray__fini(&msg->one_hot_legs);
}

bool
gwpspider_interfaces__srv__GetCorrectionOffset_Request__are_equal(const gwpspider_interfaces__srv__GetCorrectionOffset_Request * lhs, const gwpspider_interfaces__srv__GetCorrectionOffset_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // legs_positions
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->legs_positions), &(rhs->legs_positions)))
  {
    return false;
  }
  // rpy
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->rpy), &(rhs->rpy)))
  {
    return false;
  }
  // commanded_position
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->commanded_position), &(rhs->commanded_position)))
  {
    return false;
  }
  // one_hot_legs
  if (!std_msgs__msg__Int8MultiArray__are_equal(
      &(lhs->one_hot_legs), &(rhs->one_hot_legs)))
  {
    return false;
  }
  return true;
}

bool
gwpspider_interfaces__srv__GetCorrectionOffset_Request__copy(
  const gwpspider_interfaces__srv__GetCorrectionOffset_Request * input,
  gwpspider_interfaces__srv__GetCorrectionOffset_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // legs_positions
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->legs_positions), &(output->legs_positions)))
  {
    return false;
  }
  // rpy
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->rpy), &(output->rpy)))
  {
    return false;
  }
  // commanded_position
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->commanded_position), &(output->commanded_position)))
  {
    return false;
  }
  // one_hot_legs
  if (!std_msgs__msg__Int8MultiArray__copy(
      &(input->one_hot_legs), &(output->one_hot_legs)))
  {
    return false;
  }
  return true;
}

gwpspider_interfaces__srv__GetCorrectionOffset_Request *
gwpspider_interfaces__srv__GetCorrectionOffset_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__srv__GetCorrectionOffset_Request * msg = (gwpspider_interfaces__srv__GetCorrectionOffset_Request *)allocator.allocate(sizeof(gwpspider_interfaces__srv__GetCorrectionOffset_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gwpspider_interfaces__srv__GetCorrectionOffset_Request));
  bool success = gwpspider_interfaces__srv__GetCorrectionOffset_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gwpspider_interfaces__srv__GetCorrectionOffset_Request__destroy(gwpspider_interfaces__srv__GetCorrectionOffset_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gwpspider_interfaces__srv__GetCorrectionOffset_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence__init(gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__srv__GetCorrectionOffset_Request * data = NULL;

  if (size) {
    data = (gwpspider_interfaces__srv__GetCorrectionOffset_Request *)allocator.zero_allocate(size, sizeof(gwpspider_interfaces__srv__GetCorrectionOffset_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gwpspider_interfaces__srv__GetCorrectionOffset_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gwpspider_interfaces__srv__GetCorrectionOffset_Request__fini(&data[i - 1]);
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
gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence__fini(gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence * array)
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
      gwpspider_interfaces__srv__GetCorrectionOffset_Request__fini(&array->data[i]);
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

gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence *
gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence * array = (gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence *)allocator.allocate(sizeof(gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence__destroy(gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence__are_equal(const gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence * lhs, const gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gwpspider_interfaces__srv__GetCorrectionOffset_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence__copy(
  const gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence * input,
  gwpspider_interfaces__srv__GetCorrectionOffset_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gwpspider_interfaces__srv__GetCorrectionOffset_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gwpspider_interfaces__srv__GetCorrectionOffset_Request * data =
      (gwpspider_interfaces__srv__GetCorrectionOffset_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gwpspider_interfaces__srv__GetCorrectionOffset_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gwpspider_interfaces__srv__GetCorrectionOffset_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gwpspider_interfaces__srv__GetCorrectionOffset_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `correction_offset`
// already included above
// #include "std_msgs/msg/detail/float32_multi_array__functions.h"

bool
gwpspider_interfaces__srv__GetCorrectionOffset_Response__init(gwpspider_interfaces__srv__GetCorrectionOffset_Response * msg)
{
  if (!msg) {
    return false;
  }
  // correction_offset
  if (!std_msgs__msg__Float32MultiArray__init(&msg->correction_offset)) {
    gwpspider_interfaces__srv__GetCorrectionOffset_Response__fini(msg);
    return false;
  }
  return true;
}

void
gwpspider_interfaces__srv__GetCorrectionOffset_Response__fini(gwpspider_interfaces__srv__GetCorrectionOffset_Response * msg)
{
  if (!msg) {
    return;
  }
  // correction_offset
  std_msgs__msg__Float32MultiArray__fini(&msg->correction_offset);
}

bool
gwpspider_interfaces__srv__GetCorrectionOffset_Response__are_equal(const gwpspider_interfaces__srv__GetCorrectionOffset_Response * lhs, const gwpspider_interfaces__srv__GetCorrectionOffset_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // correction_offset
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->correction_offset), &(rhs->correction_offset)))
  {
    return false;
  }
  return true;
}

bool
gwpspider_interfaces__srv__GetCorrectionOffset_Response__copy(
  const gwpspider_interfaces__srv__GetCorrectionOffset_Response * input,
  gwpspider_interfaces__srv__GetCorrectionOffset_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // correction_offset
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->correction_offset), &(output->correction_offset)))
  {
    return false;
  }
  return true;
}

gwpspider_interfaces__srv__GetCorrectionOffset_Response *
gwpspider_interfaces__srv__GetCorrectionOffset_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__srv__GetCorrectionOffset_Response * msg = (gwpspider_interfaces__srv__GetCorrectionOffset_Response *)allocator.allocate(sizeof(gwpspider_interfaces__srv__GetCorrectionOffset_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gwpspider_interfaces__srv__GetCorrectionOffset_Response));
  bool success = gwpspider_interfaces__srv__GetCorrectionOffset_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gwpspider_interfaces__srv__GetCorrectionOffset_Response__destroy(gwpspider_interfaces__srv__GetCorrectionOffset_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gwpspider_interfaces__srv__GetCorrectionOffset_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence__init(gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__srv__GetCorrectionOffset_Response * data = NULL;

  if (size) {
    data = (gwpspider_interfaces__srv__GetCorrectionOffset_Response *)allocator.zero_allocate(size, sizeof(gwpspider_interfaces__srv__GetCorrectionOffset_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gwpspider_interfaces__srv__GetCorrectionOffset_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gwpspider_interfaces__srv__GetCorrectionOffset_Response__fini(&data[i - 1]);
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
gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence__fini(gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence * array)
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
      gwpspider_interfaces__srv__GetCorrectionOffset_Response__fini(&array->data[i]);
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

gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence *
gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence * array = (gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence *)allocator.allocate(sizeof(gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence__destroy(gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence__are_equal(const gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence * lhs, const gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gwpspider_interfaces__srv__GetCorrectionOffset_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence__copy(
  const gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence * input,
  gwpspider_interfaces__srv__GetCorrectionOffset_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gwpspider_interfaces__srv__GetCorrectionOffset_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gwpspider_interfaces__srv__GetCorrectionOffset_Response * data =
      (gwpspider_interfaces__srv__GetCorrectionOffset_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gwpspider_interfaces__srv__GetCorrectionOffset_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gwpspider_interfaces__srv__GetCorrectionOffset_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gwpspider_interfaces__srv__GetCorrectionOffset_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
