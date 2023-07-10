// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:msg/DynamixelMotorsData.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/msg/detail/dynamixel_motors_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace msg
{

namespace builder
{

class Init_DynamixelMotorsData_temperatures
{
public:
  explicit Init_DynamixelMotorsData_temperatures(::gwpspider_interfaces::msg::DynamixelMotorsData & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::msg::DynamixelMotorsData temperatures(::gwpspider_interfaces::msg::DynamixelMotorsData::_temperatures_type arg)
  {
    msg_.temperatures = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::msg::DynamixelMotorsData msg_;
};

class Init_DynamixelMotorsData_motor_errors
{
public:
  explicit Init_DynamixelMotorsData_motor_errors(::gwpspider_interfaces::msg::DynamixelMotorsData & msg)
  : msg_(msg)
  {}
  Init_DynamixelMotorsData_temperatures motor_errors(::gwpspider_interfaces::msg::DynamixelMotorsData::_motor_errors_type arg)
  {
    msg_.motor_errors = std::move(arg);
    return Init_DynamixelMotorsData_temperatures(msg_);
  }

private:
  ::gwpspider_interfaces::msg::DynamixelMotorsData msg_;
};

class Init_DynamixelMotorsData_currents
{
public:
  explicit Init_DynamixelMotorsData_currents(::gwpspider_interfaces::msg::DynamixelMotorsData & msg)
  : msg_(msg)
  {}
  Init_DynamixelMotorsData_motor_errors currents(::gwpspider_interfaces::msg::DynamixelMotorsData::_currents_type arg)
  {
    msg_.currents = std::move(arg);
    return Init_DynamixelMotorsData_motor_errors(msg_);
  }

private:
  ::gwpspider_interfaces::msg::DynamixelMotorsData msg_;
};

class Init_DynamixelMotorsData_positions
{
public:
  Init_DynamixelMotorsData_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamixelMotorsData_currents positions(::gwpspider_interfaces::msg::DynamixelMotorsData::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_DynamixelMotorsData_currents(msg_);
  }

private:
  ::gwpspider_interfaces::msg::DynamixelMotorsData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::msg::DynamixelMotorsData>()
{
  return gwpspider_interfaces::msg::builder::Init_DynamixelMotorsData_positions();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__BUILDER_HPP_
