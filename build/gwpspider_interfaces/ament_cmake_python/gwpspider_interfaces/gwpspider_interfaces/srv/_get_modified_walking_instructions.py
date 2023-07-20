# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:srv/GetModifiedWalkingInstructions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetModifiedWalkingInstructions_Request(type):
    """Metaclass of message 'GetModifiedWalkingInstructions_Request'."""

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
                'gwpspider_interfaces.srv.GetModifiedWalkingInstructions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_modified_walking_instructions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_modified_walking_instructions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_modified_walking_instructions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_modified_walking_instructions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_modified_walking_instructions__request

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


class GetModifiedWalkingInstructions_Request(metaclass=Metaclass_GetModifiedWalkingInstructions_Request):
    """Message class 'GetModifiedWalkingInstructions_Request'."""

    __slots__ = [
        '_start_legs_positions',
        '_goal_pose',
    ]

    _fields_and_field_types = {
        'start_legs_positions': 'std_msgs/Float32MultiArray',
        'goal_pose': 'std_msgs/Float32MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float32MultiArray
        self.start_legs_positions = kwargs.get('start_legs_positions', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.goal_pose = kwargs.get('goal_pose', Float32MultiArray())

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
        if self.start_legs_positions != other.start_legs_positions:
            return False
        if self.goal_pose != other.goal_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_legs_positions(self):
        """Message field 'start_legs_positions'."""
        return self._start_legs_positions

    @start_legs_positions.setter
    def start_legs_positions(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'start_legs_positions' field must be a sub message of type 'Float32MultiArray'"
        self._start_legs_positions = value

    @builtins.property
    def goal_pose(self):
        """Message field 'goal_pose'."""
        return self._goal_pose

    @goal_pose.setter
    def goal_pose(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'goal_pose' field must be a sub message of type 'Float32MultiArray'"
        self._goal_pose = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetModifiedWalkingInstructions_Response(type):
    """Metaclass of message 'GetModifiedWalkingInstructions_Response'."""

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
                'gwpspider_interfaces.srv.GetModifiedWalkingInstructions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_modified_walking_instructions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_modified_walking_instructions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_modified_walking_instructions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_modified_walking_instructions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_modified_walking_instructions__response

            from gwpspider_interfaces.msg import WalkingInstructions
            if WalkingInstructions.__class__._TYPE_SUPPORT is None:
                WalkingInstructions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetModifiedWalkingInstructions_Response(metaclass=Metaclass_GetModifiedWalkingInstructions_Response):
    """Message class 'GetModifiedWalkingInstructions_Response'."""

    __slots__ = [
        '_walking_instructions',
    ]

    _fields_and_field_types = {
        'walking_instructions': 'gwpspider_interfaces/WalkingInstructions',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['gwpspider_interfaces', 'msg'], 'WalkingInstructions'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from gwpspider_interfaces.msg import WalkingInstructions
        self.walking_instructions = kwargs.get('walking_instructions', WalkingInstructions())

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
        if self.walking_instructions != other.walking_instructions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def walking_instructions(self):
        """Message field 'walking_instructions'."""
        return self._walking_instructions

    @walking_instructions.setter
    def walking_instructions(self, value):
        if __debug__:
            from gwpspider_interfaces.msg import WalkingInstructions
            assert \
                isinstance(value, WalkingInstructions), \
                "The 'walking_instructions' field must be a sub message of type 'WalkingInstructions'"
        self._walking_instructions = value


class Metaclass_GetModifiedWalkingInstructions(type):
    """Metaclass of service 'GetModifiedWalkingInstructions'."""

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
                'gwpspider_interfaces.srv.GetModifiedWalkingInstructions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_modified_walking_instructions

            from gwpspider_interfaces.srv import _get_modified_walking_instructions
            if _get_modified_walking_instructions.Metaclass_GetModifiedWalkingInstructions_Request._TYPE_SUPPORT is None:
                _get_modified_walking_instructions.Metaclass_GetModifiedWalkingInstructions_Request.__import_type_support__()
            if _get_modified_walking_instructions.Metaclass_GetModifiedWalkingInstructions_Response._TYPE_SUPPORT is None:
                _get_modified_walking_instructions.Metaclass_GetModifiedWalkingInstructions_Response.__import_type_support__()


class GetModifiedWalkingInstructions(metaclass=Metaclass_GetModifiedWalkingInstructions):
    from gwpspider_interfaces.srv._get_modified_walking_instructions import GetModifiedWalkingInstructions_Request as Request
    from gwpspider_interfaces.srv._get_modified_walking_instructions import GetModifiedWalkingInstructions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
