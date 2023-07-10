// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:srv/ApplyForceLeg.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCE_LEG__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCE_LEG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'desired_force'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__ApplyForceLeg_Request __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__ApplyForceLeg_Request __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyForceLeg_Request_
{
  using Type = ApplyForceLeg_Request_<ContainerAllocator>;

  explicit ApplyForceLeg_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : desired_force(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leg_id = 0;
    }
  }

  explicit ApplyForceLeg_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : desired_force(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leg_id = 0;
    }
  }

  // field types and members
  using _leg_id_type =
    int8_t;
  _leg_id_type leg_id;
  using _desired_force_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _desired_force_type desired_force;

  // setters for named parameter idiom
  Type & set__leg_id(
    const int8_t & _arg)
  {
    this->leg_id = _arg;
    return *this;
  }
  Type & set__desired_force(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->desired_force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__ApplyForceLeg_Request
    std::shared_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__ApplyForceLeg_Request
    std::shared_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyForceLeg_Request_ & other) const
  {
    if (this->leg_id != other.leg_id) {
      return false;
    }
    if (this->desired_force != other.desired_force) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyForceLeg_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyForceLeg_Request_

// alias to use template instance with default allocator
using ApplyForceLeg_Request =
  gwpspider_interfaces::srv::ApplyForceLeg_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces


#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__ApplyForceLeg_Response __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__ApplyForceLeg_Response __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyForceLeg_Response_
{
  using Type = ApplyForceLeg_Response_<ContainerAllocator>;

  explicit ApplyForceLeg_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ApplyForceLeg_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__ApplyForceLeg_Response
    std::shared_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__ApplyForceLeg_Response
    std::shared_ptr<gwpspider_interfaces::srv::ApplyForceLeg_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyForceLeg_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyForceLeg_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyForceLeg_Response_

// alias to use template instance with default allocator
using ApplyForceLeg_Response =
  gwpspider_interfaces::srv::ApplyForceLeg_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{

namespace srv
{

struct ApplyForceLeg
{
  using Request = gwpspider_interfaces::srv::ApplyForceLeg_Request;
  using Response = gwpspider_interfaces::srv::ApplyForceLeg_Response;
};

}  // namespace srv

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCE_LEG__STRUCT_HPP_
