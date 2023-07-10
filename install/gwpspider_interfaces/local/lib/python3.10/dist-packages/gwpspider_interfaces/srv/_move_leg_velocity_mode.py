# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:srv/MoveLegVelocityMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveLegVelocityMode_Request(type):
    """Metaclass of message 'MoveLegVelocityMode_Request'."""

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
                'gwpspider_interfaces.srv.MoveLegVelocityMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_leg_velocity_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_leg_velocity_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_leg_velocity_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_leg_velocity_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_leg_velocity_mode__request

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


class MoveLegVelocityMode_Request(metaclass=Metaclass_MoveLegVelocityMode_Request):
    """Message class 'MoveLegVelocityMode_Request'."""

    __slots__ = [
        '_leg_id',
        '_velocity_mode_direction',
    ]

    _fields_and_field_types = {
        'leg_id': 'int8',
        'velocity_mode_direction': 'std_msgs/Float32MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.leg_id = kwargs.get('leg_id', int())
        from std_msgs.msg import Float32MultiArray
        self.velocity_mode_direction = kwargs.get('velocity_mode_direction', Float32MultiArray())

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
        if self.leg_id != other.leg_id:
            return False
        if self.velocity_mode_direction != other.velocity_mode_direction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def leg_id(self):
        """Message field 'leg_id'."""
        return self._leg_id

    @leg_id.setter
    def leg_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'leg_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'leg_id' field must be an integer in [-128, 127]"
        self._leg_id = value

    @builtins.property
    def velocity_mode_direction(self):
        """Message field 'velocity_mode_direction'."""
        return self._velocity_mode_direction

    @velocity_mode_direction.setter
    def velocity_mode_direction(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'velocity_mode_direction' field must be a sub message of type 'Float32MultiArray'"
        self._velocity_mode_direction = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveLegVelocityMode_Response(type):
    """Metaclass of message 'MoveLegVelocityMode_Response'."""

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
                'gwpspider_interfaces.srv.MoveLegVelocityMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_leg_velocity_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_leg_velocity_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_leg_velocity_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_leg_velocity_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_leg_velocity_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveLegVelocityMode_Response(metaclass=Metaclass_MoveLegVelocityMode_Response):
    """Message class 'MoveLegVelocityMode_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_MoveLegVelocityMode(type):
    """Metaclass of service 'MoveLegVelocityMode'."""

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
                'gwpspider_interfaces.srv.MoveLegVelocityMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move_leg_velocity_mode

            from gwpspider_interfaces.srv import _move_leg_velocity_mode
            if _move_leg_velocity_mode.Metaclass_MoveLegVelocityMode_Request._TYPE_SUPPORT is None:
                _move_leg_velocity_mode.Metaclass_MoveLegVelocityMode_Request.__import_type_support__()
            if _move_leg_velocity_mode.Metaclass_MoveLegVelocityMode_Response._TYPE_SUPPORT is None:
                _move_leg_velocity_mode.Metaclass_MoveLegVelocityMode_Response.__import_type_support__()


class MoveLegVelocityMode(metaclass=Metaclass_MoveLegVelocityMode):
    from gwpspider_interfaces.srv._move_leg_velocity_mode import MoveLegVelocityMode_Request as Request
    from gwpspider_interfaces.srv._move_leg_velocity_mode import MoveLegVelocityMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
