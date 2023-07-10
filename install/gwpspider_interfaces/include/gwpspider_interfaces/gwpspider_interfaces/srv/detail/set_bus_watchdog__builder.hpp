// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/SetBusWatchdog.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__SET_BUS_WATCHDOG__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__SET_BUS_WATCHDOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/set_bus_watchdog__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBusWatchdog_Request_value
{
public:
  Init_SetBusWatchdog_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::SetBusWatchdog_Request value(::gwpspider_interfaces::srv::SetBusWatchdog_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::SetBusWatchdog_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::SetBusWatchdog_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_SetBusWatchdog_Request_value();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBusWatchdog_Response_success
{
public:
  Init_SetBusWatchdog_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::SetBusWatchdog_Response success(::gwpspider_interfaces::srv::SetBusWatchdog_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::SetBusWatchdog_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::SetBusWatchdog_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_SetBusWatchdog_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__SET_BUS_WATCHDOG__BUILDER_HPP_
