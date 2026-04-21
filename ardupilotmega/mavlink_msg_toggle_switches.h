#pragma once
// MESSAGE TOGGLE_SWITCHES PACKING

#define MAVLINK_MSG_ID_TOGGLE_SWITCHES 12924


typedef struct __mavlink_toggle_switches_t {
 uint8_t fuel_pump_1; /*<  Fuel Pump 1 (amber)*/
 uint8_t fuel_pump_2; /*<  Fuel Pump 2 (amber)*/
 uint8_t water_cooler_fan_1; /*<  Water Cooler Fan 1 (blue)*/
 uint8_t water_cooler_fan_2; /*<  Water Cooler Fan 2 (blue)*/
 uint8_t inter_cooler_fan; /*<  Inter Cooler Fan (blue)*/
 uint8_t engine_start; /*<  Engine Start (green)*/
 uint8_t emergency_stop; /*<  Emergency STOP (red)*/
} mavlink_toggle_switches_t;

#define MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN 7
#define MAVLINK_MSG_ID_TOGGLE_SWITCHES_MIN_LEN 7
#define MAVLINK_MSG_ID_12924_LEN 7
#define MAVLINK_MSG_ID_12924_MIN_LEN 7

#define MAVLINK_MSG_ID_TOGGLE_SWITCHES_CRC 4
#define MAVLINK_MSG_ID_12924_CRC 4



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TOGGLE_SWITCHES { \
    12924, \
    "TOGGLE_SWITCHES", \
    7, \
    {  { "fuel_pump_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_toggle_switches_t, fuel_pump_1) }, \
         { "fuel_pump_2", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_toggle_switches_t, fuel_pump_2) }, \
         { "water_cooler_fan_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_toggle_switches_t, water_cooler_fan_1) }, \
         { "water_cooler_fan_2", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_toggle_switches_t, water_cooler_fan_2) }, \
         { "inter_cooler_fan", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_toggle_switches_t, inter_cooler_fan) }, \
         { "engine_start", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_toggle_switches_t, engine_start) }, \
         { "emergency_stop", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_toggle_switches_t, emergency_stop) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TOGGLE_SWITCHES { \
    "TOGGLE_SWITCHES", \
    7, \
    {  { "fuel_pump_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_toggle_switches_t, fuel_pump_1) }, \
         { "fuel_pump_2", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_toggle_switches_t, fuel_pump_2) }, \
         { "water_cooler_fan_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_toggle_switches_t, water_cooler_fan_1) }, \
         { "water_cooler_fan_2", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_toggle_switches_t, water_cooler_fan_2) }, \
         { "inter_cooler_fan", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_toggle_switches_t, inter_cooler_fan) }, \
         { "engine_start", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_toggle_switches_t, engine_start) }, \
         { "emergency_stop", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_toggle_switches_t, emergency_stop) }, \
         } \
}
#endif

