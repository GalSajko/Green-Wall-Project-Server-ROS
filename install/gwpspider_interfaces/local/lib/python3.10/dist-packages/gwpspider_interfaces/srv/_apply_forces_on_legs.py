# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:srv/ApplyForcesOnLegs.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApplyForcesOnLegs_Request(type):
    """Metaclass of message 'ApplyForcesOnLegs_Request'."""

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
                'gwpspider_interfaces.srv.ApplyForcesOnLegs_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_forces_on_legs__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_forces_on_legs__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_forces_on_legs__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_forces_on_legs__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_forces_on_legs__request

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


class ApplyForcesOnLegs_Request(metaclass=Metaclass_ApplyForcesOnLegs_Request):
    """Message class 'ApplyForcesOnLegs_Request'."""

    __slots__ = [
        '_legs_ids',
        '_desired_forces',
    ]

    _fields_and_field_types = {
        'legs_ids': 'std_msgs/Int8MultiArray',
        'desired_forces': 'std_msgs/Float32MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Int8MultiArray
        self.legs_ids = kwargs.get('legs_ids', Int8MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.desired_forces = kwargs.get('desired_forces', Float32MultiArray())

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
        if self.legs_ids != other.legs_ids:
            return False
        if self.desired_forces != other.desired_forces:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def legs_ids(self):
        """Message field 'legs_ids'."""
        return self._legs_ids

    @legs_ids.setter
    def legs_ids(self, value):
        if __debug__:
            from std_msgs.msg import Int8MultiArray
            assert \
                isinstance(value, Int8MultiArray), \
                "The 'legs_ids' field must be a sub message of type 'Int8MultiArray'"
        self._legs_ids = value

    @builtins.property
    def desired_forces(self):
        """Message field 'desired_forces'."""
        return self._desired_forces

    @desired_forces.setter
    def desired_forces(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'desired_forces' field must be a sub message of type 'Float32MultiArray'"
        self._desired_forces = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ApplyForcesOnLegs_Response(type):
    """Metaclass of message 'ApplyForcesOnLegs_Response'."""

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
                'gwpspider_interfaces.srv.ApplyForcesOnLegs_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_forces_on_legs__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_forces_on_legs__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_forces_on_legs__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_forces_on_legs__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_forces_on_legs__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyForcesOnLegs_Response(metaclass=Metaclass_ApplyForcesOnLegs_Response):
    """Message class 'ApplyForcesOnLegs_Response'."""

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


class Metaclass_ApplyForcesOnLegs(type):
    """Metaclass of service 'ApplyForcesOnLegs'."""

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
                'gwpspider_interfaces.srv.ApplyForcesOnLegs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__apply_forces_on_legs

            from gwpspider_interfaces.srv import _apply_forces_on_legs
            if _apply_forces_on_legs.Metaclass_ApplyForcesOnLegs_Request._TYPE_SUPPORT is None:
                _apply_forces_on_legs.Metaclass_ApplyForcesOnLegs_Request.__import_type_support__()
            if _apply_forces_on_legs.Metaclass_ApplyForcesOnLegs_Response._TYPE_SUPPORT is None:
                _apply_forces_on_legs.Metaclass_ApplyForcesOnLegs_Response.__import_type_support__()


class ApplyForcesOnLegs(metaclass=Metaclass_ApplyForcesOnLegs):
    from gwpspider_interfaces.srv._apply_forces_on_legs import ApplyForcesOnLegs_Request as Request
    from gwpspider_interfaces.srv._apply_forces_on_legs import ApplyForcesOnLegs_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
