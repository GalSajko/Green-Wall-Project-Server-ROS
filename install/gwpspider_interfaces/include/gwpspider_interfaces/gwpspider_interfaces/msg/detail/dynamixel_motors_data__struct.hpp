// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:msg/DynamixelMotorsData.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'positions'
// Member 'currents'
// Member 'motor_errors'
// Member 'temperatures'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__msg__DynamixelMotorsData __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__msg__DynamixelMotorsData __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamixelMotorsData_
{
  using Type = DynamixelMotorsData_<ContainerAllocator>;

  explicit DynamixelMotorsData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : positions(_init),
    currents(_init),
    motor_errors(_init),
    temperatures(_init)
  {
    (void)_init;
  }

  explicit DynamixelMotorsData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : positions(_alloc, _init),
    currents(_alloc, _init),
    motor_errors(_alloc, _init),
    temperatures(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _positions_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _positions_type positions;
  using _currents_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _currents_type currents;
  using _motor_errors_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _motor_errors_type motor_errors;
  using _temperatures_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _temperatures_type temperatures;

  // setters for named parameter idiom
  Type & set__positions(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__currents(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->currents = _arg;
    return *this;
  }
  Type & set__motor_errors(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->motor_errors = _arg;
    return *this;
  }
  Type & set__temperatures(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->temperatures = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__msg__DynamixelMotorsData
    std::shared_ptr<gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__msg__DynamixelMotorsData
    std::shared_ptr<gwpspider_interfaces::msg::DynamixelMotorsData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamixelMotorsData_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    if (this->currents != other.currents) {
      return false;
    }
    if (this->motor_errors != other.motor_errors) {
      return false;
    }
    if (this->temperatures != other.temperatures) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamixelMotorsData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamixelMotorsData_

// alias to use template instance with default allocator
using DynamixelMotorsData =
  gwpspider_interfaces::msg::DynamixelMotorsData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__STRUCT_HPP_
