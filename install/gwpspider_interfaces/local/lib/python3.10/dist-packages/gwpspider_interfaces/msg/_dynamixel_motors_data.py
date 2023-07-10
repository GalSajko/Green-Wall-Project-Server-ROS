# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:msg/DynamixelMotorsData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DynamixelMotorsData(type):
    """Metaclass of message 'DynamixelMotorsData'."""

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
                'gwpspider_interfaces.msg.DynamixelMotorsData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dynamixel_motors_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dynamixel_motors_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dynamixel_motors_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dynamixel_motors_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dynamixel_motors_data

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


class DynamixelMotorsData(metaclass=Metaclass_DynamixelMotorsData):
    """Message class 'DynamixelMotorsData'."""

    __slots__ = [
        '_positions',
        '_currents',
        '_motor_errors',
        '_temperatures',
    ]

    _fields_and_field_types = {
        'positions': 'std_msgs/Float32MultiArray',
        'currents': 'std_msgs/Float32MultiArray',
        'motor_errors': 'std_msgs/Float32MultiArray',
        'temperatures': 'std_msgs/Float32MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float32MultiArray
        self.positions = kwargs.get('positions', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.currents = kwargs.get('currents', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.motor_errors = kwargs.get('motor_errors', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.temperatures = kwargs.get('temperatures', Float32MultiArray())

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
        if self.positions != other.positions:
            return False
        if self.currents != other.currents:
            return False
        if self.motor_errors != other.motor_errors:
            return False
        if self.temperatures != other.temperatures:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def positions(self):
        """Message field 'positions'."""
        return self._positions

    @positions.setter
    def positions(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'positions' field must be a sub message of type 'Float32MultiArray'"
        self._positions = value

    @builtins.property
    def currents(self):
        """Message field 'currents'."""
        return self._currents

    @currents.setter
    def currents(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'currents' field must be a sub message of type 'Float32MultiArray'"
        self._currents = value

    @builtins.property
    def motor_errors(self):
        """Message field 'motor_errors'."""
        return self._motor_errors

    @motor_errors.setter
    def motor_errors(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'motor_errors' field must be a sub message of type 'Float32MultiArray'"
        self._motor_errors = value

    @builtins.property
    def temperatures(self):
        """Message field 'temperatures'."""
        return self._temperatures

    @temperatures.setter
    def temperatures(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'temperatures' field must be a sub message of type 'Float32MultiArray'"
        self._temperatures = value