/**
 * @brief Pack a toggle_switches message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param fuel_pump_1  Fuel Pump 1 (amber)
 * @param fuel_pump_2  Fuel Pump 2 (amber)
 * @param water_cooler_fan_1  Water Cooler Fan 1 (blue)
 * @param water_cooler_fan_2  Water Cooler Fan 2 (blue)
 * @param inter_cooler_fan  Inter Cooler Fan (blue)
 * @param engine_start  Engine Start (green)
 * @param emergency_stop  Emergency STOP (red)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_toggle_switches_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t fuel_pump_1, uint8_t fuel_pump_2, uint8_t water_cooler_fan_1, uint8_t water_cooler_fan_2, uint8_t inter_cooler_fan, uint8_t engine_start, uint8_t emergency_stop)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN];
    _mav_put_uint8_t(buf, 0, fuel_pump_1);
    _mav_put_uint8_t(buf, 1, fuel_pump_2);
    _mav_put_uint8_t(buf, 2, water_cooler_fan_1);
    _mav_put_uint8_t(buf, 3, water_cooler_fan_2);
    _mav_put_uint8_t(buf, 4, inter_cooler_fan);
    _mav_put_uint8_t(buf, 5, engine_start);
    _mav_put_uint8_t(buf, 6, emergency_stop);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN);
#else
    mavlink_toggle_switches_t packet;
    packet.fuel_pump_1 = fuel_pump_1;
    packet.fuel_pump_2 = fuel_pump_2;
    packet.water_cooler_fan_1 = water_cooler_fan_1;
    packet.water_cooler_fan_2 = water_cooler_fan_2;
    packet.inter_cooler_fan = inter_cooler_fan;
    packet.engine_start = engine_start;
    packet.emergency_stop = emergency_stop;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TOGGLE_SWITCHES;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TOGGLE_SWITCHES_MIN_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_CRC);
}

/**
 * @brief Pack a toggle_switches message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param fuel_pump_1  Fuel Pump 1 (amber)
 * @param fuel_pump_2  Fuel Pump 2 (amber)
 * @param water_cooler_fan_1  Water Cooler Fan 1 (blue)
 * @param water_cooler_fan_2  Water Cooler Fan 2 (blue)
 * @param inter_cooler_fan  Inter Cooler Fan (blue)
 * @param engine_start  Engine Start (green)
 * @param emergency_stop  Emergency STOP (red)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_toggle_switches_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t fuel_pump_1, uint8_t fuel_pump_2, uint8_t water_cooler_fan_1, uint8_t water_cooler_fan_2, uint8_t inter_cooler_fan, uint8_t engine_start, uint8_t emergency_stop)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN];
    _mav_put_uint8_t(buf, 0, fuel_pump_1);
    _mav_put_uint8_t(buf, 1, fuel_pump_2);
    _mav_put_uint8_t(buf, 2, water_cooler_fan_1);
    _mav_put_uint8_t(buf, 3, water_cooler_fan_2);
    _mav_put_uint8_t(buf, 4, inter_cooler_fan);
    _mav_put_uint8_t(buf, 5, engine_start);
    _mav_put_uint8_t(buf, 6, emergency_stop);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN);
#else
    mavlink_toggle_switches_t packet;
    packet.fuel_pump_1 = fuel_pump_1;
    packet.fuel_pump_2 = fuel_pump_2;
    packet.water_cooler_fan_1 = water_cooler_fan_1;
    packet.water_cooler_fan_2 = water_cooler_fan_2;
    packet.inter_cooler_fan = inter_cooler_fan;
    packet.engine_start = engine_start;
    packet.emergency_stop = emergency_stop;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TOGGLE_SWITCHES;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TOGGLE_SWITCHES_MIN_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TOGGLE_SWITCHES_MIN_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN);
#endif
}

/**
 * @brief Pack a toggle_switches message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fuel_pump_1  Fuel Pump 1 (amber)
 * @param fuel_pump_2  Fuel Pump 2 (amber)
 * @param water_cooler_fan_1  Water Cooler Fan 1 (blue)
 * @param water_cooler_fan_2  Water Cooler Fan 2 (blue)
 * @param inter_cooler_fan  Inter Cooler Fan (blue)
 * @param engine_start  Engine Start (green)
 * @param emergency_stop  Emergency STOP (red)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_toggle_switches_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t fuel_pump_1,uint8_t fuel_pump_2,uint8_t water_cooler_fan_1,uint8_t water_cooler_fan_2,uint8_t inter_cooler_fan,uint8_t engine_start,uint8_t emergency_stop)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN];
    _mav_put_uint8_t(buf, 0, fuel_pump_1);
    _mav_put_uint8_t(buf, 1, fuel_pump_2);
    _mav_put_uint8_t(buf, 2, water_cooler_fan_1);
    _mav_put_uint8_t(buf, 3, water_cooler_fan_2);
    _mav_put_uint8_t(buf, 4, inter_cooler_fan);
    _mav_put_uint8_t(buf, 5, engine_start);
    _mav_put_uint8_t(buf, 6, emergency_stop);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN);
#else
    mavlink_toggle_switches_t packet;
    packet.fuel_pump_1 = fuel_pump_1;
    packet.fuel_pump_2 = fuel_pump_2;
    packet.water_cooler_fan_1 = water_cooler_fan_1;
    packet.water_cooler_fan_2 = water_cooler_fan_2;
    packet.inter_cooler_fan = inter_cooler_fan;
    packet.engine_start = engine_start;
    packet.emergency_stop = emergency_stop;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TOGGLE_SWITCHES;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TOGGLE_SWITCHES_MIN_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_CRC);
}

/**
 * @brief Encode a toggle_switches struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param toggle_switches C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_toggle_switches_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_toggle_switches_t* toggle_switches)
{
    return mavlink_msg_toggle_switches_pack(system_id, component_id, msg, toggle_switches->fuel_pump_1, toggle_switches->fuel_pump_2, toggle_switches->water_cooler_fan_1, toggle_switches->water_cooler_fan_2, toggle_switches->inter_cooler_fan, toggle_switches->engine_start, toggle_switches->emergency_stop);
}

/**
 * @brief Encode a toggle_switches struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param toggle_switches C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_toggle_switches_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_toggle_switches_t* toggle_switches)
{
    return mavlink_msg_toggle_switches_pack_chan(system_id, component_id, chan, msg, toggle_switches->fuel_pump_1, toggle_switches->fuel_pump_2, toggle_switches->water_cooler_fan_1, toggle_switches->water_cooler_fan_2, toggle_switches->inter_cooler_fan, toggle_switches->engine_start, toggle_switches->emergency_stop);
}

/**
 * @brief Encode a toggle_switches struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param toggle_switches C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_toggle_switches_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_toggle_switches_t* toggle_switches)
{
    return mavlink_msg_toggle_switches_pack_status(system_id, component_id, _status, msg,  toggle_switches->fuel_pump_1, toggle_switches->fuel_pump_2, toggle_switches->water_cooler_fan_1, toggle_switches->water_cooler_fan_2, toggle_switches->inter_cooler_fan, toggle_switches->engine_start, toggle_switches->emergency_stop);
}

/**
 * @brief Send a toggle_switches message
 * @param chan MAVLink channel to send the message
 *
 * @param fuel_pump_1  Fuel Pump 1 (amber)
 * @param fuel_pump_2  Fuel Pump 2 (amber)
 * @param water_cooler_fan_1  Water Cooler Fan 1 (blue)
 * @param water_cooler_fan_2  Water Cooler Fan 2 (blue)
 * @param inter_cooler_fan  Inter Cooler Fan (blue)
 * @param engine_start  Engine Start (green)
 * @param emergency_stop  Emergency STOP (red)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_toggle_switches_send(mavlink_channel_t chan, uint8_t fuel_pump_1, uint8_t fuel_pump_2, uint8_t water_cooler_fan_1, uint8_t water_cooler_fan_2, uint8_t inter_cooler_fan, uint8_t engine_start, uint8_t emergency_stop)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN];
    _mav_put_uint8_t(buf, 0, fuel_pump_1);
    _mav_put_uint8_t(buf, 1, fuel_pump_2);
    _mav_put_uint8_t(buf, 2, water_cooler_fan_1);
    _mav_put_uint8_t(buf, 3, water_cooler_fan_2);
    _mav_put_uint8_t(buf, 4, inter_cooler_fan);
    _mav_put_uint8_t(buf, 5, engine_start);
    _mav_put_uint8_t(buf, 6, emergency_stop);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOGGLE_SWITCHES, buf, MAVLINK_MSG_ID_TOGGLE_SWITCHES_MIN_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_CRC);
#else
    mavlink_toggle_switches_t packet;
    packet.fuel_pump_1 = fuel_pump_1;
    packet.fuel_pump_2 = fuel_pump_2;
    packet.water_cooler_fan_1 = water_cooler_fan_1;
    packet.water_cooler_fan_2 = water_cooler_fan_2;
    packet.inter_cooler_fan = inter_cooler_fan;
    packet.engine_start = engine_start;
    packet.emergency_stop = emergency_stop;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOGGLE_SWITCHES, (const char *)&packet, MAVLINK_MSG_ID_TOGGLE_SWITCHES_MIN_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_CRC);
#endif
}

/**
 * @brief Send a toggle_switches message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_toggle_switches_send_struct(mavlink_channel_t chan, const mavlink_toggle_switches_t* toggle_switches)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_toggle_switches_send(chan, toggle_switches->fuel_pump_1, toggle_switches->fuel_pump_2, toggle_switches->water_cooler_fan_1, toggle_switches->water_cooler_fan_2, toggle_switches->inter_cooler_fan, toggle_switches->engine_start, toggle_switches->emergency_stop);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOGGLE_SWITCHES, (const char *)toggle_switches, MAVLINK_MSG_ID_TOGGLE_SWITCHES_MIN_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_CRC);
#endif
}

#if MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_toggle_switches_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t fuel_pump_1, uint8_t fuel_pump_2, uint8_t water_cooler_fan_1, uint8_t water_cooler_fan_2, uint8_t inter_cooler_fan, uint8_t engine_start, uint8_t emergency_stop)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, fuel_pump_1);
    _mav_put_uint8_t(buf, 1, fuel_pump_2);
    _mav_put_uint8_t(buf, 2, water_cooler_fan_1);
    _mav_put_uint8_t(buf, 3, water_cooler_fan_2);
    _mav_put_uint8_t(buf, 4, inter_cooler_fan);
    _mav_put_uint8_t(buf, 5, engine_start);
    _mav_put_uint8_t(buf, 6, emergency_stop);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOGGLE_SWITCHES, buf, MAVLINK_MSG_ID_TOGGLE_SWITCHES_MIN_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_CRC);
#else
    mavlink_toggle_switches_t *packet = (mavlink_toggle_switches_t *)msgbuf;
    packet->fuel_pump_1 = fuel_pump_1;
    packet->fuel_pump_2 = fuel_pump_2;
    packet->water_cooler_fan_1 = water_cooler_fan_1;
    packet->water_cooler_fan_2 = water_cooler_fan_2;
    packet->inter_cooler_fan = inter_cooler_fan;
    packet->engine_start = engine_start;
    packet->emergency_stop = emergency_stop;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOGGLE_SWITCHES, (const char *)packet, MAVLINK_MSG_ID_TOGGLE_SWITCHES_MIN_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN, MAVLINK_MSG_ID_TOGGLE_SWITCHES_CRC);
#endif
}
#endif

#endif

// MESSAGE TOGGLE_SWITCHES UNPACKING


/**
 * @brief Get field fuel_pump_1 from toggle_switches message
 *
 * @return  Fuel Pump 1 (amber)
 */
