// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:msg/GrippersStates.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/msg/detail/grippers_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace msg
{

namespace builder
{

class Init_GrippersStates_fifth_gripper
{
public:
  explicit Init_GrippersStates_fifth_gripper(::gwpspider_interfaces::msg::GrippersStates & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::msg::GrippersStates fifth_gripper(::gwpspider_interfaces::msg::GrippersStates::_fifth_gripper_type arg)
  {
    msg_.fifth_gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::msg::GrippersStates msg_;
};

class Init_GrippersStates_fourth_gripper
{
public:
  explicit Init_GrippersStates_fourth_gripper(::gwpspider_interfaces::msg::GrippersStates & msg)
  : msg_(msg)
  {}
  Init_GrippersStates_fifth_gripper fourth_gripper(::gwpspider_interfaces::msg::GrippersStates::_fourth_gripper_type arg)
  {
    msg_.fourth_gripper = std::move(arg);
    return Init_GrippersStates_fifth_gripper(msg_);
  }

private:
  ::gwpspider_interfaces::msg::GrippersStates msg_;
};

class Init_GrippersStates_third_gripper
{
public:
  explicit Init_GrippersStates_third_gripper(::gwpspider_interfaces::msg::GrippersStates & msg)
  : msg_(msg)
  {}
  Init_GrippersStates_fourth_gripper third_gripper(::gwpspider_interfaces::msg::GrippersStates::_third_gripper_type arg)
  {
    msg_.third_gripper = std::move(arg);
    return Init_GrippersStates_fourth_gripper(msg_);
  }

private:
  ::gwpspider_interfaces::msg::GrippersStates msg_;
};

class Init_GrippersStates_second_gripper
{
public:
  explicit Init_GrippersStates_second_gripper(::gwpspider_interfaces::msg::GrippersStates & msg)
  : msg_(msg)
  {}
  Init_GrippersStates_third_gripper second_gripper(::gwpspider_interfaces::msg::GrippersStates::_second_gripper_type arg)
  {
    msg_.second_gripper = std::move(arg);
    return Init_GrippersStates_third_gripper(msg_);
  }

private:
  ::gwpspider_interfaces::msg::GrippersStates msg_;
};

class Init_GrippersStates_first_gripper
{
public:
  Init_GrippersStates_first_gripper()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrippersStates_second_gripper first_gripper(::gwpspider_interfaces::msg::GrippersStates::_first_gripper_type arg)
  {
    msg_.first_gripper = std::move(arg);
    return Init_GrippersStates_second_gripper(msg_);
  }

private:
  ::gwpspider_interfaces::msg::GrippersStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::msg::GrippersStates>()
{
  return gwpspider_interfaces::msg::builder::Init_GrippersStates_first_gripper();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__BUILDER_HPP_
