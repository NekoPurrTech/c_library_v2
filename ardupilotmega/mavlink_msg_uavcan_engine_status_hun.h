#pragma once
// MESSAGE UAVCAN_ENGINE_STATUS_HUN PACKING

#define MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN 12923


typedef struct __mavlink_uavcan_engine_status_hun_t {
 uint64_t timestamp; /*<  time since system start (microseconds)*/
 float manifold_pre_a_kpa; /*<  */
 float manifold_pre_b_kpa; /*<  */
 uint32_t engine_speed_a_rpm; /*<  */
 uint32_t engine_speed_b_rpm; /*<  */
 float throttle_pos_sens_a_per; /*<  */
 float throttle_pos_sens_b_per; /*<  */
 float throttle_opening_send_val; /*<  */
 float instantaneous_fuel_consp_a; /*<  */
 float instantaneous_fuel_consp_b; /*<  */
 uint16_t speed_send_val_rpm; /*<  */
 uint16_t average_fuel_consp_a; /*<  */
 uint16_t average_fuel_consp_b; /*<  */
 uint8_t source_node_id; /*<  UAVCAN source node id*/
 uint8_t ecu_index; /*<  The index of the publishing ECU*/
 uint8_t manifold_temp_a_c; /*<  */
 uint8_t manifold_temp_b_c; /*<  */
 uint8_t cyl_coolant_temp_1_c; /*<  */
 uint8_t cyl_coolant_temp_2_c; /*<  */
 uint8_t cyl_coolant_temp_3_c; /*<  */
 uint8_t cyl_coolant_temp_4_c; /*<  */
 uint8_t engine_powermode_a; /*<  */
 uint8_t engine_powermode_b; /*<  */
 uint8_t sens_state_manifold; /*<  */
 uint8_t sens_state_coolant; /*<  */
 uint8_t sens_state_throttle; /*<  */
 uint8_t sens_state_curved_knock; /*<  */
 uint8_t sens_state_inj_a; /*<  */
 uint8_t sens_state_inj_b; /*<  */
 uint8_t sens_state_ign_coil; /*<  */
 uint8_t sens_state_pwm; /*<  */
 uint8_t padding0[4]; /*<  */
} mavlink_uavcan_engine_status_hun_t;

#define MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN 72
#define MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_MIN_LEN 72
#define MAVLINK_MSG_ID_12923_LEN 72
#define MAVLINK_MSG_ID_12923_MIN_LEN 72

#define MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_CRC 138
#define MAVLINK_MSG_ID_12923_CRC 138

#define MAVLINK_MSG_UAVCAN_ENGINE_STATUS_HUN_FIELD_PADDING0_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UAVCAN_ENGINE_STATUS_HUN { \
    12923, \
    "UAVCAN_ENGINE_STATUS_HUN", \
    32, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_uavcan_engine_status_hun_t, timestamp) }, \
         { "source_node_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 50, offsetof(mavlink_uavcan_engine_status_hun_t, source_node_id) }, \
         { "ecu_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 51, offsetof(mavlink_uavcan_engine_status_hun_t, ecu_index) }, \
         { "manifold_temp_a_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 52, offsetof(mavlink_uavcan_engine_status_hun_t, manifold_temp_a_c) }, \
         { "manifold_temp_b_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 53, offsetof(mavlink_uavcan_engine_status_hun_t, manifold_temp_b_c) }, \
         { "manifold_pre_a_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uavcan_engine_status_hun_t, manifold_pre_a_kpa) }, \
         { "manifold_pre_b_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uavcan_engine_status_hun_t, manifold_pre_b_kpa) }, \
         { "cyl_coolant_temp_1_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 54, offsetof(mavlink_uavcan_engine_status_hun_t, cyl_coolant_temp_1_c) }, \
         { "cyl_coolant_temp_2_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 55, offsetof(mavlink_uavcan_engine_status_hun_t, cyl_coolant_temp_2_c) }, \
         { "cyl_coolant_temp_3_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_uavcan_engine_status_hun_t, cyl_coolant_temp_3_c) }, \
         { "cyl_coolant_temp_4_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 57, offsetof(mavlink_uavcan_engine_status_hun_t, cyl_coolant_temp_4_c) }, \
         { "engine_speed_a_rpm", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_uavcan_engine_status_hun_t, engine_speed_a_rpm) }, \
         { "engine_speed_b_rpm", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_uavcan_engine_status_hun_t, engine_speed_b_rpm) }, \
         { "throttle_pos_sens_a_per", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uavcan_engine_status_hun_t, throttle_pos_sens_a_per) }, \
         { "throttle_pos_sens_b_per", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uavcan_engine_status_hun_t, throttle_pos_sens_b_per) }, \
         { "speed_send_val_rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_uavcan_engine_status_hun_t, speed_send_val_rpm) }, \
         { "throttle_opening_send_val", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uavcan_engine_status_hun_t, throttle_opening_send_val) }, \
         { "engine_powermode_a", NULL, MAVLINK_TYPE_UINT8_T, 0, 58, offsetof(mavlink_uavcan_engine_status_hun_t, engine_powermode_a) }, \
         { "engine_powermode_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 59, offsetof(mavlink_uavcan_engine_status_hun_t, engine_powermode_b) }, \
         { "instantaneous_fuel_consp_a", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_uavcan_engine_status_hun_t, instantaneous_fuel_consp_a) }, \
         { "average_fuel_consp_a", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_uavcan_engine_status_hun_t, average_fuel_consp_a) }, \
         { "instantaneous_fuel_consp_b", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_uavcan_engine_status_hun_t, instantaneous_fuel_consp_b) }, \
         { "average_fuel_consp_b", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_uavcan_engine_status_hun_t, average_fuel_consp_b) }, \
         { "sens_state_manifold", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_manifold) }, \
         { "sens_state_coolant", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_coolant) }, \
         { "sens_state_throttle", NULL, MAVLINK_TYPE_UINT8_T, 0, 62, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_throttle) }, \
         { "sens_state_curved_knock", NULL, MAVLINK_TYPE_UINT8_T, 0, 63, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_curved_knock) }, \
         { "sens_state_inj_a", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_inj_a) }, \
         { "sens_state_inj_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 65, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_inj_b) }, \
         { "sens_state_ign_coil", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_ign_coil) }, \
         { "sens_state_pwm", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_pwm) }, \
         { "padding0", NULL, MAVLINK_TYPE_UINT8_T, 4, 68, offsetof(mavlink_uavcan_engine_status_hun_t, padding0) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UAVCAN_ENGINE_STATUS_HUN { \
    "UAVCAN_ENGINE_STATUS_HUN", \
    32, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_uavcan_engine_status_hun_t, timestamp) }, \
         { "source_node_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 50, offsetof(mavlink_uavcan_engine_status_hun_t, source_node_id) }, \
         { "ecu_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 51, offsetof(mavlink_uavcan_engine_status_hun_t, ecu_index) }, \
         { "manifold_temp_a_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 52, offsetof(mavlink_uavcan_engine_status_hun_t, manifold_temp_a_c) }, \
         { "manifold_temp_b_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 53, offsetof(mavlink_uavcan_engine_status_hun_t, manifold_temp_b_c) }, \
         { "manifold_pre_a_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uavcan_engine_status_hun_t, manifold_pre_a_kpa) }, \
         { "manifold_pre_b_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uavcan_engine_status_hun_t, manifold_pre_b_kpa) }, \
         { "cyl_coolant_temp_1_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 54, offsetof(mavlink_uavcan_engine_status_hun_t, cyl_coolant_temp_1_c) }, \
         { "cyl_coolant_temp_2_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 55, offsetof(mavlink_uavcan_engine_status_hun_t, cyl_coolant_temp_2_c) }, \
         { "cyl_coolant_temp_3_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_uavcan_engine_status_hun_t, cyl_coolant_temp_3_c) }, \
         { "cyl_coolant_temp_4_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 57, offsetof(mavlink_uavcan_engine_status_hun_t, cyl_coolant_temp_4_c) }, \
         { "engine_speed_a_rpm", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_uavcan_engine_status_hun_t, engine_speed_a_rpm) }, \
         { "engine_speed_b_rpm", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_uavcan_engine_status_hun_t, engine_speed_b_rpm) }, \
         { "throttle_pos_sens_a_per", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uavcan_engine_status_hun_t, throttle_pos_sens_a_per) }, \
         { "throttle_pos_sens_b_per", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uavcan_engine_status_hun_t, throttle_pos_sens_b_per) }, \
         { "speed_send_val_rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_uavcan_engine_status_hun_t, speed_send_val_rpm) }, \
         { "throttle_opening_send_val", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uavcan_engine_status_hun_t, throttle_opening_send_val) }, \
         { "engine_powermode_a", NULL, MAVLINK_TYPE_UINT8_T, 0, 58, offsetof(mavlink_uavcan_engine_status_hun_t, engine_powermode_a) }, \
         { "engine_powermode_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 59, offsetof(mavlink_uavcan_engine_status_hun_t, engine_powermode_b) }, \
         { "instantaneous_fuel_consp_a", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_uavcan_engine_status_hun_t, instantaneous_fuel_consp_a) }, \
         { "average_fuel_consp_a", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_uavcan_engine_status_hun_t, average_fuel_consp_a) }, \
         { "instantaneous_fuel_consp_b", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_uavcan_engine_status_hun_t, instantaneous_fuel_consp_b) }, \
         { "average_fuel_consp_b", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_uavcan_engine_status_hun_t, average_fuel_consp_b) }, \
         { "sens_state_manifold", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_manifold) }, \
         { "sens_state_coolant", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_coolant) }, \
         { "sens_state_throttle", NULL, MAVLINK_TYPE_UINT8_T, 0, 62, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_throttle) }, \
         { "sens_state_curved_knock", NULL, MAVLINK_TYPE_UINT8_T, 0, 63, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_curved_knock) }, \
         { "sens_state_inj_a", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_inj_a) }, \
         { "sens_state_inj_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 65, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_inj_b) }, \
         { "sens_state_ign_coil", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_ign_coil) }, \
         { "sens_state_pwm", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_uavcan_engine_status_hun_t, sens_state_pwm) }, \
         { "padding0", NULL, MAVLINK_TYPE_UINT8_T, 4, 68, offsetof(mavlink_uavcan_engine_status_hun_t, padding0) }, \
         } \
}
#endif

