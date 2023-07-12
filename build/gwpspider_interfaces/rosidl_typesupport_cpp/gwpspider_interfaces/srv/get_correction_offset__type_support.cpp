// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from gwpspider_interfaces:srv/GetCorrectionOffset.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gwpspider_interfaces/srv/detail/get_correction_offset__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gwpspider_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCorrectionOffset_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCorrectionOffset_Request_type_support_ids_t;

static const _GetCorrectionOffset_Request_type_support_ids_t _GetCorrectionOffset_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCorrectionOffset_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCorrectionOffset_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCorrectionOffset_Request_type_support_symbol_names_t _GetCorrectionOffset_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gwpspider_interfaces, srv, GetCorrectionOffset_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gwpspider_interfaces, srv, GetCorrectionOffset_Request)),
  }
};

typedef struct _GetCorrectionOffset_Request_type_support_data_t
{
  void * data[2];
} _GetCorrectionOffset_Request_type_support_data_t;

static _GetCorrectionOffset_Request_type_support_data_t _GetCorrectionOffset_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCorrectionOffset_Request_message_typesupport_map = {
  2,
  "gwpspider_interfaces",
  &_GetCorrectionOffset_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetCorrectionOffset_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetCorrectionOffset_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCorrectionOffset_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCorrectionOffset_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gwpspider_interfaces::srv::GetCorrectionOffset_Request>()
{
  return &::gwpspider_interfaces::srv::rosidl_typesupport_cpp::GetCorrectionOffset_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gwpspider_interfaces, srv, GetCorrectionOffset_Request)() {
  return get_message_type_support_handle<gwpspider_interfaces::srv::GetCorrectionOffset_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gwpspider_interfaces/srv/detail/get_correction_offset__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gwpspider_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCorrectionOffset_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCorrectionOffset_Response_type_support_ids_t;

static const _GetCorrectionOffset_Response_type_support_ids_t _GetCorrectionOffset_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCorrectionOffset_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCorrectionOffset_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCorrectionOffset_Response_type_support_symbol_names_t _GetCorrectionOffset_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gwpspider_interfaces, srv, GetCorrectionOffset_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gwpspider_interfaces, srv, GetCorrectionOffset_Response)),
  }
};

typedef struct _GetCorrectionOffset_Response_type_support_data_t
{
  void * data[2];
} _GetCorrectionOffset_Response_type_support_data_t;

static _GetCorrectionOffset_Response_type_support_data_t _GetCorrectionOffset_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCorrectionOffset_Response_message_typesupport_map = {
  2,
  "gwpspider_interfaces",
  &_GetCorrectionOffset_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetCorrectionOffset_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetCorrectionOffset_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCorrectionOffset_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCorrectionOffset_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gwpspider_interfaces::srv::GetCorrectionOffset_Response>()
{
  return &::gwpspider_interfaces::srv::rosidl_typesupport_cpp::GetCorrectionOffset_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gwpspider_interfaces, srv, GetCorrectionOffset_Response)() {
  return get_message_type_support_handle<gwpspider_interfaces::srv::GetCorrectionOffset_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gwpspider_interfaces/srv/detail/get_correction_offset__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gwpspider_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCorrectionOffset_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCorrectionOffset_type_support_ids_t;

static const _GetCorrectionOffset_type_support_ids_t _GetCorrectionOffset_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCorrectionOffset_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCorrectionOffset_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCorrectionOffset_type_support_symbol_names_t _GetCorrectionOffset_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gwpspider_interfaces, srv, GetCorrectionOffset)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gwpspider_interfaces, srv, GetCorrectionOffset)),
  }
};

typedef struct _GetCorrectionOffset_type_support_data_t
{
  void * data[2];
} _GetCorrectionOffset_type_support_data_t;

static _GetCorrectionOffset_type_support_data_t _GetCorrectionOffset_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCorrectionOffset_service_typesupport_map = {
  2,
  "gwpspider_interfaces",
  &_GetCorrectionOffset_service_typesupport_ids.typesupport_identifier[0],
  &_GetCorrectionOffset_service_typesupport_symbol_names.symbol_name[0],
  &_GetCorrectionOffset_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetCorrectionOffset_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCorrectionOffset_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gwpspider_interfaces::srv::GetCorrectionOffset>()
{
  return &::gwpspider_interfaces::srv::rosidl_typesupport_cpp::GetCorrectionOffset_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
