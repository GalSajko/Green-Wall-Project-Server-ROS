// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:msg/WalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/msg/detail/walking_instructions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace msg
{

namespace builder
{

class Init_WalkingInstructions_pins_instructions
{
public:
  explicit Init_WalkingInstructions_pins_instructions(::gwpspider_interfaces::msg::WalkingInstructions & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::msg::WalkingInstructions pins_instructions(::gwpspider_interfaces::msg::WalkingInstructions::_pins_instructions_type arg)
  {
    msg_.pins_instructions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::msg::WalkingInstructions msg_;
};

class Init_WalkingInstructions_poses
{
public:
  Init_WalkingInstructions_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WalkingInstructions_pins_instructions poses(::gwpspider_interfaces::msg::WalkingInstructions::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_WalkingInstructions_pins_instructions(msg_);
  }

private:
  ::gwpspider_interfaces::msg::WalkingInstructions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::msg::WalkingInstructions>()
{
  return gwpspider_interfaces::msg::builder::Init_WalkingInstructions_poses();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__BUILDER_HPP_
