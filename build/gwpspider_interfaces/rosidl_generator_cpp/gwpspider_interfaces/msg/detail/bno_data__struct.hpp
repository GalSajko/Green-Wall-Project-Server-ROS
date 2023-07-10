// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:msg/BnoData.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'rpy'
// Member 'gravity_vector'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__msg__BnoData __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__msg__BnoData __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BnoData_
{
  using Type = BnoData_<ContainerAllocator>;

  explicit BnoData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rpy(_init),
    gravity_vector(_init)
  {
    (void)_init;
  }

  explicit BnoData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rpy(_alloc, _init),
    gravity_vector(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _rpy_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _rpy_type rpy;
  using _gravity_vector_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _gravity_vector_type gravity_vector;

  // setters for named parameter idiom
  Type & set__rpy(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->rpy = _arg;
    return *this;
  }
  Type & set__gravity_vector(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->gravity_vector = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::msg::BnoData_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::msg::BnoData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::BnoData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::BnoData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::BnoData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::BnoData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::BnoData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::BnoData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::BnoData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::BnoData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__msg__BnoData
    std::shared_ptr<gwpspider_interfaces::msg::BnoData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__msg__BnoData
    std::shared_ptr<gwpspider_interfaces::msg::BnoData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BnoData_ & other) const
  {
    if (this->rpy != other.rpy) {
      return false;
    }
    if (this->gravity_vector != other.gravity_vector) {
      return false;
    }
    return true;
  }
  bool operator!=(const BnoData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BnoData_

// alias to use template instance with default allocator
using BnoData =
  gwpspider_interfaces::msg::BnoData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__STRUCT_HPP_
