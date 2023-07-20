// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/ControlWaterPump.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__CONTROL_WATER_PUMP__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__CONTROL_WATER_PUMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/control_water_pump__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlWaterPump_Request_volume
{
public:
  explicit Init_ControlWaterPump_Request_volume(::gwpspider_interfaces::srv::ControlWaterPump_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::ControlWaterPump_Request volume(::gwpspider_interfaces::srv::ControlWaterPump_Request::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ControlWaterPump_Request msg_;
};

class Init_ControlWaterPump_Request_pump
{
public:
  Init_ControlWaterPump_Request_pump()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlWaterPump_Request_volume pump(::gwpspider_interfaces::srv::ControlWaterPump_Request::_pump_type arg)
  {
    msg_.pump = std::move(arg);
    return Init_ControlWaterPump_Request_volume(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ControlWaterPump_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ControlWaterPump_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_ControlWaterPump_Request_pump();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlWaterPump_Response_success
{
public:
  Init_ControlWaterPump_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::ControlWaterPump_Response success(::gwpspider_interfaces::srv::ControlWaterPump_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ControlWaterPump_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ControlWaterPump_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_ControlWaterPump_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__CONTROL_WATER_PUMP__BUILDER_HPP_