/**
 * @brief Pack a uavcan_engine_status_hun message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param source_node_id  UAVCAN source node id
 * @param ecu_index  The index of the publishing ECU
 * @param manifold_temp_a_c  
 * @param manifold_temp_b_c  
 * @param manifold_pre_a_kpa  
 * @param manifold_pre_b_kpa  
 * @param cyl_coolant_temp_1_c  
 * @param cyl_coolant_temp_2_c  
 * @param cyl_coolant_temp_3_c  
 * @param cyl_coolant_temp_4_c  
 * @param engine_speed_a_rpm  
 * @param engine_speed_b_rpm  
 * @param throttle_pos_sens_a_per  
 * @param throttle_pos_sens_b_per  
 * @param speed_send_val_rpm  
 * @param throttle_opening_send_val  
 * @param engine_powermode_a  
 * @param engine_powermode_b  
 * @param instantaneous_fuel_consp_a  
 * @param average_fuel_consp_a  
 * @param instantaneous_fuel_consp_b  
 * @param average_fuel_consp_b  
 * @param sens_state_manifold  
 * @param sens_state_coolant  
 * @param sens_state_throttle  
 * @param sens_state_curved_knock  
 * @param sens_state_inj_a  
 * @param sens_state_inj_b  
 * @param sens_state_ign_coil  
 * @param sens_state_pwm  
 * @param padding0  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_hun_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t source_node_id, uint8_t ecu_index, uint8_t manifold_temp_a_c, uint8_t manifold_temp_b_c, float manifold_pre_a_kpa, float manifold_pre_b_kpa, uint8_t cyl_coolant_temp_1_c, uint8_t cyl_coolant_temp_2_c, uint8_t cyl_coolant_temp_3_c, uint8_t cyl_coolant_temp_4_c, uint32_t engine_speed_a_rpm, uint32_t engine_speed_b_rpm, float throttle_pos_sens_a_per, float throttle_pos_sens_b_per, uint16_t speed_send_val_rpm, float throttle_opening_send_val, uint8_t engine_powermode_a, uint8_t engine_powermode_b, float instantaneous_fuel_consp_a, uint16_t average_fuel_consp_a, float instantaneous_fuel_consp_b, uint16_t average_fuel_consp_b, uint8_t sens_state_manifold, uint8_t sens_state_coolant, uint8_t sens_state_throttle, uint8_t sens_state_curved_knock, uint8_t sens_state_inj_a, uint8_t sens_state_inj_b, uint8_t sens_state_ign_coil, uint8_t sens_state_pwm, const uint8_t *padding0)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, manifold_pre_a_kpa);
    _mav_put_float(buf, 12, manifold_pre_b_kpa);
    _mav_put_uint32_t(buf, 16, engine_speed_a_rpm);
    _mav_put_uint32_t(buf, 20, engine_speed_b_rpm);
    _mav_put_float(buf, 24, throttle_pos_sens_a_per);
    _mav_put_float(buf, 28, throttle_pos_sens_b_per);
    _mav_put_float(buf, 32, throttle_opening_send_val);
    _mav_put_float(buf, 36, instantaneous_fuel_consp_a);
    _mav_put_float(buf, 40, instantaneous_fuel_consp_b);
    _mav_put_uint16_t(buf, 44, speed_send_val_rpm);
    _mav_put_uint16_t(buf, 46, average_fuel_consp_a);
    _mav_put_uint16_t(buf, 48, average_fuel_consp_b);
    _mav_put_uint8_t(buf, 50, source_node_id);
    _mav_put_uint8_t(buf, 51, ecu_index);
    _mav_put_uint8_t(buf, 52, manifold_temp_a_c);
    _mav_put_uint8_t(buf, 53, manifold_temp_b_c);
    _mav_put_uint8_t(buf, 54, cyl_coolant_temp_1_c);
    _mav_put_uint8_t(buf, 55, cyl_coolant_temp_2_c);
    _mav_put_uint8_t(buf, 56, cyl_coolant_temp_3_c);
    _mav_put_uint8_t(buf, 57, cyl_coolant_temp_4_c);
    _mav_put_uint8_t(buf, 58, engine_powermode_a);
    _mav_put_uint8_t(buf, 59, engine_powermode_b);
    _mav_put_uint8_t(buf, 60, sens_state_manifold);
    _mav_put_uint8_t(buf, 61, sens_state_coolant);
    _mav_put_uint8_t(buf, 62, sens_state_throttle);
    _mav_put_uint8_t(buf, 63, sens_state_curved_knock);
    _mav_put_uint8_t(buf, 64, sens_state_inj_a);
    _mav_put_uint8_t(buf, 65, sens_state_inj_b);
    _mav_put_uint8_t(buf, 66, sens_state_ign_coil);
    _mav_put_uint8_t(buf, 67, sens_state_pwm);
    _mav_put_uint8_t_array(buf, 68, padding0, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN);
#else
    mavlink_uavcan_engine_status_hun_t packet;
    packet.timestamp = timestamp;
    packet.manifold_pre_a_kpa = manifold_pre_a_kpa;
    packet.manifold_pre_b_kpa = manifold_pre_b_kpa;
    packet.engine_speed_a_rpm = engine_speed_a_rpm;
    packet.engine_speed_b_rpm = engine_speed_b_rpm;
    packet.throttle_pos_sens_a_per = throttle_pos_sens_a_per;
    packet.throttle_pos_sens_b_per = throttle_pos_sens_b_per;
    packet.throttle_opening_send_val = throttle_opening_send_val;
    packet.instantaneous_fuel_consp_a = instantaneous_fuel_consp_a;
    packet.instantaneous_fuel_consp_b = instantaneous_fuel_consp_b;
    packet.speed_send_val_rpm = speed_send_val_rpm;
    packet.average_fuel_consp_a = average_fuel_consp_a;
    packet.average_fuel_consp_b = average_fuel_consp_b;
    packet.source_node_id = source_node_id;
    packet.ecu_index = ecu_index;
    packet.manifold_temp_a_c = manifold_temp_a_c;
    packet.manifold_temp_b_c = manifold_temp_b_c;
    packet.cyl_coolant_temp_1_c = cyl_coolant_temp_1_c;
    packet.cyl_coolant_temp_2_c = cyl_coolant_temp_2_c;
    packet.cyl_coolant_temp_3_c = cyl_coolant_temp_3_c;
    packet.cyl_coolant_temp_4_c = cyl_coolant_temp_4_c;
    packet.engine_powermode_a = engine_powermode_a;
    packet.engine_powermode_b = engine_powermode_b;
    packet.sens_state_manifold = sens_state_manifold;
    packet.sens_state_coolant = sens_state_coolant;
    packet.sens_state_throttle = sens_state_throttle;
    packet.sens_state_curved_knock = sens_state_curved_knock;
    packet.sens_state_inj_a = sens_state_inj_a;
    packet.sens_state_inj_b = sens_state_inj_b;
    packet.sens_state_ign_coil = sens_state_ign_coil;
    packet.sens_state_pwm = sens_state_pwm;
    mav_array_assign_uint8_t(packet.padding0, padding0, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_CRC);
}

/**
 * @brief Pack a uavcan_engine_status_hun message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param source_node_id  UAVCAN source node id
 * @param ecu_index  The index of the publishing ECU
 * @param manifold_temp_a_c  
 * @param manifold_temp_b_c  
 * @param manifold_pre_a_kpa  
 * @param manifold_pre_b_kpa  
 * @param cyl_coolant_temp_1_c  
 * @param cyl_coolant_temp_2_c  
 * @param cyl_coolant_temp_3_c  
 * @param cyl_coolant_temp_4_c  
 * @param engine_speed_a_rpm  
 * @param engine_speed_b_rpm  
 * @param throttle_pos_sens_a_per  
 * @param throttle_pos_sens_b_per  
 * @param speed_send_val_rpm  
 * @param throttle_opening_send_val  
 * @param engine_powermode_a  
 * @param engine_powermode_b  
 * @param instantaneous_fuel_consp_a  
 * @param average_fuel_consp_a  
 * @param instantaneous_fuel_consp_b  
 * @param average_fuel_consp_b  
 * @param sens_state_manifold  
 * @param sens_state_coolant  
 * @param sens_state_throttle  
 * @param sens_state_curved_knock  
 * @param sens_state_inj_a  
 * @param sens_state_inj_b  
 * @param sens_state_ign_coil  
 * @param sens_state_pwm  
 * @param padding0  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_hun_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t source_node_id, uint8_t ecu_index, uint8_t manifold_temp_a_c, uint8_t manifold_temp_b_c, float manifold_pre_a_kpa, float manifold_pre_b_kpa, uint8_t cyl_coolant_temp_1_c, uint8_t cyl_coolant_temp_2_c, uint8_t cyl_coolant_temp_3_c, uint8_t cyl_coolant_temp_4_c, uint32_t engine_speed_a_rpm, uint32_t engine_speed_b_rpm, float throttle_pos_sens_a_per, float throttle_pos_sens_b_per, uint16_t speed_send_val_rpm, float throttle_opening_send_val, uint8_t engine_powermode_a, uint8_t engine_powermode_b, float instantaneous_fuel_consp_a, uint16_t average_fuel_consp_a, float instantaneous_fuel_consp_b, uint16_t average_fuel_consp_b, uint8_t sens_state_manifold, uint8_t sens_state_coolant, uint8_t sens_state_throttle, uint8_t sens_state_curved_knock, uint8_t sens_state_inj_a, uint8_t sens_state_inj_b, uint8_t sens_state_ign_coil, uint8_t sens_state_pwm, const uint8_t *padding0)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, manifold_pre_a_kpa);
    _mav_put_float(buf, 12, manifold_pre_b_kpa);
    _mav_put_uint32_t(buf, 16, engine_speed_a_rpm);
    _mav_put_uint32_t(buf, 20, engine_speed_b_rpm);
    _mav_put_float(buf, 24, throttle_pos_sens_a_per);
    _mav_put_float(buf, 28, throttle_pos_sens_b_per);
    _mav_put_float(buf, 32, throttle_opening_send_val);
    _mav_put_float(buf, 36, instantaneous_fuel_consp_a);
    _mav_put_float(buf, 40, instantaneous_fuel_consp_b);
    _mav_put_uint16_t(buf, 44, speed_send_val_rpm);
    _mav_put_uint16_t(buf, 46, average_fuel_consp_a);
    _mav_put_uint16_t(buf, 48, average_fuel_consp_b);
    _mav_put_uint8_t(buf, 50, source_node_id);
    _mav_put_uint8_t(buf, 51, ecu_index);
    _mav_put_uint8_t(buf, 52, manifold_temp_a_c);
    _mav_put_uint8_t(buf, 53, manifold_temp_b_c);
    _mav_put_uint8_t(buf, 54, cyl_coolant_temp_1_c);
    _mav_put_uint8_t(buf, 55, cyl_coolant_temp_2_c);
    _mav_put_uint8_t(buf, 56, cyl_coolant_temp_3_c);
    _mav_put_uint8_t(buf, 57, cyl_coolant_temp_4_c);
    _mav_put_uint8_t(buf, 58, engine_powermode_a);
    _mav_put_uint8_t(buf, 59, engine_powermode_b);
    _mav_put_uint8_t(buf, 60, sens_state_manifold);
    _mav_put_uint8_t(buf, 61, sens_state_coolant);
    _mav_put_uint8_t(buf, 62, sens_state_throttle);
    _mav_put_uint8_t(buf, 63, sens_state_curved_knock);
    _mav_put_uint8_t(buf, 64, sens_state_inj_a);
    _mav_put_uint8_t(buf, 65, sens_state_inj_b);
    _mav_put_uint8_t(buf, 66, sens_state_ign_coil);
    _mav_put_uint8_t(buf, 67, sens_state_pwm);
    _mav_put_uint8_t_array(buf, 68, padding0, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN);
#else
    mavlink_uavcan_engine_status_hun_t packet;
    packet.timestamp = timestamp;
    packet.manifold_pre_a_kpa = manifold_pre_a_kpa;
    packet.manifold_pre_b_kpa = manifold_pre_b_kpa;
    packet.engine_speed_a_rpm = engine_speed_a_rpm;
    packet.engine_speed_b_rpm = engine_speed_b_rpm;
    packet.throttle_pos_sens_a_per = throttle_pos_sens_a_per;
    packet.throttle_pos_sens_b_per = throttle_pos_sens_b_per;
    packet.throttle_opening_send_val = throttle_opening_send_val;
    packet.instantaneous_fuel_consp_a = instantaneous_fuel_consp_a;
    packet.instantaneous_fuel_consp_b = instantaneous_fuel_consp_b;
    packet.speed_send_val_rpm = speed_send_val_rpm;
    packet.average_fuel_consp_a = average_fuel_consp_a;
    packet.average_fuel_consp_b = average_fuel_consp_b;
    packet.source_node_id = source_node_id;
    packet.ecu_index = ecu_index;
    packet.manifold_temp_a_c = manifold_temp_a_c;
    packet.manifold_temp_b_c = manifold_temp_b_c;
    packet.cyl_coolant_temp_1_c = cyl_coolant_temp_1_c;
    packet.cyl_coolant_temp_2_c = cyl_coolant_temp_2_c;
    packet.cyl_coolant_temp_3_c = cyl_coolant_temp_3_c;
    packet.cyl_coolant_temp_4_c = cyl_coolant_temp_4_c;
    packet.engine_powermode_a = engine_powermode_a;
    packet.engine_powermode_b = engine_powermode_b;
    packet.sens_state_manifold = sens_state_manifold;
    packet.sens_state_coolant = sens_state_coolant;
    packet.sens_state_throttle = sens_state_throttle;
    packet.sens_state_curved_knock = sens_state_curved_knock;
    packet.sens_state_inj_a = sens_state_inj_a;
    packet.sens_state_inj_b = sens_state_inj_b;
    packet.sens_state_ign_coil = sens_state_ign_coil;
    packet.sens_state_pwm = sens_state_pwm;
    mav_array_memcpy(packet.padding0, padding0, sizeof(uint8_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN);
#endif
}

/**
 * @brief Pack a uavcan_engine_status_hun message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  time since system start (microseconds)
 * @param source_node_id  UAVCAN source node id
 * @param ecu_index  The index of the publishing ECU
 * @param manifold_temp_a_c  
 * @param manifold_temp_b_c  
 * @param manifold_pre_a_kpa  
 * @param manifold_pre_b_kpa  
 * @param cyl_coolant_temp_1_c  
 * @param cyl_coolant_temp_2_c  
 * @param cyl_coolant_temp_3_c  
 * @param cyl_coolant_temp_4_c  
 * @param engine_speed_a_rpm  
 * @param engine_speed_b_rpm  
 * @param throttle_pos_sens_a_per  
 * @param throttle_pos_sens_b_per  
 * @param speed_send_val_rpm  
 * @param throttle_opening_send_val  
 * @param engine_powermode_a  
 * @param engine_powermode_b  
 * @param instantaneous_fuel_consp_a  
 * @param average_fuel_consp_a  
 * @param instantaneous_fuel_consp_b  
 * @param average_fuel_consp_b  
 * @param sens_state_manifold  
 * @param sens_state_coolant  
 * @param sens_state_throttle  
 * @param sens_state_curved_knock  
 * @param sens_state_inj_a  
 * @param sens_state_inj_b  
 * @param sens_state_ign_coil  
 * @param sens_state_pwm  
 * @param padding0  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_hun_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t source_node_id,uint8_t ecu_index,uint8_t manifold_temp_a_c,uint8_t manifold_temp_b_c,float manifold_pre_a_kpa,float manifold_pre_b_kpa,uint8_t cyl_coolant_temp_1_c,uint8_t cyl_coolant_temp_2_c,uint8_t cyl_coolant_temp_3_c,uint8_t cyl_coolant_temp_4_c,uint32_t engine_speed_a_rpm,uint32_t engine_speed_b_rpm,float throttle_pos_sens_a_per,float throttle_pos_sens_b_per,uint16_t speed_send_val_rpm,float throttle_opening_send_val,uint8_t engine_powermode_a,uint8_t engine_powermode_b,float instantaneous_fuel_consp_a,uint16_t average_fuel_consp_a,float instantaneous_fuel_consp_b,uint16_t average_fuel_consp_b,uint8_t sens_state_manifold,uint8_t sens_state_coolant,uint8_t sens_state_throttle,uint8_t sens_state_curved_knock,uint8_t sens_state_inj_a,uint8_t sens_state_inj_b,uint8_t sens_state_ign_coil,uint8_t sens_state_pwm,const uint8_t *padding0)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, manifold_pre_a_kpa);
    _mav_put_float(buf, 12, manifold_pre_b_kpa);
    _mav_put_uint32_t(buf, 16, engine_speed_a_rpm);
    _mav_put_uint32_t(buf, 20, engine_speed_b_rpm);
    _mav_put_float(buf, 24, throttle_pos_sens_a_per);
    _mav_put_float(buf, 28, throttle_pos_sens_b_per);
    _mav_put_float(buf, 32, throttle_opening_send_val);
    _mav_put_float(buf, 36, instantaneous_fuel_consp_a);
    _mav_put_float(buf, 40, instantaneous_fuel_consp_b);
    _mav_put_uint16_t(buf, 44, speed_send_val_rpm);
    _mav_put_uint16_t(buf, 46, average_fuel_consp_a);
    _mav_put_uint16_t(buf, 48, average_fuel_consp_b);
    _mav_put_uint8_t(buf, 50, source_node_id);
    _mav_put_uint8_t(buf, 51, ecu_index);
    _mav_put_uint8_t(buf, 52, manifold_temp_a_c);
    _mav_put_uint8_t(buf, 53, manifold_temp_b_c);
    _mav_put_uint8_t(buf, 54, cyl_coolant_temp_1_c);
    _mav_put_uint8_t(buf, 55, cyl_coolant_temp_2_c);
    _mav_put_uint8_t(buf, 56, cyl_coolant_temp_3_c);
    _mav_put_uint8_t(buf, 57, cyl_coolant_temp_4_c);
    _mav_put_uint8_t(buf, 58, engine_powermode_a);
    _mav_put_uint8_t(buf, 59, engine_powermode_b);
    _mav_put_uint8_t(buf, 60, sens_state_manifold);
    _mav_put_uint8_t(buf, 61, sens_state_coolant);
    _mav_put_uint8_t(buf, 62, sens_state_throttle);
    _mav_put_uint8_t(buf, 63, sens_state_curved_knock);
    _mav_put_uint8_t(buf, 64, sens_state_inj_a);
    _mav_put_uint8_t(buf, 65, sens_state_inj_b);
    _mav_put_uint8_t(buf, 66, sens_state_ign_coil);
    _mav_put_uint8_t(buf, 67, sens_state_pwm);
    _mav_put_uint8_t_array(buf, 68, padding0, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN);
#else
    mavlink_uavcan_engine_status_hun_t packet;
    packet.timestamp = timestamp;
    packet.manifold_pre_a_kpa = manifold_pre_a_kpa;
    packet.manifold_pre_b_kpa = manifold_pre_b_kpa;
    packet.engine_speed_a_rpm = engine_speed_a_rpm;
    packet.engine_speed_b_rpm = engine_speed_b_rpm;
    packet.throttle_pos_sens_a_per = throttle_pos_sens_a_per;
    packet.throttle_pos_sens_b_per = throttle_pos_sens_b_per;
    packet.throttle_opening_send_val = throttle_opening_send_val;
    packet.instantaneous_fuel_consp_a = instantaneous_fuel_consp_a;
    packet.instantaneous_fuel_consp_b = instantaneous_fuel_consp_b;
    packet.speed_send_val_rpm = speed_send_val_rpm;
    packet.average_fuel_consp_a = average_fuel_consp_a;
    packet.average_fuel_consp_b = average_fuel_consp_b;
    packet.source_node_id = source_node_id;
    packet.ecu_index = ecu_index;
    packet.manifold_temp_a_c = manifold_temp_a_c;
    packet.manifold_temp_b_c = manifold_temp_b_c;
    packet.cyl_coolant_temp_1_c = cyl_coolant_temp_1_c;
    packet.cyl_coolant_temp_2_c = cyl_coolant_temp_2_c;
    packet.cyl_coolant_temp_3_c = cyl_coolant_temp_3_c;
    packet.cyl_coolant_temp_4_c = cyl_coolant_temp_4_c;
    packet.engine_powermode_a = engine_powermode_a;
    packet.engine_powermode_b = engine_powermode_b;
    packet.sens_state_manifold = sens_state_manifold;
    packet.sens_state_coolant = sens_state_coolant;
    packet.sens_state_throttle = sens_state_throttle;
    packet.sens_state_curved_knock = sens_state_curved_knock;
    packet.sens_state_inj_a = sens_state_inj_a;
    packet.sens_state_inj_b = sens_state_inj_b;
    packet.sens_state_ign_coil = sens_state_ign_coil;
    packet.sens_state_pwm = sens_state_pwm;
    mav_array_assign_uint8_t(packet.padding0, padding0, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_CRC);
}

/**
 * @brief Encode a uavcan_engine_status_hun struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uavcan_engine_status_hun C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_hun_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uavcan_engine_status_hun_t* uavcan_engine_status_hun)
{
    return mavlink_msg_uavcan_engine_status_hun_pack(system_id, component_id, msg, uavcan_engine_status_hun->timestamp, uavcan_engine_status_hun->source_node_id, uavcan_engine_status_hun->ecu_index, uavcan_engine_status_hun->manifold_temp_a_c, uavcan_engine_status_hun->manifold_temp_b_c, uavcan_engine_status_hun->manifold_pre_a_kpa, uavcan_engine_status_hun->manifold_pre_b_kpa, uavcan_engine_status_hun->cyl_coolant_temp_1_c, uavcan_engine_status_hun->cyl_coolant_temp_2_c, uavcan_engine_status_hun->cyl_coolant_temp_3_c, uavcan_engine_status_hun->cyl_coolant_temp_4_c, uavcan_engine_status_hun->engine_speed_a_rpm, uavcan_engine_status_hun->engine_speed_b_rpm, uavcan_engine_status_hun->throttle_pos_sens_a_per, uavcan_engine_status_hun->throttle_pos_sens_b_per, uavcan_engine_status_hun->speed_send_val_rpm, uavcan_engine_status_hun->throttle_opening_send_val, uavcan_engine_status_hun->engine_powermode_a, uavcan_engine_status_hun->engine_powermode_b, uavcan_engine_status_hun->instantaneous_fuel_consp_a, uavcan_engine_status_hun->average_fuel_consp_a, uavcan_engine_status_hun->instantaneous_fuel_consp_b, uavcan_engine_status_hun->average_fuel_consp_b, uavcan_engine_status_hun->sens_state_manifold, uavcan_engine_status_hun->sens_state_coolant, uavcan_engine_status_hun->sens_state_throttle, uavcan_engine_status_hun->sens_state_curved_knock, uavcan_engine_status_hun->sens_state_inj_a, uavcan_engine_status_hun->sens_state_inj_b, uavcan_engine_status_hun->sens_state_ign_coil, uavcan_engine_status_hun->sens_state_pwm, uavcan_engine_status_hun->padding0);
}

/**
 * @brief Encode a uavcan_engine_status_hun struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uavcan_engine_status_hun C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_hun_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uavcan_engine_status_hun_t* uavcan_engine_status_hun)
{
    return mavlink_msg_uavcan_engine_status_hun_pack_chan(system_id, component_id, chan, msg, uavcan_engine_status_hun->timestamp, uavcan_engine_status_hun->source_node_id, uavcan_engine_status_hun->ecu_index, uavcan_engine_status_hun->manifold_temp_a_c, uavcan_engine_status_hun->manifold_temp_b_c, uavcan_engine_status_hun->manifold_pre_a_kpa, uavcan_engine_status_hun->manifold_pre_b_kpa, uavcan_engine_status_hun->cyl_coolant_temp_1_c, uavcan_engine_status_hun->cyl_coolant_temp_2_c, uavcan_engine_status_hun->cyl_coolant_temp_3_c, uavcan_engine_status_hun->cyl_coolant_temp_4_c, uavcan_engine_status_hun->engine_speed_a_rpm, uavcan_engine_status_hun->engine_speed_b_rpm, uavcan_engine_status_hun->throttle_pos_sens_a_per, uavcan_engine_status_hun->throttle_pos_sens_b_per, uavcan_engine_status_hun->speed_send_val_rpm, uavcan_engine_status_hun->throttle_opening_send_val, uavcan_engine_status_hun->engine_powermode_a, uavcan_engine_status_hun->engine_powermode_b, uavcan_engine_status_hun->instantaneous_fuel_consp_a, uavcan_engine_status_hun->average_fuel_consp_a, uavcan_engine_status_hun->instantaneous_fuel_consp_b, uavcan_engine_status_hun->average_fuel_consp_b, uavcan_engine_status_hun->sens_state_manifold, uavcan_engine_status_hun->sens_state_coolant, uavcan_engine_status_hun->sens_state_throttle, uavcan_engine_status_hun->sens_state_curved_knock, uavcan_engine_status_hun->sens_state_inj_a, uavcan_engine_status_hun->sens_state_inj_b, uavcan_engine_status_hun->sens_state_ign_coil, uavcan_engine_status_hun->sens_state_pwm, uavcan_engine_status_hun->padding0);
}

/**
 * @brief Encode a uavcan_engine_status_hun struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param uavcan_engine_status_hun C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_hun_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_uavcan_engine_status_hun_t* uavcan_engine_status_hun)
{
    return mavlink_msg_uavcan_engine_status_hun_pack_status(system_id, component_id, _status, msg,  uavcan_engine_status_hun->timestamp, uavcan_engine_status_hun->source_node_id, uavcan_engine_status_hun->ecu_index, uavcan_engine_status_hun->manifold_temp_a_c, uavcan_engine_status_hun->manifold_temp_b_c, uavcan_engine_status_hun->manifold_pre_a_kpa, uavcan_engine_status_hun->manifold_pre_b_kpa, uavcan_engine_status_hun->cyl_coolant_temp_1_c, uavcan_engine_status_hun->cyl_coolant_temp_2_c, uavcan_engine_status_hun->cyl_coolant_temp_3_c, uavcan_engine_status_hun->cyl_coolant_temp_4_c, uavcan_engine_status_hun->engine_speed_a_rpm, uavcan_engine_status_hun->engine_speed_b_rpm, uavcan_engine_status_hun->throttle_pos_sens_a_per, uavcan_engine_status_hun->throttle_pos_sens_b_per, uavcan_engine_status_hun->speed_send_val_rpm, uavcan_engine_status_hun->throttle_opening_send_val, uavcan_engine_status_hun->engine_powermode_a, uavcan_engine_status_hun->engine_powermode_b, uavcan_engine_status_hun->instantaneous_fuel_consp_a, uavcan_engine_status_hun->average_fuel_consp_a, uavcan_engine_status_hun->instantaneous_fuel_consp_b, uavcan_engine_status_hun->average_fuel_consp_b, uavcan_engine_status_hun->sens_state_manifold, uavcan_engine_status_hun->sens_state_coolant, uavcan_engine_status_hun->sens_state_throttle, uavcan_engine_status_hun->sens_state_curved_knock, uavcan_engine_status_hun->sens_state_inj_a, uavcan_engine_status_hun->sens_state_inj_b, uavcan_engine_status_hun->sens_state_ign_coil, uavcan_engine_status_hun->sens_state_pwm, uavcan_engine_status_hun->padding0);
}

/**
 * @brief Send a uavcan_engine_status_hun message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  time since system start (microseconds)
 * @param source_node_id  UAVCAN source node id
 * @param ecu_index  The index of the publishing ECU
 * @param manifold_temp_a_c  
 * @param manifold_temp_b_c  
 * @param manifold_pre_a_kpa  
 * @param manifold_pre_b_kpa  
 * @param cyl_coolant_temp_1_c  
 * @param cyl_coolant_temp_2_c  
 * @param cyl_coolant_temp_3_c  
 * @param cyl_coolant_temp_4_c  
 * @param engine_speed_a_rpm  
 * @param engine_speed_b_rpm  
 * @param throttle_pos_sens_a_per  
 * @param throttle_pos_sens_b_per  
 * @param speed_send_val_rpm  
 * @param throttle_opening_send_val  
 * @param engine_powermode_a  
 * @param engine_powermode_b  
 * @param instantaneous_fuel_consp_a  
 * @param average_fuel_consp_a  
 * @param instantaneous_fuel_consp_b  
 * @param average_fuel_consp_b  
 * @param sens_state_manifold  
 * @param sens_state_coolant  
 * @param sens_state_throttle  
 * @param sens_state_curved_knock  
 * @param sens_state_inj_a  
 * @param sens_state_inj_b  
 * @param sens_state_ign_coil  
 * @param sens_state_pwm  
 * @param padding0  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uavcan_engine_status_hun_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t source_node_id, uint8_t ecu_index, uint8_t manifold_temp_a_c, uint8_t manifold_temp_b_c, float manifold_pre_a_kpa, float manifold_pre_b_kpa, uint8_t cyl_coolant_temp_1_c, uint8_t cyl_coolant_temp_2_c, uint8_t cyl_coolant_temp_3_c, uint8_t cyl_coolant_temp_4_c, uint32_t engine_speed_a_rpm, uint32_t engine_speed_b_rpm, float throttle_pos_sens_a_per, float throttle_pos_sens_b_per, uint16_t speed_send_val_rpm, float throttle_opening_send_val, uint8_t engine_powermode_a, uint8_t engine_powermode_b, float instantaneous_fuel_consp_a, uint16_t average_fuel_consp_a, float instantaneous_fuel_consp_b, uint16_t average_fuel_consp_b, uint8_t sens_state_manifold, uint8_t sens_state_coolant, uint8_t sens_state_throttle, uint8_t sens_state_curved_knock, uint8_t sens_state_inj_a, uint8_t sens_state_inj_b, uint8_t sens_state_ign_coil, uint8_t sens_state_pwm, const uint8_t *padding0)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, manifold_pre_a_kpa);
    _mav_put_float(buf, 12, manifold_pre_b_kpa);
    _mav_put_uint32_t(buf, 16, engine_speed_a_rpm);
    _mav_put_uint32_t(buf, 20, engine_speed_b_rpm);
    _mav_put_float(buf, 24, throttle_pos_sens_a_per);
    _mav_put_float(buf, 28, throttle_pos_sens_b_per);
    _mav_put_float(buf, 32, throttle_opening_send_val);
    _mav_put_float(buf, 36, instantaneous_fuel_consp_a);
    _mav_put_float(buf, 40, instantaneous_fuel_consp_b);
    _mav_put_uint16_t(buf, 44, speed_send_val_rpm);
    _mav_put_uint16_t(buf, 46, average_fuel_consp_a);
    _mav_put_uint16_t(buf, 48, average_fuel_consp_b);
    _mav_put_uint8_t(buf, 50, source_node_id);
    _mav_put_uint8_t(buf, 51, ecu_index);
    _mav_put_uint8_t(buf, 52, manifold_temp_a_c);
    _mav_put_uint8_t(buf, 53, manifold_temp_b_c);
    _mav_put_uint8_t(buf, 54, cyl_coolant_temp_1_c);
    _mav_put_uint8_t(buf, 55, cyl_coolant_temp_2_c);
    _mav_put_uint8_t(buf, 56, cyl_coolant_temp_3_c);
    _mav_put_uint8_t(buf, 57, cyl_coolant_temp_4_c);
    _mav_put_uint8_t(buf, 58, engine_powermode_a);
    _mav_put_uint8_t(buf, 59, engine_powermode_b);
    _mav_put_uint8_t(buf, 60, sens_state_manifold);
    _mav_put_uint8_t(buf, 61, sens_state_coolant);
    _mav_put_uint8_t(buf, 62, sens_state_throttle);
    _mav_put_uint8_t(buf, 63, sens_state_curved_knock);
    _mav_put_uint8_t(buf, 64, sens_state_inj_a);
    _mav_put_uint8_t(buf, 65, sens_state_inj_b);
    _mav_put_uint8_t(buf, 66, sens_state_ign_coil);
    _mav_put_uint8_t(buf, 67, sens_state_pwm);
    _mav_put_uint8_t_array(buf, 68, padding0, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN, buf, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_CRC);
#else
    mavlink_uavcan_engine_status_hun_t packet;
    packet.timestamp = timestamp;
    packet.manifold_pre_a_kpa = manifold_pre_a_kpa;
    packet.manifold_pre_b_kpa = manifold_pre_b_kpa;
    packet.engine_speed_a_rpm = engine_speed_a_rpm;
    packet.engine_speed_b_rpm = engine_speed_b_rpm;
    packet.throttle_pos_sens_a_per = throttle_pos_sens_a_per;
    packet.throttle_pos_sens_b_per = throttle_pos_sens_b_per;
    packet.throttle_opening_send_val = throttle_opening_send_val;
    packet.instantaneous_fuel_consp_a = instantaneous_fuel_consp_a;
    packet.instantaneous_fuel_consp_b = instantaneous_fuel_consp_b;
    packet.speed_send_val_rpm = speed_send_val_rpm;
    packet.average_fuel_consp_a = average_fuel_consp_a;
    packet.average_fuel_consp_b = average_fuel_consp_b;
    packet.source_node_id = source_node_id;
    packet.ecu_index = ecu_index;
    packet.manifold_temp_a_c = manifold_temp_a_c;
    packet.manifold_temp_b_c = manifold_temp_b_c;
    packet.cyl_coolant_temp_1_c = cyl_coolant_temp_1_c;
    packet.cyl_coolant_temp_2_c = cyl_coolant_temp_2_c;
    packet.cyl_coolant_temp_3_c = cyl_coolant_temp_3_c;
    packet.cyl_coolant_temp_4_c = cyl_coolant_temp_4_c;
    packet.engine_powermode_a = engine_powermode_a;
    packet.engine_powermode_b = engine_powermode_b;
    packet.sens_state_manifold = sens_state_manifold;
    packet.sens_state_coolant = sens_state_coolant;
    packet.sens_state_throttle = sens_state_throttle;
    packet.sens_state_curved_knock = sens_state_curved_knock;
    packet.sens_state_inj_a = sens_state_inj_a;
    packet.sens_state_inj_b = sens_state_inj_b;
    packet.sens_state_ign_coil = sens_state_ign_coil;
    packet.sens_state_pwm = sens_state_pwm;
    mav_array_assign_uint8_t(packet.padding0, padding0, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN, (const char *)&packet, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_CRC);
#endif
}

/**
 * @brief Send a uavcan_engine_status_hun message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uavcan_engine_status_hun_send_struct(mavlink_channel_t chan, const mavlink_uavcan_engine_status_hun_t* uavcan_engine_status_hun)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uavcan_engine_status_hun_send(chan, uavcan_engine_status_hun->timestamp, uavcan_engine_status_hun->source_node_id, uavcan_engine_status_hun->ecu_index, uavcan_engine_status_hun->manifold_temp_a_c, uavcan_engine_status_hun->manifold_temp_b_c, uavcan_engine_status_hun->manifold_pre_a_kpa, uavcan_engine_status_hun->manifold_pre_b_kpa, uavcan_engine_status_hun->cyl_coolant_temp_1_c, uavcan_engine_status_hun->cyl_coolant_temp_2_c, uavcan_engine_status_hun->cyl_coolant_temp_3_c, uavcan_engine_status_hun->cyl_coolant_temp_4_c, uavcan_engine_status_hun->engine_speed_a_rpm, uavcan_engine_status_hun->engine_speed_b_rpm, uavcan_engine_status_hun->throttle_pos_sens_a_per, uavcan_engine_status_hun->throttle_pos_sens_b_per, uavcan_engine_status_hun->speed_send_val_rpm, uavcan_engine_status_hun->throttle_opening_send_val, uavcan_engine_status_hun->engine_powermode_a, uavcan_engine_status_hun->engine_powermode_b, uavcan_engine_status_hun->instantaneous_fuel_consp_a, uavcan_engine_status_hun->average_fuel_consp_a, uavcan_engine_status_hun->instantaneous_fuel_consp_b, uavcan_engine_status_hun->average_fuel_consp_b, uavcan_engine_status_hun->sens_state_manifold, uavcan_engine_status_hun->sens_state_coolant, uavcan_engine_status_hun->sens_state_throttle, uavcan_engine_status_hun->sens_state_curved_knock, uavcan_engine_status_hun->sens_state_inj_a, uavcan_engine_status_hun->sens_state_inj_b, uavcan_engine_status_hun->sens_state_ign_coil, uavcan_engine_status_hun->sens_state_pwm, uavcan_engine_status_hun->padding0);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN, (const char *)uavcan_engine_status_hun, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_CRC);
#endif
}

#if MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uavcan_engine_status_hun_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t source_node_id, uint8_t ecu_index, uint8_t manifold_temp_a_c, uint8_t manifold_temp_b_c, float manifold_pre_a_kpa, float manifold_pre_b_kpa, uint8_t cyl_coolant_temp_1_c, uint8_t cyl_coolant_temp_2_c, uint8_t cyl_coolant_temp_3_c, uint8_t cyl_coolant_temp_4_c, uint32_t engine_speed_a_rpm, uint32_t engine_speed_b_rpm, float throttle_pos_sens_a_per, float throttle_pos_sens_b_per, uint16_t speed_send_val_rpm, float throttle_opening_send_val, uint8_t engine_powermode_a, uint8_t engine_powermode_b, float instantaneous_fuel_consp_a, uint16_t average_fuel_consp_a, float instantaneous_fuel_consp_b, uint16_t average_fuel_consp_b, uint8_t sens_state_manifold, uint8_t sens_state_coolant, uint8_t sens_state_throttle, uint8_t sens_state_curved_knock, uint8_t sens_state_inj_a, uint8_t sens_state_inj_b, uint8_t sens_state_ign_coil, uint8_t sens_state_pwm, const uint8_t *padding0)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, manifold_pre_a_kpa);
    _mav_put_float(buf, 12, manifold_pre_b_kpa);
    _mav_put_uint32_t(buf, 16, engine_speed_a_rpm);
    _mav_put_uint32_t(buf, 20, engine_speed_b_rpm);
    _mav_put_float(buf, 24, throttle_pos_sens_a_per);
    _mav_put_float(buf, 28, throttle_pos_sens_b_per);
    _mav_put_float(buf, 32, throttle_opening_send_val);
    _mav_put_float(buf, 36, instantaneous_fuel_consp_a);
    _mav_put_float(buf, 40, instantaneous_fuel_consp_b);
    _mav_put_uint16_t(buf, 44, speed_send_val_rpm);
    _mav_put_uint16_t(buf, 46, average_fuel_consp_a);
    _mav_put_uint16_t(buf, 48, average_fuel_consp_b);
    _mav_put_uint8_t(buf, 50, source_node_id);
    _mav_put_uint8_t(buf, 51, ecu_index);
    _mav_put_uint8_t(buf, 52, manifold_temp_a_c);
    _mav_put_uint8_t(buf, 53, manifold_temp_b_c);
    _mav_put_uint8_t(buf, 54, cyl_coolant_temp_1_c);
    _mav_put_uint8_t(buf, 55, cyl_coolant_temp_2_c);
    _mav_put_uint8_t(buf, 56, cyl_coolant_temp_3_c);
    _mav_put_uint8_t(buf, 57, cyl_coolant_temp_4_c);
    _mav_put_uint8_t(buf, 58, engine_powermode_a);
    _mav_put_uint8_t(buf, 59, engine_powermode_b);
    _mav_put_uint8_t(buf, 60, sens_state_manifold);
    _mav_put_uint8_t(buf, 61, sens_state_coolant);
    _mav_put_uint8_t(buf, 62, sens_state_throttle);
    _mav_put_uint8_t(buf, 63, sens_state_curved_knock);
    _mav_put_uint8_t(buf, 64, sens_state_inj_a);
    _mav_put_uint8_t(buf, 65, sens_state_inj_b);
    _mav_put_uint8_t(buf, 66, sens_state_ign_coil);
    _mav_put_uint8_t(buf, 67, sens_state_pwm);
    _mav_put_uint8_t_array(buf, 68, padding0, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN, buf, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_CRC);
#else
    mavlink_uavcan_engine_status_hun_t *packet = (mavlink_uavcan_engine_status_hun_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->manifold_pre_a_kpa = manifold_pre_a_kpa;
    packet->manifold_pre_b_kpa = manifold_pre_b_kpa;
    packet->engine_speed_a_rpm = engine_speed_a_rpm;
    packet->engine_speed_b_rpm = engine_speed_b_rpm;
    packet->throttle_pos_sens_a_per = throttle_pos_sens_a_per;
    packet->throttle_pos_sens_b_per = throttle_pos_sens_b_per;
    packet->throttle_opening_send_val = throttle_opening_send_val;
    packet->instantaneous_fuel_consp_a = instantaneous_fuel_consp_a;
    packet->instantaneous_fuel_consp_b = instantaneous_fuel_consp_b;
    packet->speed_send_val_rpm = speed_send_val_rpm;
    packet->average_fuel_consp_a = average_fuel_consp_a;
    packet->average_fuel_consp_b = average_fuel_consp_b;
    packet->source_node_id = source_node_id;
    packet->ecu_index = ecu_index;
    packet->manifold_temp_a_c = manifold_temp_a_c;
    packet->manifold_temp_b_c = manifold_temp_b_c;
    packet->cyl_coolant_temp_1_c = cyl_coolant_temp_1_c;
    packet->cyl_coolant_temp_2_c = cyl_coolant_temp_2_c;
    packet->cyl_coolant_temp_3_c = cyl_coolant_temp_3_c;
    packet->cyl_coolant_temp_4_c = cyl_coolant_temp_4_c;
    packet->engine_powermode_a = engine_powermode_a;
    packet->engine_powermode_b = engine_powermode_b;
    packet->sens_state_manifold = sens_state_manifold;
    packet->sens_state_coolant = sens_state_coolant;
    packet->sens_state_throttle = sens_state_throttle;
    packet->sens_state_curved_knock = sens_state_curved_knock;
    packet->sens_state_inj_a = sens_state_inj_a;
    packet->sens_state_inj_b = sens_state_inj_b;
    packet->sens_state_ign_coil = sens_state_ign_coil;
    packet->sens_state_pwm = sens_state_pwm;
    mav_array_assign_uint8_t(packet->padding0, padding0, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN, (const char *)packet, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_CRC);
#endif
}
#endif

#endif

// MESSAGE UAVCAN_ENGINE_STATUS_HUN UNPACKING


/**
 * @brief Get field timestamp from uavcan_engine_status_hun message
 *
 * @return  time since system start (microseconds)
 */
