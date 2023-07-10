// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gwpspider_interfaces:msg/WaterPumpCommand.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__WATER_PUMP_COMMAND__STRUCT_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__WATER_PUMP_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gwpspider_interfaces__msg__WaterPumpCommand __attribute__((deprecated))
#else
# define DEPRECATED__gwpspider_interfaces__msg__WaterPumpCommand __declspec(deprecated)
#endif

namespace gwpspider_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaterPumpCommand_
{
  using Type = WaterPumpCommand_<ContainerAllocator>;

  explicit WaterPumpCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pump = 0ll;
      this->command = "";
    }
  }

  explicit WaterPumpCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pump = 0ll;
      this->command = "";
    }
  }

  // field types and members
  using _pump_type =
    int64_t;
  _pump_type pump;
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__pump(
    const int64_t & _arg)
  {
    this->pump = _arg;
    return *this;
  }
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gwpspider_interfaces__msg__WaterPumpCommand
    std::shared_ptr<gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gwpspider_interfaces__msg__WaterPumpCommand
    std::shared_ptr<gwpspider_interfaces::msg::WaterPumpCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaterPumpCommand_ & other) const
  {
    if (this->pump != other.pump) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaterPumpCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaterPumpCommand_

// alias to use template instance with default allocator
using WaterPumpCommand =
  gwpspider_interfaces::msg::WaterPumpCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__WATER_PUMP_COMMAND__STRUCT_HPP_
