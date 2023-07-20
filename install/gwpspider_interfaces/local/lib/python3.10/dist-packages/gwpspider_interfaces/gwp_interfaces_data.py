# TOPICS
# Arduino
GRIPPER_STATES_TOPIC = 'grippers_states'
BNO_DATA_TOPIC = 'bno_data_topic'

# Controller
LEGS_STATES_TOPIC = 'legs_states_topic'
COMMANDED_JOINTS_VELOCITIES_TOPIC = 'commanded_joint_velocities_topic'

# Dynamixel
DYNAMIXEL_MOTORS_DATA_TOPIC = 'dynamixel_motors_data'

# App
SPIDER_POSE_TOPIC = 'spider_pose_topic'


# SERVICES
# Arduino
MOVE_GRIPPER_SERVICE = 'move_gripper_service'
WATER_PUMP_SERVICE = 'water_pump_service'
INIT_BNO_SERVICE = 'init_bno_service'

# Controller
MOVE_LEG_SERVICE = 'move_leg_service'
MOVE_SPIDER_SERVICE = 'move_spider_service'
TOGGLE_CONTROLLER_SERVICE = 'toggle_controller_service'
DISTRIBUTE_FORCES_SERVICE = 'distribute_forces_service'
APPLY_FORCE_ON_LEG_SERVICE = 'apply_force_on_leg_service'
UPDATE_LAST_LEGS_POSITIONS_SERVICE = 'update_last_legs_positions_service'
GET_SPIDER_POSE_SERVICE = 'get_spider_pose_service'
MOVE_LEG_VELOCITY_MODE_SERVICE = 'move_leg_velocity_mode_service'
TOGGLE_ADDITIONAL_CONTROLLER_MODE_SERVICE = 'toggle_additional_controller_mode_service'

#Server
SEND_GOAL_SERVICE = 'spider_goal_service'

# Dynamixel
TOGGLE_MOTORS_TORQUE_SERVICE = 'toggle_motors_torque_service'
SET_BUS_WATCHDOG_SERVICE = 'set_bus_watchdog_service'
REBOOT_MOTORS_SERVICE = 'reboot_motors_service'

# Planning
GET_WALKING_INSTRUCTIONS_SERVICE = 'get_walking_instructions_service'
GET_MODIFIED_WALKING_INSTRUCTION_SERVICE = 'get_modified_walking_instructions_service'
GET_LEG_TRAJECTORY_SERVICE = 'get_leg_trajectory_service'

# Offset Predictor
GET_CORRECTION_OFFSET_SERVICE = 'get_correction_offset_service'