static inline uint8_t mavlink_msg_toggle_switches_get_fuel_pump_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field fuel_pump_2 from toggle_switches message
 *
 * @return  Fuel Pump 2 (amber)
 */
static inline uint8_t mavlink_msg_toggle_switches_get_fuel_pump_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field water_cooler_fan_1 from toggle_switches message
 *
 * @return  Water Cooler Fan 1 (blue)
 */
static inline uint8_t mavlink_msg_toggle_switches_get_water_cooler_fan_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field water_cooler_fan_2 from toggle_switches message
 *
 * @return  Water Cooler Fan 2 (blue)
 */
static inline uint8_t mavlink_msg_toggle_switches_get_water_cooler_fan_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field inter_cooler_fan from toggle_switches message
 *
 * @return  Inter Cooler Fan (blue)
 */
static inline uint8_t mavlink_msg_toggle_switches_get_inter_cooler_fan(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field engine_start from toggle_switches message
 *
 * @return  Engine Start (green)
 */
static inline uint8_t mavlink_msg_toggle_switches_get_engine_start(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field emergency_stop from toggle_switches message
 *
 * @return  Emergency STOP (red)
 */
static inline uint8_t mavlink_msg_toggle_switches_get_emergency_stop(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a toggle_switches message into a struct
 *
 * @param msg The message to decode
 * @param toggle_switches C-struct to decode the message contents into
 */
static inline void mavlink_msg_toggle_switches_decode(const mavlink_message_t* msg, mavlink_toggle_switches_t* toggle_switches)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    toggle_switches->fuel_pump_1 = mavlink_msg_toggle_switches_get_fuel_pump_1(msg);
    toggle_switches->fuel_pump_2 = mavlink_msg_toggle_switches_get_fuel_pump_2(msg);
    toggle_switches->water_cooler_fan_1 = mavlink_msg_toggle_switches_get_water_cooler_fan_1(msg);
    toggle_switches->water_cooler_fan_2 = mavlink_msg_toggle_switches_get_water_cooler_fan_2(msg);
    toggle_switches->inter_cooler_fan = mavlink_msg_toggle_switches_get_inter_cooler_fan(msg);
    toggle_switches->engine_start = mavlink_msg_toggle_switches_get_engine_start(msg);
    toggle_switches->emergency_stop = mavlink_msg_toggle_switches_get_emergency_stop(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN? msg->len : MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN;
        memset(toggle_switches, 0, MAVLINK_MSG_ID_TOGGLE_SWITCHES_LEN);
    memcpy(toggle_switches, _MAV_PAYLOAD(msg), len);
#endif
}
