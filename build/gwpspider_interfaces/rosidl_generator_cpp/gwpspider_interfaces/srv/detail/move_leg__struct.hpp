// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:srv/MoveLeg.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal_position'
// Member 'spider_pose'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__MoveLeg_Request __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__MoveLeg_Request __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_Request_
{
  using Type = MoveLeg_Request_<ContainerAllocator>;

  explicit MoveLeg_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_position(_init),
    spider_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leg_id = 0;
      this->trajectory_type = "";
      this->origin = "";
      this->duration = 0.0f;
      this->is_offset = false;
      this->open_gripper = false;
      this->close_gripper = false;
    }
  }

  explicit MoveLeg_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_position(_alloc, _init),
    trajectory_type(_alloc),
    origin(_alloc),
    spider_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leg_id = 0;
      this->trajectory_type = "";
      this->origin = "";
      this->duration = 0.0f;
      this->is_offset = false;
      this->open_gripper = false;
      this->close_gripper = false;
    }
  }

  // field types and members
  using _leg_id_type =
    int8_t;
  _leg_id_type leg_id;
  using _goal_position_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _goal_position_type goal_position;
  using _trajectory_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _trajectory_type_type trajectory_type;
  using _origin_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _origin_type origin;
  using _duration_type =
    float;
  _duration_type duration;
  using _is_offset_type =
    bool;
  _is_offset_type is_offset;
  using _spider_pose_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _spider_pose_type spider_pose;
  using _open_gripper_type =
    bool;
  _open_gripper_type open_gripper;
  using _close_gripper_type =
    bool;
  _close_gripper_type close_gripper;

  // setters for named parameter idiom
  Type & set__leg_id(
    const int8_t & _arg)
  {
    this->leg_id = _arg;
    return *this;
  }
  Type & set__goal_position(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->goal_position = _arg;
    return *this;
  }
  Type & set__trajectory_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->trajectory_type = _arg;
    return *this;
  }
  Type & set__origin(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__is_offset(
    const bool & _arg)
  {
    this->is_offset = _arg;
    return *this;
  }
  Type & set__spider_pose(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->spider_pose = _arg;
    return *this;
  }
  Type & set__open_gripper(
    const bool & _arg)
  {
    this->open_gripper = _arg;
    return *this;
  }
  Type & set__close_gripper(
    const bool & _arg)
  {
    this->close_gripper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__MoveLeg_Request
    std::shared_ptr<gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__MoveLeg_Request
    std::shared_ptr<gwpspider_interfaces::srv::MoveLeg_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_Request_ & other) const
  {
    if (this->leg_id != other.leg_id) {
      return false;
    }
    if (this->goal_position != other.goal_position) {
      return false;
    }
    if (this->trajectory_type != other.trajectory_type) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->is_offset != other.is_offset) {
      return false;
    }
    if (this->spider_pose != other.spider_pose) {
      return false;
    }
    if (this->open_gripper != other.open_gripper) {
      return false;
    }
    if (this->close_gripper != other.close_gripper) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveLeg_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_Request_

// alias to use template instance with default allocator
using MoveLeg_Request =
  gwpspider_interfaces::srv::MoveLeg_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces


#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__MoveLeg_Response __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__MoveLeg_Response __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_Response_
{
  using Type = MoveLeg_Response_<ContainerAllocator>;

  explicit MoveLeg_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MoveLeg_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__MoveLeg_Response
    std::shared_ptr<gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__MoveLeg_Response
    std::shared_ptr<gwpspider_interfaces::srv::MoveLeg_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveLeg_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_Response_

// alias to use template instance with default allocator
using MoveLeg_Response =
  gwpspider_interfaces::srv::MoveLeg_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{

namespace srv
{

struct MoveLeg
{
  using Request = gwpspider_interfaces::srv::MoveLeg_Request;
  using Response = gwpspider_interfaces::srv::MoveLeg_Response;
};

}  // namespace srv

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__STRUCT_HPP_
