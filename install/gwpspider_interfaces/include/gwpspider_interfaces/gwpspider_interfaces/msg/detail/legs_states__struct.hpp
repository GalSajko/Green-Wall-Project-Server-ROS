// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:msg/LegsStates.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joints_positions'
// Member 'legs_local_positions'
// Member 'forces'
// Member 'torques'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__msg__LegsStates __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__msg__LegsStates __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegsStates_
{
  using Type = LegsStates_<ContainerAllocator>;

  explicit LegsStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints_positions(_init),
    legs_local_positions(_init),
    forces(_init),
    torques(_init)
  {
    (void)_init;
  }

  explicit LegsStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints_positions(_alloc, _init),
    legs_local_positions(_alloc, _init),
    forces(_alloc, _init),
    torques(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joints_positions_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _joints_positions_type joints_positions;
  using _legs_local_positions_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _legs_local_positions_type legs_local_positions;
  using _forces_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _forces_type forces;
  using _torques_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _torques_type torques;

  // setters for named parameter idiom
  Type & set__joints_positions(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->joints_positions = _arg;
    return *this;
  }
  Type & set__legs_local_positions(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->legs_local_positions = _arg;
    return *this;
  }
  Type & set__forces(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->forces = _arg;
    return *this;
  }
  Type & set__torques(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->torques = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::msg::LegsStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::msg::LegsStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::LegsStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::LegsStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::LegsStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::LegsStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::LegsStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::LegsStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::LegsStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::LegsStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__msg__LegsStates
    std::shared_ptr<gwpspider_interfaces::msg::LegsStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__msg__LegsStates
    std::shared_ptr<gwpspider_interfaces::msg::LegsStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegsStates_ & other) const
  {
    if (this->joints_positions != other.joints_positions) {
      return false;
    }
    if (this->legs_local_positions != other.legs_local_positions) {
      return false;
    }
    if (this->forces != other.forces) {
      return false;
    }
    if (this->torques != other.torques) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegsStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegsStates_

// alias to use template instance with default allocator
using LegsStates =
  gwpspider_interfaces::msg::LegsStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__STRUCT_HPP_
