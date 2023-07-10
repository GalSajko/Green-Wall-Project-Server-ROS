// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gwpspider_interfaces:msg/GrippersStates.idl
// generated code does not contain a copyright notice
#include "gwpspider_interfaces/msg/detail/grippers_states__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gwpspider_interfaces/msg/detail/grippers_states__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace gwpspider_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gwpspider_interfaces::msg::GripperState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gwpspider_interfaces::msg::GripperState &);
size_t get_serialized_size(
  const gwpspider_interfaces::msg::GripperState &,
  size_t current_alignment);
size_t
max_serialized_size_GripperState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gwpspider_interfaces::msg::GripperState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gwpspider_interfaces::msg::GripperState &);
size_t get_serialized_size(
  const gwpspider_interfaces::msg::GripperState &,
  size_t current_alignment);
size_t
max_serialized_size_GripperState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gwpspider_interfaces::msg::GripperState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gwpspider_interfaces::msg::GripperState &);
size_t get_serialized_size(
  const gwpspider_interfaces::msg::GripperState &,
  size_t current_alignment);
size_t
max_serialized_size_GripperState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gwpspider_interfaces::msg::GripperState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gwpspider_interfaces::msg::GripperState &);
size_t get_serialized_size(
  const gwpspider_interfaces::msg::GripperState &,
  size_t current_alignment);
size_t
max_serialized_size_GripperState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gwpspider_interfaces

namespace gwpspider_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gwpspider_interfaces::msg::GripperState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gwpspider_interfaces::msg::GripperState &);
size_t get_serialized_size(
  const gwpspider_interfaces::msg::GripperState &,
  size_t current_alignment);
size_t
max_serialized_size_GripperState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gwpspider_interfaces
cdr_serialize(
  const gwpspider_interfaces::msg::GrippersStates & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: first_gripper
  gwpspider_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.first_gripper,
    cdr);
  // Member: second_gripper
  gwpspider_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.second_gripper,
    cdr);
  // Member: third_gripper
  gwpspider_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.third_gripper,
    cdr);
  // Member: fourth_gripper
  gwpspider_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fourth_gripper,
    cdr);
  // Member: fifth_gripper
  gwpspider_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fifth_gripper,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gwpspider_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gwpspider_interfaces::msg::GrippersStates & ros_message)
{
  // Member: first_gripper
  gwpspider_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.first_gripper);

  // Member: second_gripper
  gwpspider_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.second_gripper);

  // Member: third_gripper
  gwpspider_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.third_gripper);

  // Member: fourth_gripper
  gwpspider_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fourth_gripper);

  // Member: fifth_gripper
  gwpspider_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fifth_gripper);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gwpspider_interfaces
get_serialized_size(
  const gwpspider_interfaces::msg::GrippersStates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: first_gripper

  current_alignment +=
    gwpspider_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.first_gripper, current_alignment);
  // Member: second_gripper

  current_alignment +=
    gwpspider_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.second_gripper, current_alignment);
  // Member: third_gripper

  current_alignment +=
    gwpspider_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.third_gripper, current_alignment);
  // Member: fourth_gripper

  current_alignment +=
    gwpspider_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fourth_gripper, current_alignment);
  // Member: fifth_gripper

  current_alignment +=
    gwpspider_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fifth_gripper, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gwpspider_interfaces
max_serialized_size_GrippersStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: first_gripper
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        gwpspider_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: second_gripper
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        gwpspider_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: third_gripper
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        gwpspider_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: fourth_gripper
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        gwpspider_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: fifth_gripper
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        gwpspider_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GrippersStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gwpspider_interfaces::msg::GrippersStates *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GrippersStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gwpspider_interfaces::msg::GrippersStates *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GrippersStates__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gwpspider_interfaces::msg::GrippersStates *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GrippersStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GrippersStates(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GrippersStates__callbacks = {
  "gwpspider_interfaces::msg",
  "GrippersStates",
  _GrippersStates__cdr_serialize,
  _GrippersStates__cdr_deserialize,
  _GrippersStates__get_serialized_size,
  _GrippersStates__max_serialized_size
};

static rosidl_message_type_support_t _GrippersStates__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GrippersStates__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gwpspider_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gwpspider_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<gwpspider_interfaces::msg::GrippersStates>()
{
  return &gwpspider_interfaces::msg::typesupport_fastrtps_cpp::_GrippersStates__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gwpspider_interfaces, msg, GrippersStates)() {
  return &gwpspider_interfaces::msg::typesupport_fastrtps_cpp::_GrippersStates__handle;
}

#ifdef __cplusplus
}
#endif
