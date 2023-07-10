// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:msg/WalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'poses'
// Member 'pins_instructions'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__msg__WalkingInstructions __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__msg__WalkingInstructions __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WalkingInstructions_
{
  using Type = WalkingInstructions_<ContainerAllocator>;

  explicit WalkingInstructions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : poses(_init),
    pins_instructions(_init)
  {
    (void)_init;
  }

  explicit WalkingInstructions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : poses(_alloc, _init),
    pins_instructions(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _poses_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _poses_type poses;
  using _pins_instructions_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _pins_instructions_type pins_instructions;

  // setters for named parameter idiom
  Type & set__poses(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__pins_instructions(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->pins_instructions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__msg__WalkingInstructions
    std::shared_ptr<gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__msg__WalkingInstructions
    std::shared_ptr<gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WalkingInstructions_ & other) const
  {
    if (this->poses != other.poses) {
      return false;
    }
    if (this->pins_instructions != other.pins_instructions) {
      return false;
    }
    return true;
  }
  bool operator!=(const WalkingInstructions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WalkingInstructions_

// alias to use template instance with default allocator
using WalkingInstructions =
  gwpspider_interfaces::msg::WalkingInstructions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__STRUCT_HPP_
