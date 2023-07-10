# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:msg/LegTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LegTrajectory(type):
    """Metaclass of message 'LegTrajectory'."""

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
                'gwpspider_interfaces.msg.LegTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__leg_trajectory
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__leg_trajectory
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__leg_trajectory
            cls._TYPE_SUPPORT = module.type_support_msg__msg__leg_trajectory
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__leg_trajectory

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


class LegTrajectory(metaclass=Metaclass_LegTrajectory):
    """Message class 'LegTrajectory'."""

    __slots__ = [
        '_position_trajectory',
        '_velocity_trajectory',
        '_acceleration_trajectory',
    ]

    _fields_and_field_types = {
        'position_trajectory': 'std_msgs/Float32MultiArray',
        'velocity_trajectory': 'std_msgs/Float32MultiArray',
        'acceleration_trajectory': 'std_msgs/Float32MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float32MultiArray
        self.position_trajectory = kwargs.get('position_trajectory', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.velocity_trajectory = kwargs.get('velocity_trajectory', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.acceleration_trajectory = kwargs.get('acceleration_trajectory', Float32MultiArray())

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
        if self.position_trajectory != other.position_trajectory:
            return False
        if self.velocity_trajectory != other.velocity_trajectory:
            return False
        if self.acceleration_trajectory != other.acceleration_trajectory:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position_trajectory(self):
        """Message field 'position_trajectory'."""
        return self._position_trajectory

    @position_trajectory.setter
    def position_trajectory(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'position_trajectory' field must be a sub message of type 'Float32MultiArray'"
        self._position_trajectory = value

    @builtins.property
    def velocity_trajectory(self):
        """Message field 'velocity_trajectory'."""
        return self._velocity_trajectory

    @velocity_trajectory.setter
    def velocity_trajectory(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'velocity_trajectory' field must be a sub message of type 'Float32MultiArray'"
        self._velocity_trajectory = value

    @builtins.property
    def acceleration_trajectory(self):
        """Message field 'acceleration_trajectory'."""
        return self._acceleration_trajectory

    @acceleration_trajectory.setter
    def acceleration_trajectory(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'acceleration_trajectory' field must be a sub message of type 'Float32MultiArray'"
        self._acceleration_trajectory = value
