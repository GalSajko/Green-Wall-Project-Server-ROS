// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:msg/GrippersStates.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'first_gripper'
// Member 'second_gripper'
// Member 'third_gripper'
// Member 'fourth_gripper'
// Member 'fifth_gripper'
#include "gwpspider_interfaces/msg/detail/gripper_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__msg__GrippersStates __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__msg__GrippersStates __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GrippersStates_
{
  using Type = GrippersStates_<ContainerAllocator>;

  explicit GrippersStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_gripper(_init),
    second_gripper(_init),
    third_gripper(_init),
    fourth_gripper(_init),
    fifth_gripper(_init)
  {
    (void)_init;
  }

  explicit GrippersStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_gripper(_alloc, _init),
    second_gripper(_alloc, _init),
    third_gripper(_alloc, _init),
    fourth_gripper(_alloc, _init),
    fifth_gripper(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _first_gripper_type =
    gwpspider_interfaces::msg::GripperState_<ContainerAllocator>;
  _first_gripper_type first_gripper;
  using _second_gripper_type =
    gwpspider_interfaces::msg::GripperState_<ContainerAllocator>;
  _second_gripper_type second_gripper;
  using _third_gripper_type =
    gwpspider_interfaces::msg::GripperState_<ContainerAllocator>;
  _third_gripper_type third_gripper;
  using _fourth_gripper_type =
    gwpspider_interfaces::msg::GripperState_<ContainerAllocator>;
  _fourth_gripper_type fourth_gripper;
  using _fifth_gripper_type =
    gwpspider_interfaces::msg::GripperState_<ContainerAllocator>;
  _fifth_gripper_type fifth_gripper;

  // setters for named parameter idiom
  Type & set__first_gripper(
    const gwpspider_interfaces::msg::GripperState_<ContainerAllocator> & _arg)
  {
    this->first_gripper = _arg;
    return *this;
  }
  Type & set__second_gripper(
    const gwpspider_interfaces::msg::GripperState_<ContainerAllocator> & _arg)
  {
    this->second_gripper = _arg;
    return *this;
  }
  Type & set__third_gripper(
    const gwpspider_interfaces::msg::GripperState_<ContainerAllocator> & _arg)
  {
    this->third_gripper = _arg;
    return *this;
  }
  Type & set__fourth_gripper(
    const gwpspider_interfaces::msg::GripperState_<ContainerAllocator> & _arg)
  {
    this->fourth_gripper = _arg;
    return *this;
  }
  Type & set__fifth_gripper(
    const gwpspider_interfaces::msg::GripperState_<ContainerAllocator> & _arg)
  {
    this->fifth_gripper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__msg__GrippersStates
    std::shared_ptr<gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__msg__GrippersStates
    std::shared_ptr<gwpspider_interfaces::msg::GrippersStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrippersStates_ & other) const
  {
    if (this->first_gripper != other.first_gripper) {
      return false;
    }
    if (this->second_gripper != other.second_gripper) {
      return false;
    }
    if (this->third_gripper != other.third_gripper) {
      return false;
    }
    if (this->fourth_gripper != other.fourth_gripper) {
      return false;
    }
    if (this->fifth_gripper != other.fifth_gripper) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrippersStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrippersStates_

// alias to use template instance with default allocator
using GrippersStates =
  gwpspider_interfaces::msg::GrippersStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__STRUCT_HPP_