static inline uint64_t mavlink_msg_uavcan_engine_status_hun_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field source_node_id from uavcan_engine_status_hun message
 *
 * @return  UAVCAN source node id
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_source_node_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  50);
}

/**
 * @brief Get field ecu_index from uavcan_engine_status_hun message
 *
 * @return  The index of the publishing ECU
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_ecu_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  51);
}

/**
 * @brief Get field manifold_temp_a_c from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_manifold_temp_a_c(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  52);
}

/**
 * @brief Get field manifold_temp_b_c from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_manifold_temp_b_c(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  53);
}

/**
 * @brief Get field manifold_pre_a_kpa from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_hun_get_manifold_pre_a_kpa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field manifold_pre_b_kpa from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_hun_get_manifold_pre_b_kpa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field cyl_coolant_temp_1_c from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_cyl_coolant_temp_1_c(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  54);
}

/**
 * @brief Get field cyl_coolant_temp_2_c from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_cyl_coolant_temp_2_c(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  55);
}

/**
 * @brief Get field cyl_coolant_temp_3_c from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_cyl_coolant_temp_3_c(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  56);
}

/**
 * @brief Get field cyl_coolant_temp_4_c from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_cyl_coolant_temp_4_c(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  57);
}

/**
 * @brief Get field engine_speed_a_rpm from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_uavcan_engine_status_hun_get_engine_speed_a_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field engine_speed_b_rpm from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_uavcan_engine_status_hun_get_engine_speed_b_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field throttle_pos_sens_a_per from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_hun_get_throttle_pos_sens_a_per(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field throttle_pos_sens_b_per from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_hun_get_throttle_pos_sens_b_per(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field speed_send_val_rpm from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_hun_get_speed_send_val_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  44);
}

/**
 * @brief Get field throttle_opening_send_val from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_hun_get_throttle_opening_send_val(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field engine_powermode_a from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_engine_powermode_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  58);
}

/**
 * @brief Get field engine_powermode_b from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_engine_powermode_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  59);
}

/**
 * @brief Get field instantaneous_fuel_consp_a from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_hun_get_instantaneous_fuel_consp_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field average_fuel_consp_a from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_hun_get_average_fuel_consp_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  46);
}

/**
 * @brief Get field instantaneous_fuel_consp_b from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_hun_get_instantaneous_fuel_consp_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field average_fuel_consp_b from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_hun_get_average_fuel_consp_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  48);
}

/**
 * @brief Get field sens_state_manifold from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_sens_state_manifold(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  60);
}

/**
 * @brief Get field sens_state_coolant from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_sens_state_coolant(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  61);
}

/**
 * @brief Get field sens_state_throttle from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_sens_state_throttle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  62);
}

/**
 * @brief Get field sens_state_curved_knock from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_sens_state_curved_knock(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  63);
}

/**
 * @brief Get field sens_state_inj_a from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_sens_state_inj_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  64);
}

/**
 * @brief Get field sens_state_inj_b from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_sens_state_inj_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  65);
}

/**
 * @brief Get field sens_state_ign_coil from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_sens_state_ign_coil(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  66);
}

/**
 * @brief Get field sens_state_pwm from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_hun_get_sens_state_pwm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  67);
}

/**
 * @brief Get field padding0 from uavcan_engine_status_hun message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_hun_get_padding0(const mavlink_message_t* msg, uint8_t *padding0)
{
    return _MAV_RETURN_uint8_t_array(msg, padding0, 4,  68);
}

/**
 * @brief Decode a uavcan_engine_status_hun message into a struct
 *
 * @param msg The message to decode
 * @param uavcan_engine_status_hun C-struct to decode the message contents into
 */
