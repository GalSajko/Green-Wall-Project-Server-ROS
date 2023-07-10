// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:srv/GetWalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_WALKING_INSTRUCTIONS__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_WALKING_INSTRUCTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_pose'
// Member 'goal_pose'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__GetWalkingInstructions_Request __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__GetWalkingInstructions_Request __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWalkingInstructions_Request_
{
  using Type = GetWalkingInstructions_Request_<ContainerAllocator>;

  explicit GetWalkingInstructions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_pose(_init),
    goal_pose(_init)
  {
    (void)_init;
  }

  explicit GetWalkingInstructions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_pose(_alloc, _init),
    goal_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_pose_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _start_pose_type start_pose;
  using _goal_pose_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _goal_pose_type goal_pose;

  // setters for named parameter idiom
  Type & set__start_pose(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->start_pose = _arg;
    return *this;
  }
  Type & set__goal_pose(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->goal_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__GetWalkingInstructions_Request
    std::shared_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__GetWalkingInstructions_Request
    std::shared_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWalkingInstructions_Request_ & other) const
  {
    if (this->start_pose != other.start_pose) {
      return false;
    }
    if (this->goal_pose != other.goal_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWalkingInstructions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWalkingInstructions_Request_

// alias to use template instance with default allocator
using GetWalkingInstructions_Request =
  gwpspider_interfaces::srv::GetWalkingInstructions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces


// Include directives for member types
// Member 'walking_instructions'
#include "gwpspider_interfaces/msg/detail/walking_instructions__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__GetWalkingInstructions_Response __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__GetWalkingInstructions_Response __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWalkingInstructions_Response_
{
  using Type = GetWalkingInstructions_Response_<ContainerAllocator>;

  explicit GetWalkingInstructions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : walking_instructions(_init)
  {
    (void)_init;
  }

  explicit GetWalkingInstructions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : walking_instructions(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _walking_instructions_type =
    gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator>;
  _walking_instructions_type walking_instructions;

  // setters for named parameter idiom
  Type & set__walking_instructions(
    const gwpspider_interfaces::msg::WalkingInstructions_<ContainerAllocator> & _arg)
  {
    this->walking_instructions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__GetWalkingInstructions_Response
    std::shared_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__GetWalkingInstructions_Response
    std::shared_ptr<gwpspider_interfaces::srv::GetWalkingInstructions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWalkingInstructions_Response_ & other) const
  {
    if (this->walking_instructions != other.walking_instructions) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWalkingInstructions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWalkingInstructions_Response_

// alias to use template instance with default allocator
using GetWalkingInstructions_Response =
  gwpspider_interfaces::srv::GetWalkingInstructions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{

namespace srv
{

struct GetWalkingInstructions
{
  using Request = gwpspider_interfaces::srv::GetWalkingInstructions_Request;
  using Response = gwpspider_interfaces::srv::GetWalkingInstructions_Response;
};

}  // namespace srv

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_WALKING_INSTRUCTIONS__STRUCT_HPP_
