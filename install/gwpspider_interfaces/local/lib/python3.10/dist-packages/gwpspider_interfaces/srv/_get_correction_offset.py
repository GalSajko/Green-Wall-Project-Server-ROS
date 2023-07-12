# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:srv/GetCorrectionOffset.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetCorrectionOffset_Request(type):
    """Metaclass of message 'GetCorrectionOffset_Request'."""

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
            module = import_type_support('gwpspider_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gwpspider_interfaces.srv.GetCorrectionOffset_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_correction_offset__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_correction_offset__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_correction_offset__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_correction_offset__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_correction_offset__request

            from std_msgs.msg import Float32MultiArray
            if Float32MultiArray.__class__._TYPE_SUPPORT is None:
                Float32MultiArray.__class__.__import_type_support__()

            from std_msgs.msg import Int8MultiArray
            if Int8MultiArray.__class__._TYPE_SUPPORT is None:
                Int8MultiArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCorrectionOffset_Request(metaclass=Metaclass_GetCorrectionOffset_Request):
    """Message class 'GetCorrectionOffset_Request'."""

    __slots__ = [
        '_legs_positions',
        '_rpy',
        '_commanded_position',
        '_one_hot_legs',
    ]

    _fields_and_field_types = {
        'legs_positions': 'std_msgs/Float32MultiArray',
        'rpy': 'std_msgs/Float32MultiArray',
        'commanded_position': 'std_msgs/Float32MultiArray',
        'one_hot_legs': 'std_msgs/Int8MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float32MultiArray
        self.legs_positions = kwargs.get('legs_positions', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.rpy = kwargs.get('rpy', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.commanded_position = kwargs.get('commanded_position', Float32MultiArray())
        from std_msgs.msg import Int8MultiArray
        self.one_hot_legs = kwargs.get('one_hot_legs', Int8MultiArray())

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
        if self.legs_positions != other.legs_positions:
            return False
        if self.rpy != other.rpy:
            return False
        if self.commanded_position != other.commanded_position:
            return False
        if self.one_hot_legs != other.one_hot_legs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def legs_positions(self):
        """Message field 'legs_positions'."""
        return self._legs_positions

    @legs_positions.setter
    def legs_positions(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'legs_positions' field must be a sub message of type 'Float32MultiArray'"
        self._legs_positions = value

    @builtins.property
    def rpy(self):
        """Message field 'rpy'."""
        return self._rpy

    @rpy.setter
    def rpy(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'rpy' field must be a sub message of type 'Float32MultiArray'"
        self._rpy = value

    @builtins.property
    def commanded_position(self):
        """Message field 'commanded_position'."""
        return self._commanded_position

    @commanded_position.setter
    def commanded_position(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'commanded_position' field must be a sub message of type 'Float32MultiArray'"
        self._commanded_position = value

    @builtins.property
    def one_hot_legs(self):
        """Message field 'one_hot_legs'."""
        return self._one_hot_legs

    @one_hot_legs.setter
    def one_hot_legs(self, value):
        if __debug__:
            from std_msgs.msg import Int8MultiArray
            assert \
                isinstance(value, Int8MultiArray), \
                "The 'one_hot_legs' field must be a sub message of type 'Int8MultiArray'"
        self._one_hot_legs = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetCorrectionOffset_Response(type):
    """Metaclass of message 'GetCorrectionOffset_Response'."""

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
            module = import_type_support('gwpspider_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gwpspider_interfaces.srv.GetCorrectionOffset_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_correction_offset__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_correction_offset__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_correction_offset__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_correction_offset__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_correction_offset__response

            from std_msgs.msg import Float32MultiArray
            if Float32MultiArray.__class__._TYPE_SUPPORT is None:
                Float32MultiArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCorrectionOffset_Response(metaclass=Metaclass_GetCorrectionOffset_Response):
    """Message class 'GetCorrectionOffset_Response'."""

    __slots__ = [
        '_correction_offset',
    ]

    _fields_and_field_types = {
        'correction_offset': 'std_msgs/Float32MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float32MultiArray
        self.correction_offset = kwargs.get('correction_offset', Float32MultiArray())

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
        if self.correction_offset != other.correction_offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def correction_offset(self):
        """Message field 'correction_offset'."""
        return self._correction_offset

    @correction_offset.setter
    def correction_offset(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'correction_offset' field must be a sub message of type 'Float32MultiArray'"
        self._correction_offset = value


class Metaclass_GetCorrectionOffset(type):
    """Metaclass of service 'GetCorrectionOffset'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gwpspider_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gwpspider_interfaces.srv.GetCorrectionOffset')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_correction_offset

            from gwpspider_interfaces.srv import _get_correction_offset
            if _get_correction_offset.Metaclass_GetCorrectionOffset_Request._TYPE_SUPPORT is None:
                _get_correction_offset.Metaclass_GetCorrectionOffset_Request.__import_type_support__()
            if _get_correction_offset.Metaclass_GetCorrectionOffset_Response._TYPE_SUPPORT is None:
                _get_correction_offset.Metaclass_GetCorrectionOffset_Response.__import_type_support__()


class GetCorrectionOffset(metaclass=Metaclass_GetCorrectionOffset):
    from gwpspider_interfaces.srv._get_correction_offset import GetCorrectionOffset_Request as Request
    from gwpspider_interfaces.srv._get_correction_offset import GetCorrectionOffset_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
