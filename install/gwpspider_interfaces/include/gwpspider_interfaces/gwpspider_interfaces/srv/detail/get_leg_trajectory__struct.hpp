// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:srv/GetLegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'current_position'
// Member 'goal_position'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__GetLegTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__GetLegTrajectory_Request __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLegTrajectory_Request_
{
  using Type = GetLegTrajectory_Request_<ContainerAllocator>;

  explicit GetLegTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_position(_init),
    goal_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0f;
      this->trajectory_type = "";
    }
  }

  explicit GetLegTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_position(_alloc, _init),
    goal_position(_alloc, _init),
    trajectory_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0f;
      this->trajectory_type = "";
    }
  }

  // field types and members
  using _current_position_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _current_position_type current_position;
  using _goal_position_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _goal_position_type goal_position;
  using _duration_type =
    float;
  _duration_type duration;
  using _trajectory_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _trajectory_type_type trajectory_type;

  // setters for named parameter idiom
  Type & set__current_position(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->current_position = _arg;
    return *this;
  }
  Type & set__goal_position(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->goal_position = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__trajectory_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->trajectory_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__GetLegTrajectory_Request
    std::shared_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__GetLegTrajectory_Request
    std::shared_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLegTrajectory_Request_ & other) const
  {
    if (this->current_position != other.current_position) {
      return false;
    }
    if (this->goal_position != other.goal_position) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->trajectory_type != other.trajectory_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLegTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLegTrajectory_Request_

// alias to use template instance with default allocator
using GetLegTrajectory_Request =
  gwpspider_interfaces::srv::GetLegTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces


// Include directives for member types
// Member 'trajectories'
#include "gwpspider_interfaces/msg/detail/leg_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__GetLegTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__GetLegTrajectory_Response __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLegTrajectory_Response_
{
  using Type = GetLegTrajectory_Response_<ContainerAllocator>;

  explicit GetLegTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectories(_init)
  {
    (void)_init;
  }

  explicit GetLegTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectories(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _trajectories_type =
    gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator>;
  _trajectories_type trajectories;

  // setters for named parameter idiom
  Type & set__trajectories(
    const gwpspider_interfaces::msg::LegTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectories = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__GetLegTrajectory_Response
    std::shared_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__GetLegTrajectory_Response
    std::shared_ptr<gwpspider_interfaces::srv::GetLegTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLegTrajectory_Response_ & other) const
  {
    if (this->trajectories != other.trajectories) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLegTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLegTrajectory_Response_

// alias to use template instance with default allocator
using GetLegTrajectory_Response =
  gwpspider_interfaces::srv::GetLegTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{

namespace srv
{

struct GetLegTrajectory
{
  using Request = gwpspider_interfaces::srv::GetLegTrajectory_Request;
  using Response = gwpspider_interfaces::srv::GetLegTrajectory_Response;
};

}  // namespace srv

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__STRUCT_HPP_
