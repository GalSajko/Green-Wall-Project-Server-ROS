// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_service_interfaces:srv/SpiderGoal.idl
// generated code does not contain a copyright notice
#include "my_service_interfaces/srv/detail/spider_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
my_service_interfaces__srv__SpiderGoal_Request__init(my_service_interfaces__srv__SpiderGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
my_service_interfaces__srv__SpiderGoal_Request__fini(my_service_interfaces__srv__SpiderGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
my_service_interfaces__srv__SpiderGoal_Request__are_equal(const my_service_interfaces__srv__SpiderGoal_Request * lhs, const my_service_interfaces__srv__SpiderGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
my_service_interfaces__srv__SpiderGoal_Request__copy(
  const my_service_interfaces__srv__SpiderGoal_Request * input,
  my_service_interfaces__srv__SpiderGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

my_service_interfaces__srv__SpiderGoal_Request *
my_service_interfaces__srv__SpiderGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_service_interfaces__srv__SpiderGoal_Request * msg = (my_service_interfaces__srv__SpiderGoal_Request *)allocator.allocate(sizeof(my_service_interfaces__srv__SpiderGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_service_interfaces__srv__SpiderGoal_Request));
  bool success = my_service_interfaces__srv__SpiderGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_service_interfaces__srv__SpiderGoal_Request__destroy(my_service_interfaces__srv__SpiderGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_service_interfaces__srv__SpiderGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_service_interfaces__srv__SpiderGoal_Request__Sequence__init(my_service_interfaces__srv__SpiderGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_service_interfaces__srv__SpiderGoal_Request * data = NULL;

  if (size) {
    data = (my_service_interfaces__srv__SpiderGoal_Request *)allocator.zero_allocate(size, sizeof(my_service_interfaces__srv__SpiderGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_service_interfaces__srv__SpiderGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_service_interfaces__srv__SpiderGoal_Request__fini(&data[i - 1]);
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
my_service_interfaces__srv__SpiderGoal_Request__Sequence__fini(my_service_interfaces__srv__SpiderGoal_Request__Sequence * array)
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
      my_service_interfaces__srv__SpiderGoal_Request__fini(&array->data[i]);
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

my_service_interfaces__srv__SpiderGoal_Request__Sequence *
my_service_interfaces__srv__SpiderGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_service_interfaces__srv__SpiderGoal_Request__Sequence * array = (my_service_interfaces__srv__SpiderGoal_Request__Sequence *)allocator.allocate(sizeof(my_service_interfaces__srv__SpiderGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_service_interfaces__srv__SpiderGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_service_interfaces__srv__SpiderGoal_Request__Sequence__destroy(my_service_interfaces__srv__SpiderGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_service_interfaces__srv__SpiderGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_service_interfaces__srv__SpiderGoal_Request__Sequence__are_equal(const my_service_interfaces__srv__SpiderGoal_Request__Sequence * lhs, const my_service_interfaces__srv__SpiderGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_service_interfaces__srv__SpiderGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_service_interfaces__srv__SpiderGoal_Request__Sequence__copy(
  const my_service_interfaces__srv__SpiderGoal_Request__Sequence * input,
  my_service_interfaces__srv__SpiderGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_service_interfaces__srv__SpiderGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_service_interfaces__srv__SpiderGoal_Request * data =
      (my_service_interfaces__srv__SpiderGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_service_interfaces__srv__SpiderGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_service_interfaces__srv__SpiderGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_service_interfaces__srv__SpiderGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
my_service_interfaces__srv__SpiderGoal_Response__init(my_service_interfaces__srv__SpiderGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->data, 0)) {
    my_service_interfaces__srv__SpiderGoal_Response__fini(msg);
    return false;
  }
  // go_refill
  // volume
  return true;
}

void
my_service_interfaces__srv__SpiderGoal_Response__fini(my_service_interfaces__srv__SpiderGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__float__Sequence__fini(&msg->data);
  // go_refill
  // volume
}

bool
my_service_interfaces__srv__SpiderGoal_Response__are_equal(const my_service_interfaces__srv__SpiderGoal_Response * lhs, const my_service_interfaces__srv__SpiderGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // go_refill
  if (lhs->go_refill != rhs->go_refill) {
    return false;
  }
  // volume
  if (lhs->volume != rhs->volume) {
    return false;
  }
  return true;
}

bool
my_service_interfaces__srv__SpiderGoal_Response__copy(
  const my_service_interfaces__srv__SpiderGoal_Response * input,
  my_service_interfaces__srv__SpiderGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // go_refill
  output->go_refill = input->go_refill;
  // volume
  output->volume = input->volume;
  return true;
}

my_service_interfaces__srv__SpiderGoal_Response *
my_service_interfaces__srv__SpiderGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_service_interfaces__srv__SpiderGoal_Response * msg = (my_service_interfaces__srv__SpiderGoal_Response *)allocator.allocate(sizeof(my_service_interfaces__srv__SpiderGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_service_interfaces__srv__SpiderGoal_Response));
  bool success = my_service_interfaces__srv__SpiderGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_service_interfaces__srv__SpiderGoal_Response__destroy(my_service_interfaces__srv__SpiderGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_service_interfaces__srv__SpiderGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_service_interfaces__srv__SpiderGoal_Response__Sequence__init(my_service_interfaces__srv__SpiderGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_service_interfaces__srv__SpiderGoal_Response * data = NULL;

  if (size) {
    data = (my_service_interfaces__srv__SpiderGoal_Response *)allocator.zero_allocate(size, sizeof(my_service_interfaces__srv__SpiderGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_service_interfaces__srv__SpiderGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_service_interfaces__srv__SpiderGoal_Response__fini(&data[i - 1]);
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
my_service_interfaces__srv__SpiderGoal_Response__Sequence__fini(my_service_interfaces__srv__SpiderGoal_Response__Sequence * array)
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
      my_service_interfaces__srv__SpiderGoal_Response__fini(&array->data[i]);
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

my_service_interfaces__srv__SpiderGoal_Response__Sequence *
my_service_interfaces__srv__SpiderGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_service_interfaces__srv__SpiderGoal_Response__Sequence * array = (my_service_interfaces__srv__SpiderGoal_Response__Sequence *)allocator.allocate(sizeof(my_service_interfaces__srv__SpiderGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_service_interfaces__srv__SpiderGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_service_interfaces__srv__SpiderGoal_Response__Sequence__destroy(my_service_interfaces__srv__SpiderGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_service_interfaces__srv__SpiderGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_service_interfaces__srv__SpiderGoal_Response__Sequence__are_equal(const my_service_interfaces__srv__SpiderGoal_Response__Sequence * lhs, const my_service_interfaces__srv__SpiderGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_service_interfaces__srv__SpiderGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_service_interfaces__srv__SpiderGoal_Response__Sequence__copy(
  const my_service_interfaces__srv__SpiderGoal_Response__Sequence * input,
  my_service_interfaces__srv__SpiderGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_service_interfaces__srv__SpiderGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_service_interfaces__srv__SpiderGoal_Response * data =
      (my_service_interfaces__srv__SpiderGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_service_interfaces__srv__SpiderGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_service_interfaces__srv__SpiderGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_service_interfaces__srv__SpiderGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
