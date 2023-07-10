// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:srv/GetSpiderPose.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_SPIDER_POSE__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_SPIDER_POSE__STRUCT_HPP_

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
// Member 'legs_global_positions'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__GetSpiderPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__GetSpiderPose_Request __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSpiderPose_Request_
{
  using Type = GetSpiderPose_Request_<ContainerAllocator>;

  explicit GetSpiderPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : legs_ids(_init),
    legs_global_positions(_init)
  {
    (void)_init;
  }

  explicit GetSpiderPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : legs_ids(_alloc, _init),
    legs_global_positions(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _legs_ids_type =
    std_msgs::msg::Int8MultiArray_<ContainerAllocator>;
  _legs_ids_type legs_ids;
  using _legs_global_positions_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _legs_global_positions_type legs_global_positions;

  // setters for named parameter idiom
  Type & set__legs_ids(
    const std_msgs::msg::Int8MultiArray_<ContainerAllocator> & _arg)
  {
    this->legs_ids = _arg;
    return *this;
  }
  Type & set__legs_global_positions(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->legs_global_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__GetSpiderPose_Request
    std::shared_ptr<gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__GetSpiderPose_Request
    std::shared_ptr<gwpspider_interfaces::srv::GetSpiderPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSpiderPose_Request_ & other) const
  {
    if (this->legs_ids != other.legs_ids) {
      return false;
    }
    if (this->legs_global_positions != other.legs_global_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSpiderPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSpiderPose_Request_

// alias to use template instance with default allocator
using GetSpiderPose_Request =
  gwpspider_interfaces::srv::GetSpiderPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces


// Include directives for member types
// Member 'spider_pose'
// already included above
// #include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__srv__GetSpiderPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__srv__GetSpiderPose_Response __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSpiderPose_Response_
{
  using Type = GetSpiderPose_Response_<ContainerAllocator>;

  explicit GetSpiderPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : spider_pose(_init)
  {
    (void)_init;
  }

  explicit GetSpiderPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : spider_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _spider_pose_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _spider_pose_type spider_pose;

  // setters for named parameter idiom
  Type & set__spider_pose(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->spider_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__srv__GetSpiderPose_Response
    std::shared_ptr<gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__srv__GetSpiderPose_Response
    std::shared_ptr<gwpspider_interfaces::srv::GetSpiderPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSpiderPose_Response_ & other) const
  {
    if (this->spider_pose != other.spider_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSpiderPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSpiderPose_Response_

// alias to use template instance with default allocator
using GetSpiderPose_Response =
  gwpspider_interfaces::srv::GetSpiderPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{

namespace srv
{

struct GetSpiderPose
{
  using Request = gwpspider_interfaces::srv::GetSpiderPose_Request;
  using Response = gwpspider_interfaces::srv::GetSpiderPose_Response;
};

}  // namespace srv

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_SPIDER_POSE__STRUCT_HPP_
