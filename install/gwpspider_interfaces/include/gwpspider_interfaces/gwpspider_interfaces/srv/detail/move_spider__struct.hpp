// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:srv/MoveSpider.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_SPIDER__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_SPIDER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'legs_ids'
#include "std_msgs/msg/detail/int8_multi_array__struct.hpp"
// Member 'used_pins_positions'
// Member 'goal_spider_pose'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__MoveSpider_Request __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__MoveSpider_Request __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveSpider_Request_
{
  using Type = MoveSpider_Request_<ContainerAllocator>;

  explicit MoveSpider_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : legs_ids(_init),
    used_pins_positions(_init),
    goal_spider_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0f;
    }
  }

  explicit MoveSpider_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : legs_ids(_alloc, _init),
    used_pins_positions(_alloc, _init),
    goal_spider_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0f;
    }
  }

  // field types and members
  using _legs_ids_type =
    std_msgs::msg::Int8MultiArray_<ContainerAllocator>;
  _legs_ids_type legs_ids;
  using _used_pins_positions_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _used_pins_positions_type used_pins_positions;
  using _goal_spider_pose_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _goal_spider_pose_type goal_spider_pose;
  using _duration_type =
    float;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__legs_ids(
    const std_msgs::msg::Int8MultiArray_<ContainerAllocator> & _arg)
  {
    this->legs_ids = _arg;
    return *this;
  }
  Type & set__used_pins_positions(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->used_pins_positions = _arg;
    return *this;
  }
  Type & set__goal_spider_pose(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->goal_spider_pose = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__MoveSpider_Request
    std::shared_ptr<gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__MoveSpider_Request
    std::shared_ptr<gwpspider_interfaces::srv::MoveSpider_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveSpider_Request_ & other) const
  {
    if (this->legs_ids != other.legs_ids) {
      return false;
    }
    if (this->used_pins_positions != other.used_pins_positions) {
      return false;
    }
    if (this->goal_spider_pose != other.goal_spider_pose) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveSpider_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveSpider_Request_

// alias to use template instance with default allocator
using MoveSpider_Request =
  gwpspider_interfaces::srv::MoveSpider_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces


#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__MoveSpider_Response __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__MoveSpider_Response __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveSpider_Response_
{
  using Type = MoveSpider_Response_<ContainerAllocator>;

  explicit MoveSpider_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MoveSpider_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__MoveSpider_Response
    std::shared_ptr<gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__MoveSpider_Response
    std::shared_ptr<gwpspider_interfaces::srv::MoveSpider_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveSpider_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveSpider_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveSpider_Response_

// alias to use template instance with default allocator
using MoveSpider_Response =
  gwpspider_interfaces::srv::MoveSpider_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{

namespace srv
{

struct MoveSpider
{
  using Request = gwpspider_interfaces::srv::MoveSpider_Request;
  using Response = gwpspider_interfaces::srv::MoveSpider_Response;
};

}  // namespace srv

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_SPIDER__STRUCT_HPP_
