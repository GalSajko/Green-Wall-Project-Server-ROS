// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/msg/detail/gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace msg
{

namespace builder
{

class Init_GripperState_is_attached
{
public:
  explicit Init_GripperState_is_attached(::gwpspider_interfaces::msg::GripperState & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::msg::GripperState is_attached(::gwpspider_interfaces::msg::GripperState::_is_attached_type arg)
  {
    msg_.is_attached = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::msg::GripperState msg_;
};

class Init_GripperState_fingers_state
{
public:
  explicit Init_GripperState_fingers_state(::gwpspider_interfaces::msg::GripperState & msg)
  : msg_(msg)
  {}
  Init_GripperState_is_attached fingers_state(::gwpspider_interfaces::msg::GripperState::_fingers_state_type arg)
  {
    msg_.fingers_state = std::move(arg);
    return Init_GripperState_is_attached(msg_);
  }

private:
  ::gwpspider_interfaces::msg::GripperState msg_;
};

class Init_GripperState_switch_state
{
public:
  Init_GripperState_switch_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperState_fingers_state switch_state(::gwpspider_interfaces::msg::GripperState::_switch_state_type arg)
  {
    msg_.switch_state = std::move(arg);
    return Init_GripperState_fingers_state(msg_);
  }

private:
  ::gwpspider_interfaces::msg::GripperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::msg::GripperState>()
{
  return gwpspider_interfaces::msg::builder::Init_GripperState_switch_state();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