static inline void mavlink_msg_uavcan_engine_status_hun_decode(const mavlink_message_t* msg, mavlink_uavcan_engine_status_hun_t* uavcan_engine_status_hun)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uavcan_engine_status_hun->timestamp = mavlink_msg_uavcan_engine_status_hun_get_timestamp(msg);
    uavcan_engine_status_hun->manifold_pre_a_kpa = mavlink_msg_uavcan_engine_status_hun_get_manifold_pre_a_kpa(msg);
    uavcan_engine_status_hun->manifold_pre_b_kpa = mavlink_msg_uavcan_engine_status_hun_get_manifold_pre_b_kpa(msg);
    uavcan_engine_status_hun->engine_speed_a_rpm = mavlink_msg_uavcan_engine_status_hun_get_engine_speed_a_rpm(msg);
    uavcan_engine_status_hun->engine_speed_b_rpm = mavlink_msg_uavcan_engine_status_hun_get_engine_speed_b_rpm(msg);
    uavcan_engine_status_hun->throttle_pos_sens_a_per = mavlink_msg_uavcan_engine_status_hun_get_throttle_pos_sens_a_per(msg);
    uavcan_engine_status_hun->throttle_pos_sens_b_per = mavlink_msg_uavcan_engine_status_hun_get_throttle_pos_sens_b_per(msg);
    uavcan_engine_status_hun->throttle_opening_send_val = mavlink_msg_uavcan_engine_status_hun_get_throttle_opening_send_val(msg);
    uavcan_engine_status_hun->instantaneous_fuel_consp_a = mavlink_msg_uavcan_engine_status_hun_get_instantaneous_fuel_consp_a(msg);
    uavcan_engine_status_hun->instantaneous_fuel_consp_b = mavlink_msg_uavcan_engine_status_hun_get_instantaneous_fuel_consp_b(msg);
    uavcan_engine_status_hun->speed_send_val_rpm = mavlink_msg_uavcan_engine_status_hun_get_speed_send_val_rpm(msg);
    uavcan_engine_status_hun->average_fuel_consp_a = mavlink_msg_uavcan_engine_status_hun_get_average_fuel_consp_a(msg);
    uavcan_engine_status_hun->average_fuel_consp_b = mavlink_msg_uavcan_engine_status_hun_get_average_fuel_consp_b(msg);
    uavcan_engine_status_hun->source_node_id = mavlink_msg_uavcan_engine_status_hun_get_source_node_id(msg);
    uavcan_engine_status_hun->ecu_index = mavlink_msg_uavcan_engine_status_hun_get_ecu_index(msg);
    uavcan_engine_status_hun->manifold_temp_a_c = mavlink_msg_uavcan_engine_status_hun_get_manifold_temp_a_c(msg);
    uavcan_engine_status_hun->manifold_temp_b_c = mavlink_msg_uavcan_engine_status_hun_get_manifold_temp_b_c(msg);
    uavcan_engine_status_hun->cyl_coolant_temp_1_c = mavlink_msg_uavcan_engine_status_hun_get_cyl_coolant_temp_1_c(msg);
    uavcan_engine_status_hun->cyl_coolant_temp_2_c = mavlink_msg_uavcan_engine_status_hun_get_cyl_coolant_temp_2_c(msg);
    uavcan_engine_status_hun->cyl_coolant_temp_3_c = mavlink_msg_uavcan_engine_status_hun_get_cyl_coolant_temp_3_c(msg);
    uavcan_engine_status_hun->cyl_coolant_temp_4_c = mavlink_msg_uavcan_engine_status_hun_get_cyl_coolant_temp_4_c(msg);
    uavcan_engine_status_hun->engine_powermode_a = mavlink_msg_uavcan_engine_status_hun_get_engine_powermode_a(msg);
    uavcan_engine_status_hun->engine_powermode_b = mavlink_msg_uavcan_engine_status_hun_get_engine_powermode_b(msg);
    uavcan_engine_status_hun->sens_state_manifold = mavlink_msg_uavcan_engine_status_hun_get_sens_state_manifold(msg);
    uavcan_engine_status_hun->sens_state_coolant = mavlink_msg_uavcan_engine_status_hun_get_sens_state_coolant(msg);
    uavcan_engine_status_hun->sens_state_throttle = mavlink_msg_uavcan_engine_status_hun_get_sens_state_throttle(msg);
    uavcan_engine_status_hun->sens_state_curved_knock = mavlink_msg_uavcan_engine_status_hun_get_sens_state_curved_knock(msg);
    uavcan_engine_status_hun->sens_state_inj_a = mavlink_msg_uavcan_engine_status_hun_get_sens_state_inj_a(msg);
    uavcan_engine_status_hun->sens_state_inj_b = mavlink_msg_uavcan_engine_status_hun_get_sens_state_inj_b(msg);
    uavcan_engine_status_hun->sens_state_ign_coil = mavlink_msg_uavcan_engine_status_hun_get_sens_state_ign_coil(msg);
    uavcan_engine_status_hun->sens_state_pwm = mavlink_msg_uavcan_engine_status_hun_get_sens_state_pwm(msg);
    mavlink_msg_uavcan_engine_status_hun_get_padding0(msg, uavcan_engine_status_hun->padding0);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN? msg->len : MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN;
        memset(uavcan_engine_status_hun, 0, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_HUN_LEN);
    memcpy(uavcan_engine_status_hun, _MAV_PAYLOAD(msg), len);
#endif
}
