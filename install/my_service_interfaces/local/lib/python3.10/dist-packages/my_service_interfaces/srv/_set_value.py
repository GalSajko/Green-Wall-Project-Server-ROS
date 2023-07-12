# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_service_interfaces:srv/SetValue.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetValue_Request(type):
    """Metaclass of message 'SetValue_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_service_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_service_interfaces.srv.SetValue_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_value__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_value__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_value__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_value__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_value__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetValue_Request(metaclass=Metaclass_SetValue_Request):
    """Message class 'SetValue_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_SetValue_Response(type):
    """Metaclass of message 'SetValue_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_service_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_service_interfaces.srv.SetValue_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_value__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_value__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_value__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_value__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_value__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetValue_Response(metaclass=Metaclass_SetValue_Response):
    """Message class 'SetValue_Response'."""

    __slots__ = [
        '_data',
        '_go_refill',
        '_volume',
    ]

    _fields_and_field_types = {
        'data': 'sequence<float>',
        'go_refill': 'boolean',
        'volume': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data = array.array('f', kwargs.get('data', []))
        self.go_refill = kwargs.get('go_refill', bool())
        self.volume = kwargs.get('volume', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.data != other.data:
            return False
        if self.go_refill != other.go_refill:
            return False
        if self.volume != other.volume:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'data' array.array() must have the type code of 'f'"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._data = array.array('f', value)

    @builtins.property
    def go_refill(self):
        """Message field 'go_refill'."""
        return self._go_refill

    @go_refill.setter
    def go_refill(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'go_refill' field must be of type 'bool'"
        self._go_refill = value

    @builtins.property
    def volume(self):
        """Message field 'volume'."""
        return self._volume

    @volume.setter
    def volume(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'volume' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'volume' field must be an integer in [-2147483648, 2147483647]"
        self._volume = value


class Metaclass_SetValue(type):
    """Metaclass of service 'SetValue'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_service_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_service_interfaces.srv.SetValue')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_value

            from my_service_interfaces.srv import _set_value
            if _set_value.Metaclass_SetValue_Request._TYPE_SUPPORT is None:
                _set_value.Metaclass_SetValue_Request.__import_type_support__()
            if _set_value.Metaclass_SetValue_Response._TYPE_SUPPORT is None:
                _set_value.Metaclass_SetValue_Response.__import_type_support__()


class SetValue(metaclass=Metaclass_SetValue):
    from my_service_interfaces.srv._set_value import SetValue_Request as Request
    from my_service_interfaces.srv._set_value import SetValue_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
