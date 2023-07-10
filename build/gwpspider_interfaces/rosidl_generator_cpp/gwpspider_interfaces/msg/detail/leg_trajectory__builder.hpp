// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:msg/LegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/msg/detail/leg_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace msg
{

namespace builder
{

class Init_LegTrajectory_acceleration_trajectory
{
public:
  explicit Init_LegTrajectory_acceleration_trajectory(::gwpspider_interfaces::msg::LegTrajectory & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::msg::LegTrajectory acceleration_trajectory(::gwpspider_interfaces::msg::LegTrajectory::_acceleration_trajectory_type arg)
  {
    msg_.acceleration_trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::msg::LegTrajectory msg_;
};

class Init_LegTrajectory_velocity_trajectory
{
public:
  explicit Init_LegTrajectory_velocity_trajectory(::gwpspider_interfaces::msg::LegTrajectory & msg)
  : msg_(msg)
  {}
  Init_LegTrajectory_acceleration_trajectory velocity_trajectory(::gwpspider_interfaces::msg::LegTrajectory::_velocity_trajectory_type arg)
  {
    msg_.velocity_trajectory = std::move(arg);
    return Init_LegTrajectory_acceleration_trajectory(msg_);
  }

private:
  ::gwpspider_interfaces::msg::LegTrajectory msg_;
};

class Init_LegTrajectory_position_trajectory
{
public:
  Init_LegTrajectory_position_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegTrajectory_velocity_trajectory position_trajectory(::gwpspider_interfaces::msg::LegTrajectory::_position_trajectory_type arg)
  {
    msg_.position_trajectory = std::move(arg);
    return Init_LegTrajectory_velocity_trajectory(msg_);
  }

private:
  ::gwpspider_interfaces::msg::LegTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::msg::LegTrajectory>()
{
  return gwpspider_interfaces::msg::builder::Init_LegTrajectory_position_trajectory();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__BUILDER_HPP_
