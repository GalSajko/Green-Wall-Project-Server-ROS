// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:msg/BnoData.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/msg/detail/bno_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace msg
{

namespace builder
{

class Init_BnoData_gravity_vector
{
public:
  explicit Init_BnoData_gravity_vector(::gwpspider_interfaces::msg::BnoData & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::msg::BnoData gravity_vector(::gwpspider_interfaces::msg::BnoData::_gravity_vector_type arg)
  {
    msg_.gravity_vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::msg::BnoData msg_;
};

class Init_BnoData_rpy
{
public:
  Init_BnoData_rpy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BnoData_gravity_vector rpy(::gwpspider_interfaces::msg::BnoData::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return Init_BnoData_gravity_vector(msg_);
  }

private:
  ::gwpspider_interfaces::msg::BnoData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::msg::BnoData>()
{
  return gwpspider_interfaces::msg::builder::Init_BnoData_rpy();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__BUILDER_HPP_
