// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gwpspider_interfaces:msg/WalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__FUNCTIONS_H_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gwpspider_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "gwpspider_interfaces/msg/detail/walking_instructions__struct.h"

/// Initialize msg/WalkingInstructions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gwpspider_interfaces__msg__WalkingInstructions
 * )) before or use
 * gwpspider_interfaces__msg__WalkingInstructions__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
bool
gwpspider_interfaces__msg__WalkingInstructions__init(gwpspider_interfaces__msg__WalkingInstructions * msg);

/// Finalize msg/WalkingInstructions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
void
gwpspider_interfaces__msg__WalkingInstructions__fini(gwpspider_interfaces__msg__WalkingInstructions * msg);

/// Create msg/WalkingInstructions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gwpspider_interfaces__msg__WalkingInstructions__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
gwpspider_interfaces__msg__WalkingInstructions *
gwpspider_interfaces__msg__WalkingInstructions__create();

/// Destroy msg/WalkingInstructions message.
/**
 * It calls
 * gwpspider_interfaces__msg__WalkingInstructions__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
void
gwpspider_interfaces__msg__WalkingInstructions__destroy(gwpspider_interfaces__msg__WalkingInstructions * msg);

/// Check for msg/WalkingInstructions message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
bool
gwpspider_interfaces__msg__WalkingInstructions__are_equal(const gwpspider_interfaces__msg__WalkingInstructions * lhs, const gwpspider_interfaces__msg__WalkingInstructions * rhs);

/// Copy a msg/WalkingInstructions message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
bool
gwpspider_interfaces__msg__WalkingInstructions__copy(
  const gwpspider_interfaces__msg__WalkingInstructions * input,
  gwpspider_interfaces__msg__WalkingInstructions * output);

/// Initialize array of msg/WalkingInstructions messages.
/**
 * It allocates the memory for the number of elements and calls
 * gwpspider_interfaces__msg__WalkingInstructions__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
bool
gwpspider_interfaces__msg__WalkingInstructions__Sequence__init(gwpspider_interfaces__msg__WalkingInstructions__Sequence * array, size_t size);

/// Finalize array of msg/WalkingInstructions messages.
/**
 * It calls
 * gwpspider_interfaces__msg__WalkingInstructions__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
void
gwpspider_interfaces__msg__WalkingInstructions__Sequence__fini(gwpspider_interfaces__msg__WalkingInstructions__Sequence * array);

/// Create array of msg/WalkingInstructions messages.
/**
 * It allocates the memory for the array and calls
 * gwpspider_interfaces__msg__WalkingInstructions__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
gwpspider_interfaces__msg__WalkingInstructions__Sequence *
gwpspider_interfaces__msg__WalkingInstructions__Sequence__create(size_t size);

/// Destroy array of msg/WalkingInstructions messages.
/**
 * It calls
 * gwpspider_interfaces__msg__WalkingInstructions__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
void
gwpspider_interfaces__msg__WalkingInstructions__Sequence__destroy(gwpspider_interfaces__msg__WalkingInstructions__Sequence * array);

/// Check for msg/WalkingInstructions message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
bool
gwpspider_interfaces__msg__WalkingInstructions__Sequence__are_equal(const gwpspider_interfaces__msg__WalkingInstructions__Sequence * lhs, const gwpspider_interfaces__msg__WalkingInstructions__Sequence * rhs);

/// Copy an array of msg/WalkingInstructions messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gwpspider_interfaces
bool
gwpspider_interfaces__msg__WalkingInstructions__Sequence__copy(
  const gwpspider_interfaces__msg__WalkingInstructions__Sequence * input,
  gwpspider_interfaces__msg__WalkingInstructions__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__FUNCTIONS_H_
