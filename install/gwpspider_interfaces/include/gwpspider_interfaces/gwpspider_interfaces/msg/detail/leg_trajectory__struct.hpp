// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:msg/LegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position_trajectory'
// Member 'velocity_trajectory'
// Member 'acceleration_trajectory'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__msg__LegTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__msg__LegTrajectory __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegTrajectory_
{
  using Type = LegTrajectory_<ContainerAllocator>;

  explicit LegTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_trajectory(_init),
    velocity_trajectory(_init),
    acceleration_trajectory(_init)
  {
    (void)_init;
  }

  explicit LegTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_trajectory(_alloc, _init),
    velocity_trajectory(_alloc, _init),
    acceleration_trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_trajectory_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _position_trajectory_type position_trajectory;
  using _velocity_trajectory_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _velocity_trajectory_type velocity_trajectory;
  using _acceleration_trajectory_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _acceleration_trajectory_type acceleration_trajectory;

  // setters for named parameter idiom
  Type & set__position_trajectory(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->position_trajectory = _arg;
    return *this;
  }
  Type & set__velocity_trajectory(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->velocity_trajectory = _arg;
    return *this;
  }
  Type & set__acceleration_trajectory(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->acceleration_trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__msg__LegTrajectory
    std::shared_ptr<gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__msg__LegTrajectory
    std::shared_ptr<gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegTrajectory_ & other) const
  {
    if (this->position_trajectory != other.position_trajectory) {
      return false;
    }
    if (this->velocity_trajectory != other.velocity_trajectory) {
      return false;
    }
    if (this->acceleration_trajectory != other.acceleration_trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegTrajectory_

// alias to use template instance with default allocator
using LegTrajectory =
  gwpspider_interfaces::msg::LegTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__STRUCT_HPP_
