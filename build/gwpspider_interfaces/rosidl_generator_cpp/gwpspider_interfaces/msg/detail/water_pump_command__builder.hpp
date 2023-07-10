// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:msg/WaterPumpCommand.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__WATER_PUMP_COMMAND__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__WATER_PUMP_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/msg/detail/water_pump_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace msg
{

namespace builder
{

class Init_WaterPumpCommand_command
{
public:
  explicit Init_WaterPumpCommand_command(::gwpspider_interfaces::msg::WaterPumpCommand & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::msg::WaterPumpCommand command(::gwpspider_interfaces::msg::WaterPumpCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::msg::WaterPumpCommand msg_;
};

class Init_WaterPumpCommand_pump
{
public:
  Init_WaterPumpCommand_pump()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaterPumpCommand_command pump(::gwpspider_interfaces::msg::WaterPumpCommand::_pump_type arg)
  {
    msg_.pump = std::move(arg);
    return Init_WaterPumpCommand_command(msg_);
  }

private:
  ::gwpspider_interfaces::msg::WaterPumpCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::msg::WaterPumpCommand>()
{
  return gwpspider_interfaces::msg::builder::Init_WaterPumpCommand_pump();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__WATER_PUMP_COMMAND__BUILDER_HPP_
