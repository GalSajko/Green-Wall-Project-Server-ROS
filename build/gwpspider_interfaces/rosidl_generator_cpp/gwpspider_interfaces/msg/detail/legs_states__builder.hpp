// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:msg/LegsStates.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/msg/detail/legs_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace msg
{

namespace builder
{

class Init_LegsStates_torques
{
public:
  explicit Init_LegsStates_torques(::gwpspider_interfaces::msg::LegsStates & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::msg::LegsStates torques(::gwpspider_interfaces::msg::LegsStates::_torques_type arg)
  {
    msg_.torques = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::msg::LegsStates msg_;
};

class Init_LegsStates_forces
{
public:
  explicit Init_LegsStates_forces(::gwpspider_interfaces::msg::LegsStates & msg)
  : msg_(msg)
  {}
  Init_LegsStates_torques forces(::gwpspider_interfaces::msg::LegsStates::_forces_type arg)
  {
    msg_.forces = std::move(arg);
    return Init_LegsStates_torques(msg_);
  }

private:
  ::gwpspider_interfaces::msg::LegsStates msg_;
};

class Init_LegsStates_legs_local_positions
{
public:
  explicit Init_LegsStates_legs_local_positions(::gwpspider_interfaces::msg::LegsStates & msg)
  : msg_(msg)
  {}
  Init_LegsStates_forces legs_local_positions(::gwpspider_interfaces::msg::LegsStates::_legs_local_positions_type arg)
  {
    msg_.legs_local_positions = std::move(arg);
    return Init_LegsStates_forces(msg_);
  }

private:
  ::gwpspider_interfaces::msg::LegsStates msg_;
};

class Init_LegsStates_joints_positions
{
public:
  Init_LegsStates_joints_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegsStates_legs_local_positions joints_positions(::gwpspider_interfaces::msg::LegsStates::_joints_positions_type arg)
  {
    msg_.joints_positions = std::move(arg);
    return Init_LegsStates_legs_local_positions(msg_);
  }

private:
  ::gwpspider_interfaces::msg::LegsStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::msg::LegsStates>()
{
  return gwpspider_interfaces::msg::builder::Init_LegsStates_joints_positions();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__BUILDER_HPP_
