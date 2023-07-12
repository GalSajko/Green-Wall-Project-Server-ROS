// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:srv/GetCorrectionOffset.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'legs_positions'
// Member 'rpy'
// Member 'commanded_position'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"
// Member 'one_hot_legs'
#include "std_msgs/msg/detail/int8_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__GetCorrectionOffset_Request __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__GetCorrectionOffset_Request __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCorrectionOffset_Request_
{
  using Type = GetCorrectionOffset_Request_<ContainerAllocator>;

  explicit GetCorrectionOffset_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : legs_positions(_init),
    rpy(_init),
    commanded_position(_init),
    one_hot_legs(_init)
  {
    (void)_init;
  }

  explicit GetCorrectionOffset_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : legs_positions(_alloc, _init),
    rpy(_alloc, _init),
    commanded_position(_alloc, _init),
    one_hot_legs(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _legs_positions_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _legs_positions_type legs_positions;
  using _rpy_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _rpy_type rpy;
  using _commanded_position_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _commanded_position_type commanded_position;
  using _one_hot_legs_type =
    std_msgs::msg::Int8MultiArray_<ContainerAllocator>;
  _one_hot_legs_type one_hot_legs;

  // setters for named parameter idiom
  Type & set__legs_positions(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->legs_positions = _arg;
    return *this;
  }
  Type & set__rpy(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->rpy = _arg;
    return *this;
  }
  Type & set__commanded_position(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->commanded_position = _arg;
    return *this;
  }
  Type & set__one_hot_legs(
    const std_msgs::msg::Int8MultiArray_<ContainerAllocator> & _arg)
  {
    this->one_hot_legs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__GetCorrectionOffset_Request
    std::shared_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__GetCorrectionOffset_Request
    std::shared_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCorrectionOffset_Request_ & other) const
  {
    if (this->legs_positions != other.legs_positions) {
      return false;
    }
    if (this->rpy != other.rpy) {
      return false;
    }
    if (this->commanded_position != other.commanded_position) {
      return false;
    }
    if (this->one_hot_legs != other.one_hot_legs) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCorrectionOffset_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCorrectionOffset_Request_

// alias to use template instance with default allocator
using GetCorrectionOffset_Request =
  gwpspider_interfaces::srv::GetCorrectionOffset_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces


// Include directives for member types
// Member 'correction_offset'
// already included above
// #include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__GetCorrectionOffset_Response __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__GetCorrectionOffset_Response __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCorrectionOffset_Response_
{
  using Type = GetCorrectionOffset_Response_<ContainerAllocator>;

  explicit GetCorrectionOffset_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : correction_offset(_init)
  {
    (void)_init;
  }

  explicit GetCorrectionOffset_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : correction_offset(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _correction_offset_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _correction_offset_type correction_offset;

  // setters for named parameter idiom
  Type & set__correction_offset(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->correction_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__GetCorrectionOffset_Response
    std::shared_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__GetCorrectionOffset_Response
    std::shared_ptr<gwpspider_interfaces::srv::GetCorrectionOffset_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCorrectionOffset_Response_ & other) const
  {
    if (this->correction_offset != other.correction_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCorrectionOffset_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCorrectionOffset_Response_

// alias to use template instance with default allocator
using GetCorrectionOffset_Response =
  gwpspider_interfaces::srv::GetCorrectionOffset_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{

namespace srv
{

struct GetCorrectionOffset
{
  using Request = gwpspider_interfaces::srv::GetCorrectionOffset_Request;
  using Response = gwpspider_interfaces::srv::GetCorrectionOffset_Response;
};

}  // namespace srv

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__STRUCT_HPP_
