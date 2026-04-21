#pragma once
// MESSAGE UAVCAN_ENGINE_STATUS_TEN PACKING

#define MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN 12922


typedef struct __mavlink_uavcan_engine_status_ten_t {
 uint64_t timestamp; /*<  time since system start (microseconds)*/
 float lambda_a; /*<  */
 float lambda_b; /*<  */
 float fuel_inj_work_hours_a; /*<  */
 float fuel_inj_work_hours_b; /*<  */
 float fuel_pressure_kpa; /*<  */
 float oil_pressure_kpa; /*<  */
 float boost_pressure_kpa; /*<  */
 float exhaust_valve_opening; /*<  */
 float atmospheric_pre_a_kpa; /*<  */
 float atmospheric_pre_b_kpa; /*<  */
 float supply_voltage_a; /*<  */
 float supply_voltage_b; /*<  */
 float flash_rwgvopntgt; /*<  */
 float bpc_pdesval; /*<  */
 float voltage_v; /*<  */
 float current_a; /*<  */
 float temperature_k; /*<  */
 int32_t rpm; /*<  */
 uint16_t cyl_exh_temp_1; /*<  */
 uint16_t cyl_exh_temp_2; /*<  */
 uint16_t cyl_exh_temp_3; /*<  */
 uint16_t cyl_exh_temp_4; /*<  */
 uint16_t emergstatime_count_a; /*<  */
 uint16_t emergstatime_count_b; /*<  */
 uint16_t throttle_opening_req_val_a; /*<  */
 uint16_t throttle_opening_req_val_b; /*<  */
 uint16_t speed_req_val_a; /*<  */
 uint16_t speed_req_val_b; /*<  */
 uint8_t source_node_id; /*<  UAVCAN source node id*/
 uint8_t ecu_index; /*<  The index of the publishing ECU*/
 uint8_t fuel_inj_work_sta_a; /*<  */
 uint8_t fuel_inj_work_sta_b; /*<  */
 uint8_t oil_temperature_c; /*<  */
 uint8_t engine_torque; /*<  */
 uint8_t boost_temp; /*<  */
 uint8_t ambient_temp; /*<  */
 uint8_t oil_level_mm; /*<  */
 uint8_t engine_powermode_req_a; /*<  */
 uint8_t engine_powermode_req_b; /*<  */
 uint8_t engine_aim_atl_ctlstatus_a; /*<  */
 uint8_t engine_aim_atl_ctlstatus_b; /*<  */
 uint8_t over_boost_speed_sta; /*<  */
 uint8_t ign_enable_state; /*<  */
 uint8_t sens_state_oxygen; /*<  */
 uint8_t sens_state_cyl_exh_temp; /*<  */
 uint8_t sens_state_oil_fuel; /*<  */
 uint8_t sens_state_boost_exh; /*<  */
 uint8_t sens_state_atmospheric_temp; /*<  */
 uint8_t msg_state_can; /*<  */
 uint8_t msg_volt_state_422_volt; /*<  */
 uint8_t power_rating_pct; /*<  */
 uint8_t esc_index; /*<  */
 uint8_t padding0[4]; /*<  */
} mavlink_uavcan_engine_status_ten_t;

#define MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN 128
#define MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_MIN_LEN 128
#define MAVLINK_MSG_ID_12922_LEN 128
#define MAVLINK_MSG_ID_12922_MIN_LEN 128

#define MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_CRC 162
#define MAVLINK_MSG_ID_12922_CRC 162

#define MAVLINK_MSG_UAVCAN_ENGINE_STATUS_TEN_FIELD_PADDING0_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UAVCAN_ENGINE_STATUS_TEN { \
    12922, \
    "UAVCAN_ENGINE_STATUS_TEN", \
    54, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_uavcan_engine_status_ten_t, timestamp) }, \
         { "source_node_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 100, offsetof(mavlink_uavcan_engine_status_ten_t, source_node_id) }, \
         { "ecu_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 101, offsetof(mavlink_uavcan_engine_status_ten_t, ecu_index) }, \
         { "lambda_a", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uavcan_engine_status_ten_t, lambda_a) }, \
         { "lambda_b", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uavcan_engine_status_ten_t, lambda_b) }, \
         { "fuel_inj_work_hours_a", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uavcan_engine_status_ten_t, fuel_inj_work_hours_a) }, \
         { "fuel_inj_work_hours_b", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uavcan_engine_status_ten_t, fuel_inj_work_hours_b) }, \
         { "fuel_inj_work_sta_a", NULL, MAVLINK_TYPE_UINT8_T, 0, 102, offsetof(mavlink_uavcan_engine_status_ten_t, fuel_inj_work_sta_a) }, \
         { "fuel_inj_work_sta_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 103, offsetof(mavlink_uavcan_engine_status_ten_t, fuel_inj_work_sta_b) }, \
         { "fuel_pressure_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uavcan_engine_status_ten_t, fuel_pressure_kpa) }, \
         { "oil_pressure_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uavcan_engine_status_ten_t, oil_pressure_kpa) }, \
         { "oil_temperature_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_uavcan_engine_status_ten_t, oil_temperature_c) }, \
         { "engine_torque", NULL, MAVLINK_TYPE_UINT8_T, 0, 105, offsetof(mavlink_uavcan_engine_status_ten_t, engine_torque) }, \
         { "boost_temp", NULL, MAVLINK_TYPE_UINT8_T, 0, 106, offsetof(mavlink_uavcan_engine_status_ten_t, boost_temp) }, \
         { "boost_pressure_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uavcan_engine_status_ten_t, boost_pressure_kpa) }, \
         { "exhaust_valve_opening", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_uavcan_engine_status_ten_t, exhaust_valve_opening) }, \
         { "ambient_temp", NULL, MAVLINK_TYPE_UINT8_T, 0, 107, offsetof(mavlink_uavcan_engine_status_ten_t, ambient_temp) }, \
         { "atmospheric_pre_a_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_uavcan_engine_status_ten_t, atmospheric_pre_a_kpa) }, \
         { "atmospheric_pre_b_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_uavcan_engine_status_ten_t, atmospheric_pre_b_kpa) }, \
         { "supply_voltage_a", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_uavcan_engine_status_ten_t, supply_voltage_a) }, \
         { "supply_voltage_b", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_uavcan_engine_status_ten_t, supply_voltage_b) }, \
         { "cyl_exh_temp_1", NULL, MAVLINK_TYPE_UINT16_T, 0, 80, offsetof(mavlink_uavcan_engine_status_ten_t, cyl_exh_temp_1) }, \
         { "cyl_exh_temp_2", NULL, MAVLINK_TYPE_UINT16_T, 0, 82, offsetof(mavlink_uavcan_engine_status_ten_t, cyl_exh_temp_2) }, \
         { "cyl_exh_temp_3", NULL, MAVLINK_TYPE_UINT16_T, 0, 84, offsetof(mavlink_uavcan_engine_status_ten_t, cyl_exh_temp_3) }, \
         { "cyl_exh_temp_4", NULL, MAVLINK_TYPE_UINT16_T, 0, 86, offsetof(mavlink_uavcan_engine_status_ten_t, cyl_exh_temp_4) }, \
         { "oil_level_mm", NULL, MAVLINK_TYPE_UINT8_T, 0, 108, offsetof(mavlink_uavcan_engine_status_ten_t, oil_level_mm) }, \
         { "emergstatime_count_a", NULL, MAVLINK_TYPE_UINT16_T, 0, 88, offsetof(mavlink_uavcan_engine_status_ten_t, emergstatime_count_a) }, \
         { "emergstatime_count_b", NULL, MAVLINK_TYPE_UINT16_T, 0, 90, offsetof(mavlink_uavcan_engine_status_ten_t, emergstatime_count_b) }, \
         { "engine_powermode_req_a", NULL, MAVLINK_TYPE_UINT8_T, 0, 109, offsetof(mavlink_uavcan_engine_status_ten_t, engine_powermode_req_a) }, \
         { "engine_powermode_req_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 110, offsetof(mavlink_uavcan_engine_status_ten_t, engine_powermode_req_b) }, \
         { "throttle_opening_req_val_a", NULL, MAVLINK_TYPE_UINT16_T, 0, 92, offsetof(mavlink_uavcan_engine_status_ten_t, throttle_opening_req_val_a) }, \
         { "throttle_opening_req_val_b", NULL, MAVLINK_TYPE_UINT16_T, 0, 94, offsetof(mavlink_uavcan_engine_status_ten_t, throttle_opening_req_val_b) }, \
         { "speed_req_val_a", NULL, MAVLINK_TYPE_UINT16_T, 0, 96, offsetof(mavlink_uavcan_engine_status_ten_t, speed_req_val_a) }, \
         { "speed_req_val_b", NULL, MAVLINK_TYPE_UINT16_T, 0, 98, offsetof(mavlink_uavcan_engine_status_ten_t, speed_req_val_b) }, \
         { "flash_rwgvopntgt", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_uavcan_engine_status_ten_t, flash_rwgvopntgt) }, \
         { "bpc_pdesval", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_uavcan_engine_status_ten_t, bpc_pdesval) }, \
         { "engine_aim_atl_ctlstatus_a", NULL, MAVLINK_TYPE_UINT8_T, 0, 111, offsetof(mavlink_uavcan_engine_status_ten_t, engine_aim_atl_ctlstatus_a) }, \
         { "engine_aim_atl_ctlstatus_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 112, offsetof(mavlink_uavcan_engine_status_ten_t, engine_aim_atl_ctlstatus_b) }, \
         { "over_boost_speed_sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 113, offsetof(mavlink_uavcan_engine_status_ten_t, over_boost_speed_sta) }, \
         { "ign_enable_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 114, offsetof(mavlink_uavcan_engine_status_ten_t, ign_enable_state) }, \
         { "sens_state_oxygen", NULL, MAVLINK_TYPE_UINT8_T, 0, 115, offsetof(mavlink_uavcan_engine_status_ten_t, sens_state_oxygen) }, \
         { "sens_state_cyl_exh_temp", NULL, MAVLINK_TYPE_UINT8_T, 0, 116, offsetof(mavlink_uavcan_engine_status_ten_t, sens_state_cyl_exh_temp) }, \
         { "sens_state_oil_fuel", NULL, MAVLINK_TYPE_UINT8_T, 0, 117, offsetof(mavlink_uavcan_engine_status_ten_t, sens_state_oil_fuel) }, \
         { "sens_state_boost_exh", NULL, MAVLINK_TYPE_UINT8_T, 0, 118, offsetof(mavlink_uavcan_engine_status_ten_t, sens_state_boost_exh) }, \
         { "sens_state_atmospheric_temp", NULL, MAVLINK_TYPE_UINT8_T, 0, 119, offsetof(mavlink_uavcan_engine_status_ten_t, sens_state_atmospheric_temp) }, \
         { "msg_state_can", NULL, MAVLINK_TYPE_UINT8_T, 0, 120, offsetof(mavlink_uavcan_engine_status_ten_t, msg_state_can) }, \
         { "msg_volt_state_422_volt", NULL, MAVLINK_TYPE_UINT8_T, 0, 121, offsetof(mavlink_uavcan_engine_status_ten_t, msg_volt_state_422_volt) }, \
         { "voltage_v", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_uavcan_engine_status_ten_t, voltage_v) }, \
         { "current_a", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_uavcan_engine_status_ten_t, current_a) }, \
         { "temperature_k", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_uavcan_engine_status_ten_t, temperature_k) }, \
         { "rpm", NULL, MAVLINK_TYPE_INT32_T, 0, 76, offsetof(mavlink_uavcan_engine_status_ten_t, rpm) }, \
         { "power_rating_pct", NULL, MAVLINK_TYPE_UINT8_T, 0, 122, offsetof(mavlink_uavcan_engine_status_ten_t, power_rating_pct) }, \
         { "esc_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 123, offsetof(mavlink_uavcan_engine_status_ten_t, esc_index) }, \
         { "padding0", NULL, MAVLINK_TYPE_UINT8_T, 4, 124, offsetof(mavlink_uavcan_engine_status_ten_t, padding0) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UAVCAN_ENGINE_STATUS_TEN { \
    "UAVCAN_ENGINE_STATUS_TEN", \
    54, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_uavcan_engine_status_ten_t, timestamp) }, \
         { "source_node_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 100, offsetof(mavlink_uavcan_engine_status_ten_t, source_node_id) }, \
         { "ecu_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 101, offsetof(mavlink_uavcan_engine_status_ten_t, ecu_index) }, \
         { "lambda_a", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uavcan_engine_status_ten_t, lambda_a) }, \
         { "lambda_b", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uavcan_engine_status_ten_t, lambda_b) }, \
         { "fuel_inj_work_hours_a", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uavcan_engine_status_ten_t, fuel_inj_work_hours_a) }, \
         { "fuel_inj_work_hours_b", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uavcan_engine_status_ten_t, fuel_inj_work_hours_b) }, \
         { "fuel_inj_work_sta_a", NULL, MAVLINK_TYPE_UINT8_T, 0, 102, offsetof(mavlink_uavcan_engine_status_ten_t, fuel_inj_work_sta_a) }, \
         { "fuel_inj_work_sta_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 103, offsetof(mavlink_uavcan_engine_status_ten_t, fuel_inj_work_sta_b) }, \
         { "fuel_pressure_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uavcan_engine_status_ten_t, fuel_pressure_kpa) }, \
         { "oil_pressure_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uavcan_engine_status_ten_t, oil_pressure_kpa) }, \
         { "oil_temperature_c", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_uavcan_engine_status_ten_t, oil_temperature_c) }, \
         { "engine_torque", NULL, MAVLINK_TYPE_UINT8_T, 0, 105, offsetof(mavlink_uavcan_engine_status_ten_t, engine_torque) }, \
         { "boost_temp", NULL, MAVLINK_TYPE_UINT8_T, 0, 106, offsetof(mavlink_uavcan_engine_status_ten_t, boost_temp) }, \
         { "boost_pressure_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uavcan_engine_status_ten_t, boost_pressure_kpa) }, \
         { "exhaust_valve_opening", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_uavcan_engine_status_ten_t, exhaust_valve_opening) }, \
         { "ambient_temp", NULL, MAVLINK_TYPE_UINT8_T, 0, 107, offsetof(mavlink_uavcan_engine_status_ten_t, ambient_temp) }, \
         { "atmospheric_pre_a_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_uavcan_engine_status_ten_t, atmospheric_pre_a_kpa) }, \
         { "atmospheric_pre_b_kpa", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_uavcan_engine_status_ten_t, atmospheric_pre_b_kpa) }, \
         { "supply_voltage_a", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_uavcan_engine_status_ten_t, supply_voltage_a) }, \
         { "supply_voltage_b", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_uavcan_engine_status_ten_t, supply_voltage_b) }, \
         { "cyl_exh_temp_1", NULL, MAVLINK_TYPE_UINT16_T, 0, 80, offsetof(mavlink_uavcan_engine_status_ten_t, cyl_exh_temp_1) }, \
         { "cyl_exh_temp_2", NULL, MAVLINK_TYPE_UINT16_T, 0, 82, offsetof(mavlink_uavcan_engine_status_ten_t, cyl_exh_temp_2) }, \
         { "cyl_exh_temp_3", NULL, MAVLINK_TYPE_UINT16_T, 0, 84, offsetof(mavlink_uavcan_engine_status_ten_t, cyl_exh_temp_3) }, \
         { "cyl_exh_temp_4", NULL, MAVLINK_TYPE_UINT16_T, 0, 86, offsetof(mavlink_uavcan_engine_status_ten_t, cyl_exh_temp_4) }, \
         { "oil_level_mm", NULL, MAVLINK_TYPE_UINT8_T, 0, 108, offsetof(mavlink_uavcan_engine_status_ten_t, oil_level_mm) }, \
         { "emergstatime_count_a", NULL, MAVLINK_TYPE_UINT16_T, 0, 88, offsetof(mavlink_uavcan_engine_status_ten_t, emergstatime_count_a) }, \
         { "emergstatime_count_b", NULL, MAVLINK_TYPE_UINT16_T, 0, 90, offsetof(mavlink_uavcan_engine_status_ten_t, emergstatime_count_b) }, \
         { "engine_powermode_req_a", NULL, MAVLINK_TYPE_UINT8_T, 0, 109, offsetof(mavlink_uavcan_engine_status_ten_t, engine_powermode_req_a) }, \
         { "engine_powermode_req_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 110, offsetof(mavlink_uavcan_engine_status_ten_t, engine_powermode_req_b) }, \
         { "throttle_opening_req_val_a", NULL, MAVLINK_TYPE_UINT16_T, 0, 92, offsetof(mavlink_uavcan_engine_status_ten_t, throttle_opening_req_val_a) }, \
         { "throttle_opening_req_val_b", NULL, MAVLINK_TYPE_UINT16_T, 0, 94, offsetof(mavlink_uavcan_engine_status_ten_t, throttle_opening_req_val_b) }, \
         { "speed_req_val_a", NULL, MAVLINK_TYPE_UINT16_T, 0, 96, offsetof(mavlink_uavcan_engine_status_ten_t, speed_req_val_a) }, \
         { "speed_req_val_b", NULL, MAVLINK_TYPE_UINT16_T, 0, 98, offsetof(mavlink_uavcan_engine_status_ten_t, speed_req_val_b) }, \
         { "flash_rwgvopntgt", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_uavcan_engine_status_ten_t, flash_rwgvopntgt) }, \
         { "bpc_pdesval", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_uavcan_engine_status_ten_t, bpc_pdesval) }, \
         { "engine_aim_atl_ctlstatus_a", NULL, MAVLINK_TYPE_UINT8_T, 0, 111, offsetof(mavlink_uavcan_engine_status_ten_t, engine_aim_atl_ctlstatus_a) }, \
         { "engine_aim_atl_ctlstatus_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 112, offsetof(mavlink_uavcan_engine_status_ten_t, engine_aim_atl_ctlstatus_b) }, \
         { "over_boost_speed_sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 113, offsetof(mavlink_uavcan_engine_status_ten_t, over_boost_speed_sta) }, \
         { "ign_enable_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 114, offsetof(mavlink_uavcan_engine_status_ten_t, ign_enable_state) }, \
         { "sens_state_oxygen", NULL, MAVLINK_TYPE_UINT8_T, 0, 115, offsetof(mavlink_uavcan_engine_status_ten_t, sens_state_oxygen) }, \
         { "sens_state_cyl_exh_temp", NULL, MAVLINK_TYPE_UINT8_T, 0, 116, offsetof(mavlink_uavcan_engine_status_ten_t, sens_state_cyl_exh_temp) }, \
         { "sens_state_oil_fuel", NULL, MAVLINK_TYPE_UINT8_T, 0, 117, offsetof(mavlink_uavcan_engine_status_ten_t, sens_state_oil_fuel) }, \
         { "sens_state_boost_exh", NULL, MAVLINK_TYPE_UINT8_T, 0, 118, offsetof(mavlink_uavcan_engine_status_ten_t, sens_state_boost_exh) }, \
         { "sens_state_atmospheric_temp", NULL, MAVLINK_TYPE_UINT8_T, 0, 119, offsetof(mavlink_uavcan_engine_status_ten_t, sens_state_atmospheric_temp) }, \
         { "msg_state_can", NULL, MAVLINK_TYPE_UINT8_T, 0, 120, offsetof(mavlink_uavcan_engine_status_ten_t, msg_state_can) }, \
         { "msg_volt_state_422_volt", NULL, MAVLINK_TYPE_UINT8_T, 0, 121, offsetof(mavlink_uavcan_engine_status_ten_t, msg_volt_state_422_volt) }, \
         { "voltage_v", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_uavcan_engine_status_ten_t, voltage_v) }, \
         { "current_a", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_uavcan_engine_status_ten_t, current_a) }, \
         { "temperature_k", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_uavcan_engine_status_ten_t, temperature_k) }, \
         { "rpm", NULL, MAVLINK_TYPE_INT32_T, 0, 76, offsetof(mavlink_uavcan_engine_status_ten_t, rpm) }, \
         { "power_rating_pct", NULL, MAVLINK_TYPE_UINT8_T, 0, 122, offsetof(mavlink_uavcan_engine_status_ten_t, power_rating_pct) }, \
         { "esc_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 123, offsetof(mavlink_uavcan_engine_status_ten_t, esc_index) }, \
         { "padding0", NULL, MAVLINK_TYPE_UINT8_T, 4, 124, offsetof(mavlink_uavcan_engine_status_ten_t, padding0) }, \
         } \
}
#endif

/**
 * @brief Pack a uavcan_engine_status_ten message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param source_node_id  UAVCAN source node id
 * @param ecu_index  The index of the publishing ECU
 * @param lambda_a  
 * @param lambda_b  
 * @param fuel_inj_work_hours_a  
 * @param fuel_inj_work_hours_b  
 * @param fuel_inj_work_sta_a  
 * @param fuel_inj_work_sta_b  
 * @param fuel_pressure_kpa  
 * @param oil_pressure_kpa  
 * @param oil_temperature_c  
 * @param engine_torque  
 * @param boost_temp  
 * @param boost_pressure_kpa  
 * @param exhaust_valve_opening  
 * @param ambient_temp  
 * @param atmospheric_pre_a_kpa  
 * @param atmospheric_pre_b_kpa  
 * @param supply_voltage_a  
 * @param supply_voltage_b  
 * @param cyl_exh_temp_1  
 * @param cyl_exh_temp_2  
 * @param cyl_exh_temp_3  
 * @param cyl_exh_temp_4  
 * @param oil_level_mm  
 * @param emergstatime_count_a  
 * @param emergstatime_count_b  
 * @param engine_powermode_req_a  
 * @param engine_powermode_req_b  
 * @param throttle_opening_req_val_a  
 * @param throttle_opening_req_val_b  
 * @param speed_req_val_a  
 * @param speed_req_val_b  
 * @param flash_rwgvopntgt  
 * @param bpc_pdesval  
 * @param engine_aim_atl_ctlstatus_a  
 * @param engine_aim_atl_ctlstatus_b  
 * @param over_boost_speed_sta  
 * @param ign_enable_state  
 * @param sens_state_oxygen  
 * @param sens_state_cyl_exh_temp  
 * @param sens_state_oil_fuel  
 * @param sens_state_boost_exh  
 * @param sens_state_atmospheric_temp  
 * @param msg_state_can  
 * @param msg_volt_state_422_volt  
 * @param voltage_v  
 * @param current_a  
 * @param temperature_k  
 * @param rpm  
 * @param power_rating_pct  
 * @param esc_index  
 * @param padding0  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t source_node_id, uint8_t ecu_index, float lambda_a, float lambda_b, float fuel_inj_work_hours_a, float fuel_inj_work_hours_b, uint8_t fuel_inj_work_sta_a, uint8_t fuel_inj_work_sta_b, float fuel_pressure_kpa, float oil_pressure_kpa, uint8_t oil_temperature_c, uint8_t engine_torque, uint8_t boost_temp, float boost_pressure_kpa, float exhaust_valve_opening, uint8_t ambient_temp, float atmospheric_pre_a_kpa, float atmospheric_pre_b_kpa, float supply_voltage_a, float supply_voltage_b, uint16_t cyl_exh_temp_1, uint16_t cyl_exh_temp_2, uint16_t cyl_exh_temp_3, uint16_t cyl_exh_temp_4, uint8_t oil_level_mm, uint16_t emergstatime_count_a, uint16_t emergstatime_count_b, uint8_t engine_powermode_req_a, uint8_t engine_powermode_req_b, uint16_t throttle_opening_req_val_a, uint16_t throttle_opening_req_val_b, uint16_t speed_req_val_a, uint16_t speed_req_val_b, float flash_rwgvopntgt, float bpc_pdesval, uint8_t engine_aim_atl_ctlstatus_a, uint8_t engine_aim_atl_ctlstatus_b, uint8_t over_boost_speed_sta, uint8_t ign_enable_state, uint8_t sens_state_oxygen, uint8_t sens_state_cyl_exh_temp, uint8_t sens_state_oil_fuel, uint8_t sens_state_boost_exh, uint8_t sens_state_atmospheric_temp, uint8_t msg_state_can, uint8_t msg_volt_state_422_volt, float voltage_v, float current_a, float temperature_k, int32_t rpm, uint8_t power_rating_pct, uint8_t esc_index, const uint8_t *padding0)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, lambda_a);
    _mav_put_float(buf, 12, lambda_b);
    _mav_put_float(buf, 16, fuel_inj_work_hours_a);
    _mav_put_float(buf, 20, fuel_inj_work_hours_b);
    _mav_put_float(buf, 24, fuel_pressure_kpa);
    _mav_put_float(buf, 28, oil_pressure_kpa);
    _mav_put_float(buf, 32, boost_pressure_kpa);
    _mav_put_float(buf, 36, exhaust_valve_opening);
    _mav_put_float(buf, 40, atmospheric_pre_a_kpa);
    _mav_put_float(buf, 44, atmospheric_pre_b_kpa);
    _mav_put_float(buf, 48, supply_voltage_a);
    _mav_put_float(buf, 52, supply_voltage_b);
    _mav_put_float(buf, 56, flash_rwgvopntgt);
    _mav_put_float(buf, 60, bpc_pdesval);
    _mav_put_float(buf, 64, voltage_v);
    _mav_put_float(buf, 68, current_a);
    _mav_put_float(buf, 72, temperature_k);
    _mav_put_int32_t(buf, 76, rpm);
    _mav_put_uint16_t(buf, 80, cyl_exh_temp_1);
    _mav_put_uint16_t(buf, 82, cyl_exh_temp_2);
    _mav_put_uint16_t(buf, 84, cyl_exh_temp_3);
    _mav_put_uint16_t(buf, 86, cyl_exh_temp_4);
    _mav_put_uint16_t(buf, 88, emergstatime_count_a);
    _mav_put_uint16_t(buf, 90, emergstatime_count_b);
    _mav_put_uint16_t(buf, 92, throttle_opening_req_val_a);
    _mav_put_uint16_t(buf, 94, throttle_opening_req_val_b);
    _mav_put_uint16_t(buf, 96, speed_req_val_a);
    _mav_put_uint16_t(buf, 98, speed_req_val_b);
    _mav_put_uint8_t(buf, 100, source_node_id);
    _mav_put_uint8_t(buf, 101, ecu_index);
    _mav_put_uint8_t(buf, 102, fuel_inj_work_sta_a);
    _mav_put_uint8_t(buf, 103, fuel_inj_work_sta_b);
    _mav_put_uint8_t(buf, 104, oil_temperature_c);
    _mav_put_uint8_t(buf, 105, engine_torque);
    _mav_put_uint8_t(buf, 106, boost_temp);
    _mav_put_uint8_t(buf, 107, ambient_temp);
    _mav_put_uint8_t(buf, 108, oil_level_mm);
    _mav_put_uint8_t(buf, 109, engine_powermode_req_a);
    _mav_put_uint8_t(buf, 110, engine_powermode_req_b);
    _mav_put_uint8_t(buf, 111, engine_aim_atl_ctlstatus_a);
    _mav_put_uint8_t(buf, 112, engine_aim_atl_ctlstatus_b);
    _mav_put_uint8_t(buf, 113, over_boost_speed_sta);
    _mav_put_uint8_t(buf, 114, ign_enable_state);
    _mav_put_uint8_t(buf, 115, sens_state_oxygen);
    _mav_put_uint8_t(buf, 116, sens_state_cyl_exh_temp);
    _mav_put_uint8_t(buf, 117, sens_state_oil_fuel);
    _mav_put_uint8_t(buf, 118, sens_state_boost_exh);
    _mav_put_uint8_t(buf, 119, sens_state_atmospheric_temp);
    _mav_put_uint8_t(buf, 120, msg_state_can);
    _mav_put_uint8_t(buf, 121, msg_volt_state_422_volt);
    _mav_put_uint8_t(buf, 122, power_rating_pct);
    _mav_put_uint8_t(buf, 123, esc_index);
    _mav_put_uint8_t_array(buf, 124, padding0, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN);
#else
    mavlink_uavcan_engine_status_ten_t packet;
    packet.timestamp = timestamp;
    packet.lambda_a = lambda_a;
    packet.lambda_b = lambda_b;
    packet.fuel_inj_work_hours_a = fuel_inj_work_hours_a;
    packet.fuel_inj_work_hours_b = fuel_inj_work_hours_b;
    packet.fuel_pressure_kpa = fuel_pressure_kpa;
    packet.oil_pressure_kpa = oil_pressure_kpa;
    packet.boost_pressure_kpa = boost_pressure_kpa;
    packet.exhaust_valve_opening = exhaust_valve_opening;
    packet.atmospheric_pre_a_kpa = atmospheric_pre_a_kpa;
    packet.atmospheric_pre_b_kpa = atmospheric_pre_b_kpa;
    packet.supply_voltage_a = supply_voltage_a;
    packet.supply_voltage_b = supply_voltage_b;
    packet.flash_rwgvopntgt = flash_rwgvopntgt;
    packet.bpc_pdesval = bpc_pdesval;
    packet.voltage_v = voltage_v;
    packet.current_a = current_a;
    packet.temperature_k = temperature_k;
    packet.rpm = rpm;
    packet.cyl_exh_temp_1 = cyl_exh_temp_1;
    packet.cyl_exh_temp_2 = cyl_exh_temp_2;
    packet.cyl_exh_temp_3 = cyl_exh_temp_3;
    packet.cyl_exh_temp_4 = cyl_exh_temp_4;
    packet.emergstatime_count_a = emergstatime_count_a;
    packet.emergstatime_count_b = emergstatime_count_b;
    packet.throttle_opening_req_val_a = throttle_opening_req_val_a;
    packet.throttle_opening_req_val_b = throttle_opening_req_val_b;
    packet.speed_req_val_a = speed_req_val_a;
    packet.speed_req_val_b = speed_req_val_b;
    packet.source_node_id = source_node_id;
    packet.ecu_index = ecu_index;
    packet.fuel_inj_work_sta_a = fuel_inj_work_sta_a;
    packet.fuel_inj_work_sta_b = fuel_inj_work_sta_b;
    packet.oil_temperature_c = oil_temperature_c;
    packet.engine_torque = engine_torque;
    packet.boost_temp = boost_temp;
    packet.ambient_temp = ambient_temp;
    packet.oil_level_mm = oil_level_mm;
    packet.engine_powermode_req_a = engine_powermode_req_a;
    packet.engine_powermode_req_b = engine_powermode_req_b;
    packet.engine_aim_atl_ctlstatus_a = engine_aim_atl_ctlstatus_a;
    packet.engine_aim_atl_ctlstatus_b = engine_aim_atl_ctlstatus_b;
    packet.over_boost_speed_sta = over_boost_speed_sta;
    packet.ign_enable_state = ign_enable_state;
    packet.sens_state_oxygen = sens_state_oxygen;
    packet.sens_state_cyl_exh_temp = sens_state_cyl_exh_temp;
    packet.sens_state_oil_fuel = sens_state_oil_fuel;
    packet.sens_state_boost_exh = sens_state_boost_exh;
    packet.sens_state_atmospheric_temp = sens_state_atmospheric_temp;
    packet.msg_state_can = msg_state_can;
    packet.msg_volt_state_422_volt = msg_volt_state_422_volt;
    packet.power_rating_pct = power_rating_pct;
    packet.esc_index = esc_index;
    mav_array_assign_uint8_t(packet.padding0, padding0, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_CRC);
}

/**
 * @brief Pack a uavcan_engine_status_ten message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param source_node_id  UAVCAN source node id
 * @param ecu_index  The index of the publishing ECU
 * @param lambda_a  
 * @param lambda_b  
 * @param fuel_inj_work_hours_a  
 * @param fuel_inj_work_hours_b  
 * @param fuel_inj_work_sta_a  
 * @param fuel_inj_work_sta_b  
 * @param fuel_pressure_kpa  
 * @param oil_pressure_kpa  
 * @param oil_temperature_c  
 * @param engine_torque  
 * @param boost_temp  
 * @param boost_pressure_kpa  
 * @param exhaust_valve_opening  
 * @param ambient_temp  
 * @param atmospheric_pre_a_kpa  
 * @param atmospheric_pre_b_kpa  
 * @param supply_voltage_a  
 * @param supply_voltage_b  
 * @param cyl_exh_temp_1  
 * @param cyl_exh_temp_2  
 * @param cyl_exh_temp_3  
 * @param cyl_exh_temp_4  
 * @param oil_level_mm  
 * @param emergstatime_count_a  
 * @param emergstatime_count_b  
 * @param engine_powermode_req_a  
 * @param engine_powermode_req_b  
 * @param throttle_opening_req_val_a  
 * @param throttle_opening_req_val_b  
 * @param speed_req_val_a  
 * @param speed_req_val_b  
 * @param flash_rwgvopntgt  
 * @param bpc_pdesval  
 * @param engine_aim_atl_ctlstatus_a  
 * @param engine_aim_atl_ctlstatus_b  
 * @param over_boost_speed_sta  
 * @param ign_enable_state  
 * @param sens_state_oxygen  
 * @param sens_state_cyl_exh_temp  
 * @param sens_state_oil_fuel  
 * @param sens_state_boost_exh  
 * @param sens_state_atmospheric_temp  
 * @param msg_state_can  
 * @param msg_volt_state_422_volt  
 * @param voltage_v  
 * @param current_a  
 * @param temperature_k  
 * @param rpm  
 * @param power_rating_pct  
 * @param esc_index  
 * @param padding0  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t source_node_id, uint8_t ecu_index, float lambda_a, float lambda_b, float fuel_inj_work_hours_a, float fuel_inj_work_hours_b, uint8_t fuel_inj_work_sta_a, uint8_t fuel_inj_work_sta_b, float fuel_pressure_kpa, float oil_pressure_kpa, uint8_t oil_temperature_c, uint8_t engine_torque, uint8_t boost_temp, float boost_pressure_kpa, float exhaust_valve_opening, uint8_t ambient_temp, float atmospheric_pre_a_kpa, float atmospheric_pre_b_kpa, float supply_voltage_a, float supply_voltage_b, uint16_t cyl_exh_temp_1, uint16_t cyl_exh_temp_2, uint16_t cyl_exh_temp_3, uint16_t cyl_exh_temp_4, uint8_t oil_level_mm, uint16_t emergstatime_count_a, uint16_t emergstatime_count_b, uint8_t engine_powermode_req_a, uint8_t engine_powermode_req_b, uint16_t throttle_opening_req_val_a, uint16_t throttle_opening_req_val_b, uint16_t speed_req_val_a, uint16_t speed_req_val_b, float flash_rwgvopntgt, float bpc_pdesval, uint8_t engine_aim_atl_ctlstatus_a, uint8_t engine_aim_atl_ctlstatus_b, uint8_t over_boost_speed_sta, uint8_t ign_enable_state, uint8_t sens_state_oxygen, uint8_t sens_state_cyl_exh_temp, uint8_t sens_state_oil_fuel, uint8_t sens_state_boost_exh, uint8_t sens_state_atmospheric_temp, uint8_t msg_state_can, uint8_t msg_volt_state_422_volt, float voltage_v, float current_a, float temperature_k, int32_t rpm, uint8_t power_rating_pct, uint8_t esc_index, const uint8_t *padding0)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, lambda_a);
    _mav_put_float(buf, 12, lambda_b);
    _mav_put_float(buf, 16, fuel_inj_work_hours_a);
    _mav_put_float(buf, 20, fuel_inj_work_hours_b);
    _mav_put_float(buf, 24, fuel_pressure_kpa);
    _mav_put_float(buf, 28, oil_pressure_kpa);
    _mav_put_float(buf, 32, boost_pressure_kpa);
    _mav_put_float(buf, 36, exhaust_valve_opening);
    _mav_put_float(buf, 40, atmospheric_pre_a_kpa);
    _mav_put_float(buf, 44, atmospheric_pre_b_kpa);
    _mav_put_float(buf, 48, supply_voltage_a);
    _mav_put_float(buf, 52, supply_voltage_b);
    _mav_put_float(buf, 56, flash_rwgvopntgt);
    _mav_put_float(buf, 60, bpc_pdesval);
    _mav_put_float(buf, 64, voltage_v);
    _mav_put_float(buf, 68, current_a);
    _mav_put_float(buf, 72, temperature_k);
    _mav_put_int32_t(buf, 76, rpm);
    _mav_put_uint16_t(buf, 80, cyl_exh_temp_1);
    _mav_put_uint16_t(buf, 82, cyl_exh_temp_2);
    _mav_put_uint16_t(buf, 84, cyl_exh_temp_3);
    _mav_put_uint16_t(buf, 86, cyl_exh_temp_4);
    _mav_put_uint16_t(buf, 88, emergstatime_count_a);
    _mav_put_uint16_t(buf, 90, emergstatime_count_b);
    _mav_put_uint16_t(buf, 92, throttle_opening_req_val_a);
    _mav_put_uint16_t(buf, 94, throttle_opening_req_val_b);
    _mav_put_uint16_t(buf, 96, speed_req_val_a);
    _mav_put_uint16_t(buf, 98, speed_req_val_b);
    _mav_put_uint8_t(buf, 100, source_node_id);
    _mav_put_uint8_t(buf, 101, ecu_index);
    _mav_put_uint8_t(buf, 102, fuel_inj_work_sta_a);
    _mav_put_uint8_t(buf, 103, fuel_inj_work_sta_b);
    _mav_put_uint8_t(buf, 104, oil_temperature_c);
    _mav_put_uint8_t(buf, 105, engine_torque);
    _mav_put_uint8_t(buf, 106, boost_temp);
    _mav_put_uint8_t(buf, 107, ambient_temp);
    _mav_put_uint8_t(buf, 108, oil_level_mm);
    _mav_put_uint8_t(buf, 109, engine_powermode_req_a);
    _mav_put_uint8_t(buf, 110, engine_powermode_req_b);
    _mav_put_uint8_t(buf, 111, engine_aim_atl_ctlstatus_a);
    _mav_put_uint8_t(buf, 112, engine_aim_atl_ctlstatus_b);
    _mav_put_uint8_t(buf, 113, over_boost_speed_sta);
    _mav_put_uint8_t(buf, 114, ign_enable_state);
    _mav_put_uint8_t(buf, 115, sens_state_oxygen);
    _mav_put_uint8_t(buf, 116, sens_state_cyl_exh_temp);
    _mav_put_uint8_t(buf, 117, sens_state_oil_fuel);
    _mav_put_uint8_t(buf, 118, sens_state_boost_exh);
    _mav_put_uint8_t(buf, 119, sens_state_atmospheric_temp);
    _mav_put_uint8_t(buf, 120, msg_state_can);
    _mav_put_uint8_t(buf, 121, msg_volt_state_422_volt);
    _mav_put_uint8_t(buf, 122, power_rating_pct);
    _mav_put_uint8_t(buf, 123, esc_index);
    _mav_put_uint8_t_array(buf, 124, padding0, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN);
#else
    mavlink_uavcan_engine_status_ten_t packet;
    packet.timestamp = timestamp;
    packet.lambda_a = lambda_a;
    packet.lambda_b = lambda_b;
    packet.fuel_inj_work_hours_a = fuel_inj_work_hours_a;
    packet.fuel_inj_work_hours_b = fuel_inj_work_hours_b;
    packet.fuel_pressure_kpa = fuel_pressure_kpa;
    packet.oil_pressure_kpa = oil_pressure_kpa;
    packet.boost_pressure_kpa = boost_pressure_kpa;
    packet.exhaust_valve_opening = exhaust_valve_opening;
    packet.atmospheric_pre_a_kpa = atmospheric_pre_a_kpa;
    packet.atmospheric_pre_b_kpa = atmospheric_pre_b_kpa;
    packet.supply_voltage_a = supply_voltage_a;
    packet.supply_voltage_b = supply_voltage_b;
    packet.flash_rwgvopntgt = flash_rwgvopntgt;
    packet.bpc_pdesval = bpc_pdesval;
    packet.voltage_v = voltage_v;
    packet.current_a = current_a;
    packet.temperature_k = temperature_k;
    packet.rpm = rpm;
    packet.cyl_exh_temp_1 = cyl_exh_temp_1;
    packet.cyl_exh_temp_2 = cyl_exh_temp_2;
    packet.cyl_exh_temp_3 = cyl_exh_temp_3;
    packet.cyl_exh_temp_4 = cyl_exh_temp_4;
    packet.emergstatime_count_a = emergstatime_count_a;
    packet.emergstatime_count_b = emergstatime_count_b;
    packet.throttle_opening_req_val_a = throttle_opening_req_val_a;
    packet.throttle_opening_req_val_b = throttle_opening_req_val_b;
    packet.speed_req_val_a = speed_req_val_a;
    packet.speed_req_val_b = speed_req_val_b;
    packet.source_node_id = source_node_id;
    packet.ecu_index = ecu_index;
    packet.fuel_inj_work_sta_a = fuel_inj_work_sta_a;
    packet.fuel_inj_work_sta_b = fuel_inj_work_sta_b;
    packet.oil_temperature_c = oil_temperature_c;
    packet.engine_torque = engine_torque;
    packet.boost_temp = boost_temp;
    packet.ambient_temp = ambient_temp;
    packet.oil_level_mm = oil_level_mm;
    packet.engine_powermode_req_a = engine_powermode_req_a;
    packet.engine_powermode_req_b = engine_powermode_req_b;
    packet.engine_aim_atl_ctlstatus_a = engine_aim_atl_ctlstatus_a;
    packet.engine_aim_atl_ctlstatus_b = engine_aim_atl_ctlstatus_b;
    packet.over_boost_speed_sta = over_boost_speed_sta;
    packet.ign_enable_state = ign_enable_state;
    packet.sens_state_oxygen = sens_state_oxygen;
    packet.sens_state_cyl_exh_temp = sens_state_cyl_exh_temp;
    packet.sens_state_oil_fuel = sens_state_oil_fuel;
    packet.sens_state_boost_exh = sens_state_boost_exh;
    packet.sens_state_atmospheric_temp = sens_state_atmospheric_temp;
    packet.msg_state_can = msg_state_can;
    packet.msg_volt_state_422_volt = msg_volt_state_422_volt;
    packet.power_rating_pct = power_rating_pct;
    packet.esc_index = esc_index;
    mav_array_memcpy(packet.padding0, padding0, sizeof(uint8_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN);
#endif
}

/**
 * @brief Pack a uavcan_engine_status_ten message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  time since system start (microseconds)
 * @param source_node_id  UAVCAN source node id
 * @param ecu_index  The index of the publishing ECU
 * @param lambda_a  
 * @param lambda_b  
 * @param fuel_inj_work_hours_a  
 * @param fuel_inj_work_hours_b  
 * @param fuel_inj_work_sta_a  
 * @param fuel_inj_work_sta_b  
 * @param fuel_pressure_kpa  
 * @param oil_pressure_kpa  
 * @param oil_temperature_c  
 * @param engine_torque  
 * @param boost_temp  
 * @param boost_pressure_kpa  
 * @param exhaust_valve_opening  
 * @param ambient_temp  
 * @param atmospheric_pre_a_kpa  
 * @param atmospheric_pre_b_kpa  
 * @param supply_voltage_a  
 * @param supply_voltage_b  
 * @param cyl_exh_temp_1  
 * @param cyl_exh_temp_2  
 * @param cyl_exh_temp_3  
 * @param cyl_exh_temp_4  
 * @param oil_level_mm  
 * @param emergstatime_count_a  
 * @param emergstatime_count_b  
 * @param engine_powermode_req_a  
 * @param engine_powermode_req_b  
 * @param throttle_opening_req_val_a  
 * @param throttle_opening_req_val_b  
 * @param speed_req_val_a  
 * @param speed_req_val_b  
 * @param flash_rwgvopntgt  
 * @param bpc_pdesval  
 * @param engine_aim_atl_ctlstatus_a  
 * @param engine_aim_atl_ctlstatus_b  
 * @param over_boost_speed_sta  
 * @param ign_enable_state  
 * @param sens_state_oxygen  
 * @param sens_state_cyl_exh_temp  
 * @param sens_state_oil_fuel  
 * @param sens_state_boost_exh  
 * @param sens_state_atmospheric_temp  
 * @param msg_state_can  
 * @param msg_volt_state_422_volt  
 * @param voltage_v  
 * @param current_a  
 * @param temperature_k  
 * @param rpm  
 * @param power_rating_pct  
 * @param esc_index  
 * @param padding0  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t source_node_id,uint8_t ecu_index,float lambda_a,float lambda_b,float fuel_inj_work_hours_a,float fuel_inj_work_hours_b,uint8_t fuel_inj_work_sta_a,uint8_t fuel_inj_work_sta_b,float fuel_pressure_kpa,float oil_pressure_kpa,uint8_t oil_temperature_c,uint8_t engine_torque,uint8_t boost_temp,float boost_pressure_kpa,float exhaust_valve_opening,uint8_t ambient_temp,float atmospheric_pre_a_kpa,float atmospheric_pre_b_kpa,float supply_voltage_a,float supply_voltage_b,uint16_t cyl_exh_temp_1,uint16_t cyl_exh_temp_2,uint16_t cyl_exh_temp_3,uint16_t cyl_exh_temp_4,uint8_t oil_level_mm,uint16_t emergstatime_count_a,uint16_t emergstatime_count_b,uint8_t engine_powermode_req_a,uint8_t engine_powermode_req_b,uint16_t throttle_opening_req_val_a,uint16_t throttle_opening_req_val_b,uint16_t speed_req_val_a,uint16_t speed_req_val_b,float flash_rwgvopntgt,float bpc_pdesval,uint8_t engine_aim_atl_ctlstatus_a,uint8_t engine_aim_atl_ctlstatus_b,uint8_t over_boost_speed_sta,uint8_t ign_enable_state,uint8_t sens_state_oxygen,uint8_t sens_state_cyl_exh_temp,uint8_t sens_state_oil_fuel,uint8_t sens_state_boost_exh,uint8_t sens_state_atmospheric_temp,uint8_t msg_state_can,uint8_t msg_volt_state_422_volt,float voltage_v,float current_a,float temperature_k,int32_t rpm,uint8_t power_rating_pct,uint8_t esc_index,const uint8_t *padding0)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, lambda_a);
    _mav_put_float(buf, 12, lambda_b);
    _mav_put_float(buf, 16, fuel_inj_work_hours_a);
    _mav_put_float(buf, 20, fuel_inj_work_hours_b);
    _mav_put_float(buf, 24, fuel_pressure_kpa);
    _mav_put_float(buf, 28, oil_pressure_kpa);
    _mav_put_float(buf, 32, boost_pressure_kpa);
    _mav_put_float(buf, 36, exhaust_valve_opening);
    _mav_put_float(buf, 40, atmospheric_pre_a_kpa);
    _mav_put_float(buf, 44, atmospheric_pre_b_kpa);
    _mav_put_float(buf, 48, supply_voltage_a);
    _mav_put_float(buf, 52, supply_voltage_b);
    _mav_put_float(buf, 56, flash_rwgvopntgt);
    _mav_put_float(buf, 60, bpc_pdesval);
    _mav_put_float(buf, 64, voltage_v);
    _mav_put_float(buf, 68, current_a);
    _mav_put_float(buf, 72, temperature_k);
    _mav_put_int32_t(buf, 76, rpm);
    _mav_put_uint16_t(buf, 80, cyl_exh_temp_1);
    _mav_put_uint16_t(buf, 82, cyl_exh_temp_2);
    _mav_put_uint16_t(buf, 84, cyl_exh_temp_3);
    _mav_put_uint16_t(buf, 86, cyl_exh_temp_4);
    _mav_put_uint16_t(buf, 88, emergstatime_count_a);
    _mav_put_uint16_t(buf, 90, emergstatime_count_b);
    _mav_put_uint16_t(buf, 92, throttle_opening_req_val_a);
    _mav_put_uint16_t(buf, 94, throttle_opening_req_val_b);
    _mav_put_uint16_t(buf, 96, speed_req_val_a);
    _mav_put_uint16_t(buf, 98, speed_req_val_b);
    _mav_put_uint8_t(buf, 100, source_node_id);
    _mav_put_uint8_t(buf, 101, ecu_index);
    _mav_put_uint8_t(buf, 102, fuel_inj_work_sta_a);
    _mav_put_uint8_t(buf, 103, fuel_inj_work_sta_b);
    _mav_put_uint8_t(buf, 104, oil_temperature_c);
    _mav_put_uint8_t(buf, 105, engine_torque);
    _mav_put_uint8_t(buf, 106, boost_temp);
    _mav_put_uint8_t(buf, 107, ambient_temp);
    _mav_put_uint8_t(buf, 108, oil_level_mm);
    _mav_put_uint8_t(buf, 109, engine_powermode_req_a);
    _mav_put_uint8_t(buf, 110, engine_powermode_req_b);
    _mav_put_uint8_t(buf, 111, engine_aim_atl_ctlstatus_a);
    _mav_put_uint8_t(buf, 112, engine_aim_atl_ctlstatus_b);
    _mav_put_uint8_t(buf, 113, over_boost_speed_sta);
    _mav_put_uint8_t(buf, 114, ign_enable_state);
    _mav_put_uint8_t(buf, 115, sens_state_oxygen);
    _mav_put_uint8_t(buf, 116, sens_state_cyl_exh_temp);
    _mav_put_uint8_t(buf, 117, sens_state_oil_fuel);
    _mav_put_uint8_t(buf, 118, sens_state_boost_exh);
    _mav_put_uint8_t(buf, 119, sens_state_atmospheric_temp);
    _mav_put_uint8_t(buf, 120, msg_state_can);
    _mav_put_uint8_t(buf, 121, msg_volt_state_422_volt);
    _mav_put_uint8_t(buf, 122, power_rating_pct);
    _mav_put_uint8_t(buf, 123, esc_index);
    _mav_put_uint8_t_array(buf, 124, padding0, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN);
#else
    mavlink_uavcan_engine_status_ten_t packet;
    packet.timestamp = timestamp;
    packet.lambda_a = lambda_a;
    packet.lambda_b = lambda_b;
    packet.fuel_inj_work_hours_a = fuel_inj_work_hours_a;
    packet.fuel_inj_work_hours_b = fuel_inj_work_hours_b;
    packet.fuel_pressure_kpa = fuel_pressure_kpa;
    packet.oil_pressure_kpa = oil_pressure_kpa;
    packet.boost_pressure_kpa = boost_pressure_kpa;
    packet.exhaust_valve_opening = exhaust_valve_opening;
    packet.atmospheric_pre_a_kpa = atmospheric_pre_a_kpa;
    packet.atmospheric_pre_b_kpa = atmospheric_pre_b_kpa;
    packet.supply_voltage_a = supply_voltage_a;
    packet.supply_voltage_b = supply_voltage_b;
    packet.flash_rwgvopntgt = flash_rwgvopntgt;
    packet.bpc_pdesval = bpc_pdesval;
    packet.voltage_v = voltage_v;
    packet.current_a = current_a;
    packet.temperature_k = temperature_k;
    packet.rpm = rpm;
    packet.cyl_exh_temp_1 = cyl_exh_temp_1;
    packet.cyl_exh_temp_2 = cyl_exh_temp_2;
    packet.cyl_exh_temp_3 = cyl_exh_temp_3;
    packet.cyl_exh_temp_4 = cyl_exh_temp_4;
    packet.emergstatime_count_a = emergstatime_count_a;
    packet.emergstatime_count_b = emergstatime_count_b;
    packet.throttle_opening_req_val_a = throttle_opening_req_val_a;
    packet.throttle_opening_req_val_b = throttle_opening_req_val_b;
    packet.speed_req_val_a = speed_req_val_a;
    packet.speed_req_val_b = speed_req_val_b;
    packet.source_node_id = source_node_id;
    packet.ecu_index = ecu_index;
    packet.fuel_inj_work_sta_a = fuel_inj_work_sta_a;
    packet.fuel_inj_work_sta_b = fuel_inj_work_sta_b;
    packet.oil_temperature_c = oil_temperature_c;
    packet.engine_torque = engine_torque;
    packet.boost_temp = boost_temp;
    packet.ambient_temp = ambient_temp;
    packet.oil_level_mm = oil_level_mm;
    packet.engine_powermode_req_a = engine_powermode_req_a;
    packet.engine_powermode_req_b = engine_powermode_req_b;
    packet.engine_aim_atl_ctlstatus_a = engine_aim_atl_ctlstatus_a;
    packet.engine_aim_atl_ctlstatus_b = engine_aim_atl_ctlstatus_b;
    packet.over_boost_speed_sta = over_boost_speed_sta;
    packet.ign_enable_state = ign_enable_state;
    packet.sens_state_oxygen = sens_state_oxygen;
    packet.sens_state_cyl_exh_temp = sens_state_cyl_exh_temp;
    packet.sens_state_oil_fuel = sens_state_oil_fuel;
    packet.sens_state_boost_exh = sens_state_boost_exh;
    packet.sens_state_atmospheric_temp = sens_state_atmospheric_temp;
    packet.msg_state_can = msg_state_can;
    packet.msg_volt_state_422_volt = msg_volt_state_422_volt;
    packet.power_rating_pct = power_rating_pct;
    packet.esc_index = esc_index;
    mav_array_assign_uint8_t(packet.padding0, padding0, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_CRC);
}

/**
 * @brief Encode a uavcan_engine_status_ten struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uavcan_engine_status_ten C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uavcan_engine_status_ten_t* uavcan_engine_status_ten)
{
    return mavlink_msg_uavcan_engine_status_ten_pack(system_id, component_id, msg, uavcan_engine_status_ten->timestamp, uavcan_engine_status_ten->source_node_id, uavcan_engine_status_ten->ecu_index, uavcan_engine_status_ten->lambda_a, uavcan_engine_status_ten->lambda_b, uavcan_engine_status_ten->fuel_inj_work_hours_a, uavcan_engine_status_ten->fuel_inj_work_hours_b, uavcan_engine_status_ten->fuel_inj_work_sta_a, uavcan_engine_status_ten->fuel_inj_work_sta_b, uavcan_engine_status_ten->fuel_pressure_kpa, uavcan_engine_status_ten->oil_pressure_kpa, uavcan_engine_status_ten->oil_temperature_c, uavcan_engine_status_ten->engine_torque, uavcan_engine_status_ten->boost_temp, uavcan_engine_status_ten->boost_pressure_kpa, uavcan_engine_status_ten->exhaust_valve_opening, uavcan_engine_status_ten->ambient_temp, uavcan_engine_status_ten->atmospheric_pre_a_kpa, uavcan_engine_status_ten->atmospheric_pre_b_kpa, uavcan_engine_status_ten->supply_voltage_a, uavcan_engine_status_ten->supply_voltage_b, uavcan_engine_status_ten->cyl_exh_temp_1, uavcan_engine_status_ten->cyl_exh_temp_2, uavcan_engine_status_ten->cyl_exh_temp_3, uavcan_engine_status_ten->cyl_exh_temp_4, uavcan_engine_status_ten->oil_level_mm, uavcan_engine_status_ten->emergstatime_count_a, uavcan_engine_status_ten->emergstatime_count_b, uavcan_engine_status_ten->engine_powermode_req_a, uavcan_engine_status_ten->engine_powermode_req_b, uavcan_engine_status_ten->throttle_opening_req_val_a, uavcan_engine_status_ten->throttle_opening_req_val_b, uavcan_engine_status_ten->speed_req_val_a, uavcan_engine_status_ten->speed_req_val_b, uavcan_engine_status_ten->flash_rwgvopntgt, uavcan_engine_status_ten->bpc_pdesval, uavcan_engine_status_ten->engine_aim_atl_ctlstatus_a, uavcan_engine_status_ten->engine_aim_atl_ctlstatus_b, uavcan_engine_status_ten->over_boost_speed_sta, uavcan_engine_status_ten->ign_enable_state, uavcan_engine_status_ten->sens_state_oxygen, uavcan_engine_status_ten->sens_state_cyl_exh_temp, uavcan_engine_status_ten->sens_state_oil_fuel, uavcan_engine_status_ten->sens_state_boost_exh, uavcan_engine_status_ten->sens_state_atmospheric_temp, uavcan_engine_status_ten->msg_state_can, uavcan_engine_status_ten->msg_volt_state_422_volt, uavcan_engine_status_ten->voltage_v, uavcan_engine_status_ten->current_a, uavcan_engine_status_ten->temperature_k, uavcan_engine_status_ten->rpm, uavcan_engine_status_ten->power_rating_pct, uavcan_engine_status_ten->esc_index, uavcan_engine_status_ten->padding0);
}

/**
 * @brief Encode a uavcan_engine_status_ten struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uavcan_engine_status_ten C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uavcan_engine_status_ten_t* uavcan_engine_status_ten)
{
    return mavlink_msg_uavcan_engine_status_ten_pack_chan(system_id, component_id, chan, msg, uavcan_engine_status_ten->timestamp, uavcan_engine_status_ten->source_node_id, uavcan_engine_status_ten->ecu_index, uavcan_engine_status_ten->lambda_a, uavcan_engine_status_ten->lambda_b, uavcan_engine_status_ten->fuel_inj_work_hours_a, uavcan_engine_status_ten->fuel_inj_work_hours_b, uavcan_engine_status_ten->fuel_inj_work_sta_a, uavcan_engine_status_ten->fuel_inj_work_sta_b, uavcan_engine_status_ten->fuel_pressure_kpa, uavcan_engine_status_ten->oil_pressure_kpa, uavcan_engine_status_ten->oil_temperature_c, uavcan_engine_status_ten->engine_torque, uavcan_engine_status_ten->boost_temp, uavcan_engine_status_ten->boost_pressure_kpa, uavcan_engine_status_ten->exhaust_valve_opening, uavcan_engine_status_ten->ambient_temp, uavcan_engine_status_ten->atmospheric_pre_a_kpa, uavcan_engine_status_ten->atmospheric_pre_b_kpa, uavcan_engine_status_ten->supply_voltage_a, uavcan_engine_status_ten->supply_voltage_b, uavcan_engine_status_ten->cyl_exh_temp_1, uavcan_engine_status_ten->cyl_exh_temp_2, uavcan_engine_status_ten->cyl_exh_temp_3, uavcan_engine_status_ten->cyl_exh_temp_4, uavcan_engine_status_ten->oil_level_mm, uavcan_engine_status_ten->emergstatime_count_a, uavcan_engine_status_ten->emergstatime_count_b, uavcan_engine_status_ten->engine_powermode_req_a, uavcan_engine_status_ten->engine_powermode_req_b, uavcan_engine_status_ten->throttle_opening_req_val_a, uavcan_engine_status_ten->throttle_opening_req_val_b, uavcan_engine_status_ten->speed_req_val_a, uavcan_engine_status_ten->speed_req_val_b, uavcan_engine_status_ten->flash_rwgvopntgt, uavcan_engine_status_ten->bpc_pdesval, uavcan_engine_status_ten->engine_aim_atl_ctlstatus_a, uavcan_engine_status_ten->engine_aim_atl_ctlstatus_b, uavcan_engine_status_ten->over_boost_speed_sta, uavcan_engine_status_ten->ign_enable_state, uavcan_engine_status_ten->sens_state_oxygen, uavcan_engine_status_ten->sens_state_cyl_exh_temp, uavcan_engine_status_ten->sens_state_oil_fuel, uavcan_engine_status_ten->sens_state_boost_exh, uavcan_engine_status_ten->sens_state_atmospheric_temp, uavcan_engine_status_ten->msg_state_can, uavcan_engine_status_ten->msg_volt_state_422_volt, uavcan_engine_status_ten->voltage_v, uavcan_engine_status_ten->current_a, uavcan_engine_status_ten->temperature_k, uavcan_engine_status_ten->rpm, uavcan_engine_status_ten->power_rating_pct, uavcan_engine_status_ten->esc_index, uavcan_engine_status_ten->padding0);
}

/**
 * @brief Encode a uavcan_engine_status_ten struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param uavcan_engine_status_ten C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_uavcan_engine_status_ten_t* uavcan_engine_status_ten)
{
    return mavlink_msg_uavcan_engine_status_ten_pack_status(system_id, component_id, _status, msg,  uavcan_engine_status_ten->timestamp, uavcan_engine_status_ten->source_node_id, uavcan_engine_status_ten->ecu_index, uavcan_engine_status_ten->lambda_a, uavcan_engine_status_ten->lambda_b, uavcan_engine_status_ten->fuel_inj_work_hours_a, uavcan_engine_status_ten->fuel_inj_work_hours_b, uavcan_engine_status_ten->fuel_inj_work_sta_a, uavcan_engine_status_ten->fuel_inj_work_sta_b, uavcan_engine_status_ten->fuel_pressure_kpa, uavcan_engine_status_ten->oil_pressure_kpa, uavcan_engine_status_ten->oil_temperature_c, uavcan_engine_status_ten->engine_torque, uavcan_engine_status_ten->boost_temp, uavcan_engine_status_ten->boost_pressure_kpa, uavcan_engine_status_ten->exhaust_valve_opening, uavcan_engine_status_ten->ambient_temp, uavcan_engine_status_ten->atmospheric_pre_a_kpa, uavcan_engine_status_ten->atmospheric_pre_b_kpa, uavcan_engine_status_ten->supply_voltage_a, uavcan_engine_status_ten->supply_voltage_b, uavcan_engine_status_ten->cyl_exh_temp_1, uavcan_engine_status_ten->cyl_exh_temp_2, uavcan_engine_status_ten->cyl_exh_temp_3, uavcan_engine_status_ten->cyl_exh_temp_4, uavcan_engine_status_ten->oil_level_mm, uavcan_engine_status_ten->emergstatime_count_a, uavcan_engine_status_ten->emergstatime_count_b, uavcan_engine_status_ten->engine_powermode_req_a, uavcan_engine_status_ten->engine_powermode_req_b, uavcan_engine_status_ten->throttle_opening_req_val_a, uavcan_engine_status_ten->throttle_opening_req_val_b, uavcan_engine_status_ten->speed_req_val_a, uavcan_engine_status_ten->speed_req_val_b, uavcan_engine_status_ten->flash_rwgvopntgt, uavcan_engine_status_ten->bpc_pdesval, uavcan_engine_status_ten->engine_aim_atl_ctlstatus_a, uavcan_engine_status_ten->engine_aim_atl_ctlstatus_b, uavcan_engine_status_ten->over_boost_speed_sta, uavcan_engine_status_ten->ign_enable_state, uavcan_engine_status_ten->sens_state_oxygen, uavcan_engine_status_ten->sens_state_cyl_exh_temp, uavcan_engine_status_ten->sens_state_oil_fuel, uavcan_engine_status_ten->sens_state_boost_exh, uavcan_engine_status_ten->sens_state_atmospheric_temp, uavcan_engine_status_ten->msg_state_can, uavcan_engine_status_ten->msg_volt_state_422_volt, uavcan_engine_status_ten->voltage_v, uavcan_engine_status_ten->current_a, uavcan_engine_status_ten->temperature_k, uavcan_engine_status_ten->rpm, uavcan_engine_status_ten->power_rating_pct, uavcan_engine_status_ten->esc_index, uavcan_engine_status_ten->padding0);
}

/**
 * @brief Send a uavcan_engine_status_ten message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  time since system start (microseconds)
 * @param source_node_id  UAVCAN source node id
 * @param ecu_index  The index of the publishing ECU
 * @param lambda_a  
 * @param lambda_b  
 * @param fuel_inj_work_hours_a  
 * @param fuel_inj_work_hours_b  
 * @param fuel_inj_work_sta_a  
 * @param fuel_inj_work_sta_b  
 * @param fuel_pressure_kpa  
 * @param oil_pressure_kpa  
 * @param oil_temperature_c  
 * @param engine_torque  
 * @param boost_temp  
 * @param boost_pressure_kpa  
 * @param exhaust_valve_opening  
 * @param ambient_temp  
 * @param atmospheric_pre_a_kpa  
 * @param atmospheric_pre_b_kpa  
 * @param supply_voltage_a  
 * @param supply_voltage_b  
 * @param cyl_exh_temp_1  
 * @param cyl_exh_temp_2  
 * @param cyl_exh_temp_3  
 * @param cyl_exh_temp_4  
 * @param oil_level_mm  
 * @param emergstatime_count_a  
 * @param emergstatime_count_b  
 * @param engine_powermode_req_a  
 * @param engine_powermode_req_b  
 * @param throttle_opening_req_val_a  
 * @param throttle_opening_req_val_b  
 * @param speed_req_val_a  
 * @param speed_req_val_b  
 * @param flash_rwgvopntgt  
 * @param bpc_pdesval  
 * @param engine_aim_atl_ctlstatus_a  
 * @param engine_aim_atl_ctlstatus_b  
 * @param over_boost_speed_sta  
 * @param ign_enable_state  
 * @param sens_state_oxygen  
 * @param sens_state_cyl_exh_temp  
 * @param sens_state_oil_fuel  
 * @param sens_state_boost_exh  
 * @param sens_state_atmospheric_temp  
 * @param msg_state_can  
 * @param msg_volt_state_422_volt  
 * @param voltage_v  
 * @param current_a  
 * @param temperature_k  
 * @param rpm  
 * @param power_rating_pct  
 * @param esc_index  
 * @param padding0  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uavcan_engine_status_ten_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t source_node_id, uint8_t ecu_index, float lambda_a, float lambda_b, float fuel_inj_work_hours_a, float fuel_inj_work_hours_b, uint8_t fuel_inj_work_sta_a, uint8_t fuel_inj_work_sta_b, float fuel_pressure_kpa, float oil_pressure_kpa, uint8_t oil_temperature_c, uint8_t engine_torque, uint8_t boost_temp, float boost_pressure_kpa, float exhaust_valve_opening, uint8_t ambient_temp, float atmospheric_pre_a_kpa, float atmospheric_pre_b_kpa, float supply_voltage_a, float supply_voltage_b, uint16_t cyl_exh_temp_1, uint16_t cyl_exh_temp_2, uint16_t cyl_exh_temp_3, uint16_t cyl_exh_temp_4, uint8_t oil_level_mm, uint16_t emergstatime_count_a, uint16_t emergstatime_count_b, uint8_t engine_powermode_req_a, uint8_t engine_powermode_req_b, uint16_t throttle_opening_req_val_a, uint16_t throttle_opening_req_val_b, uint16_t speed_req_val_a, uint16_t speed_req_val_b, float flash_rwgvopntgt, float bpc_pdesval, uint8_t engine_aim_atl_ctlstatus_a, uint8_t engine_aim_atl_ctlstatus_b, uint8_t over_boost_speed_sta, uint8_t ign_enable_state, uint8_t sens_state_oxygen, uint8_t sens_state_cyl_exh_temp, uint8_t sens_state_oil_fuel, uint8_t sens_state_boost_exh, uint8_t sens_state_atmospheric_temp, uint8_t msg_state_can, uint8_t msg_volt_state_422_volt, float voltage_v, float current_a, float temperature_k, int32_t rpm, uint8_t power_rating_pct, uint8_t esc_index, const uint8_t *padding0)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, lambda_a);
    _mav_put_float(buf, 12, lambda_b);
    _mav_put_float(buf, 16, fuel_inj_work_hours_a);
    _mav_put_float(buf, 20, fuel_inj_work_hours_b);
    _mav_put_float(buf, 24, fuel_pressure_kpa);
    _mav_put_float(buf, 28, oil_pressure_kpa);
    _mav_put_float(buf, 32, boost_pressure_kpa);
    _mav_put_float(buf, 36, exhaust_valve_opening);
    _mav_put_float(buf, 40, atmospheric_pre_a_kpa);
    _mav_put_float(buf, 44, atmospheric_pre_b_kpa);
    _mav_put_float(buf, 48, supply_voltage_a);
    _mav_put_float(buf, 52, supply_voltage_b);
    _mav_put_float(buf, 56, flash_rwgvopntgt);
    _mav_put_float(buf, 60, bpc_pdesval);
    _mav_put_float(buf, 64, voltage_v);
    _mav_put_float(buf, 68, current_a);
    _mav_put_float(buf, 72, temperature_k);
    _mav_put_int32_t(buf, 76, rpm);
    _mav_put_uint16_t(buf, 80, cyl_exh_temp_1);
    _mav_put_uint16_t(buf, 82, cyl_exh_temp_2);
    _mav_put_uint16_t(buf, 84, cyl_exh_temp_3);
    _mav_put_uint16_t(buf, 86, cyl_exh_temp_4);
    _mav_put_uint16_t(buf, 88, emergstatime_count_a);
    _mav_put_uint16_t(buf, 90, emergstatime_count_b);
    _mav_put_uint16_t(buf, 92, throttle_opening_req_val_a);
    _mav_put_uint16_t(buf, 94, throttle_opening_req_val_b);
    _mav_put_uint16_t(buf, 96, speed_req_val_a);
    _mav_put_uint16_t(buf, 98, speed_req_val_b);
    _mav_put_uint8_t(buf, 100, source_node_id);
    _mav_put_uint8_t(buf, 101, ecu_index);
    _mav_put_uint8_t(buf, 102, fuel_inj_work_sta_a);
    _mav_put_uint8_t(buf, 103, fuel_inj_work_sta_b);
    _mav_put_uint8_t(buf, 104, oil_temperature_c);
    _mav_put_uint8_t(buf, 105, engine_torque);
    _mav_put_uint8_t(buf, 106, boost_temp);
    _mav_put_uint8_t(buf, 107, ambient_temp);
    _mav_put_uint8_t(buf, 108, oil_level_mm);
    _mav_put_uint8_t(buf, 109, engine_powermode_req_a);
    _mav_put_uint8_t(buf, 110, engine_powermode_req_b);
    _mav_put_uint8_t(buf, 111, engine_aim_atl_ctlstatus_a);
    _mav_put_uint8_t(buf, 112, engine_aim_atl_ctlstatus_b);
    _mav_put_uint8_t(buf, 113, over_boost_speed_sta);
    _mav_put_uint8_t(buf, 114, ign_enable_state);
    _mav_put_uint8_t(buf, 115, sens_state_oxygen);
    _mav_put_uint8_t(buf, 116, sens_state_cyl_exh_temp);
    _mav_put_uint8_t(buf, 117, sens_state_oil_fuel);
    _mav_put_uint8_t(buf, 118, sens_state_boost_exh);
    _mav_put_uint8_t(buf, 119, sens_state_atmospheric_temp);
    _mav_put_uint8_t(buf, 120, msg_state_can);
    _mav_put_uint8_t(buf, 121, msg_volt_state_422_volt);
    _mav_put_uint8_t(buf, 122, power_rating_pct);
    _mav_put_uint8_t(buf, 123, esc_index);
    _mav_put_uint8_t_array(buf, 124, padding0, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN, buf, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_CRC);
#else
    mavlink_uavcan_engine_status_ten_t packet;
    packet.timestamp = timestamp;
    packet.lambda_a = lambda_a;
    packet.lambda_b = lambda_b;
    packet.fuel_inj_work_hours_a = fuel_inj_work_hours_a;
    packet.fuel_inj_work_hours_b = fuel_inj_work_hours_b;
    packet.fuel_pressure_kpa = fuel_pressure_kpa;
    packet.oil_pressure_kpa = oil_pressure_kpa;
    packet.boost_pressure_kpa = boost_pressure_kpa;
    packet.exhaust_valve_opening = exhaust_valve_opening;
    packet.atmospheric_pre_a_kpa = atmospheric_pre_a_kpa;
    packet.atmospheric_pre_b_kpa = atmospheric_pre_b_kpa;
    packet.supply_voltage_a = supply_voltage_a;
    packet.supply_voltage_b = supply_voltage_b;
    packet.flash_rwgvopntgt = flash_rwgvopntgt;
    packet.bpc_pdesval = bpc_pdesval;
    packet.voltage_v = voltage_v;
    packet.current_a = current_a;
    packet.temperature_k = temperature_k;
    packet.rpm = rpm;
    packet.cyl_exh_temp_1 = cyl_exh_temp_1;
    packet.cyl_exh_temp_2 = cyl_exh_temp_2;
    packet.cyl_exh_temp_3 = cyl_exh_temp_3;
    packet.cyl_exh_temp_4 = cyl_exh_temp_4;
    packet.emergstatime_count_a = emergstatime_count_a;
    packet.emergstatime_count_b = emergstatime_count_b;
    packet.throttle_opening_req_val_a = throttle_opening_req_val_a;
    packet.throttle_opening_req_val_b = throttle_opening_req_val_b;
    packet.speed_req_val_a = speed_req_val_a;
    packet.speed_req_val_b = speed_req_val_b;
    packet.source_node_id = source_node_id;
    packet.ecu_index = ecu_index;
    packet.fuel_inj_work_sta_a = fuel_inj_work_sta_a;
    packet.fuel_inj_work_sta_b = fuel_inj_work_sta_b;
    packet.oil_temperature_c = oil_temperature_c;
    packet.engine_torque = engine_torque;
    packet.boost_temp = boost_temp;
    packet.ambient_temp = ambient_temp;
    packet.oil_level_mm = oil_level_mm;
    packet.engine_powermode_req_a = engine_powermode_req_a;
    packet.engine_powermode_req_b = engine_powermode_req_b;
    packet.engine_aim_atl_ctlstatus_a = engine_aim_atl_ctlstatus_a;
    packet.engine_aim_atl_ctlstatus_b = engine_aim_atl_ctlstatus_b;
    packet.over_boost_speed_sta = over_boost_speed_sta;
    packet.ign_enable_state = ign_enable_state;
    packet.sens_state_oxygen = sens_state_oxygen;
    packet.sens_state_cyl_exh_temp = sens_state_cyl_exh_temp;
    packet.sens_state_oil_fuel = sens_state_oil_fuel;
    packet.sens_state_boost_exh = sens_state_boost_exh;
    packet.sens_state_atmospheric_temp = sens_state_atmospheric_temp;
    packet.msg_state_can = msg_state_can;
    packet.msg_volt_state_422_volt = msg_volt_state_422_volt;
    packet.power_rating_pct = power_rating_pct;
    packet.esc_index = esc_index;
    mav_array_assign_uint8_t(packet.padding0, padding0, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN, (const char *)&packet, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_CRC);
#endif
}

/**
 * @brief Send a uavcan_engine_status_ten message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uavcan_engine_status_ten_send_struct(mavlink_channel_t chan, const mavlink_uavcan_engine_status_ten_t* uavcan_engine_status_ten)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uavcan_engine_status_ten_send(chan, uavcan_engine_status_ten->timestamp, uavcan_engine_status_ten->source_node_id, uavcan_engine_status_ten->ecu_index, uavcan_engine_status_ten->lambda_a, uavcan_engine_status_ten->lambda_b, uavcan_engine_status_ten->fuel_inj_work_hours_a, uavcan_engine_status_ten->fuel_inj_work_hours_b, uavcan_engine_status_ten->fuel_inj_work_sta_a, uavcan_engine_status_ten->fuel_inj_work_sta_b, uavcan_engine_status_ten->fuel_pressure_kpa, uavcan_engine_status_ten->oil_pressure_kpa, uavcan_engine_status_ten->oil_temperature_c, uavcan_engine_status_ten->engine_torque, uavcan_engine_status_ten->boost_temp, uavcan_engine_status_ten->boost_pressure_kpa, uavcan_engine_status_ten->exhaust_valve_opening, uavcan_engine_status_ten->ambient_temp, uavcan_engine_status_ten->atmospheric_pre_a_kpa, uavcan_engine_status_ten->atmospheric_pre_b_kpa, uavcan_engine_status_ten->supply_voltage_a, uavcan_engine_status_ten->supply_voltage_b, uavcan_engine_status_ten->cyl_exh_temp_1, uavcan_engine_status_ten->cyl_exh_temp_2, uavcan_engine_status_ten->cyl_exh_temp_3, uavcan_engine_status_ten->cyl_exh_temp_4, uavcan_engine_status_ten->oil_level_mm, uavcan_engine_status_ten->emergstatime_count_a, uavcan_engine_status_ten->emergstatime_count_b, uavcan_engine_status_ten->engine_powermode_req_a, uavcan_engine_status_ten->engine_powermode_req_b, uavcan_engine_status_ten->throttle_opening_req_val_a, uavcan_engine_status_ten->throttle_opening_req_val_b, uavcan_engine_status_ten->speed_req_val_a, uavcan_engine_status_ten->speed_req_val_b, uavcan_engine_status_ten->flash_rwgvopntgt, uavcan_engine_status_ten->bpc_pdesval, uavcan_engine_status_ten->engine_aim_atl_ctlstatus_a, uavcan_engine_status_ten->engine_aim_atl_ctlstatus_b, uavcan_engine_status_ten->over_boost_speed_sta, uavcan_engine_status_ten->ign_enable_state, uavcan_engine_status_ten->sens_state_oxygen, uavcan_engine_status_ten->sens_state_cyl_exh_temp, uavcan_engine_status_ten->sens_state_oil_fuel, uavcan_engine_status_ten->sens_state_boost_exh, uavcan_engine_status_ten->sens_state_atmospheric_temp, uavcan_engine_status_ten->msg_state_can, uavcan_engine_status_ten->msg_volt_state_422_volt, uavcan_engine_status_ten->voltage_v, uavcan_engine_status_ten->current_a, uavcan_engine_status_ten->temperature_k, uavcan_engine_status_ten->rpm, uavcan_engine_status_ten->power_rating_pct, uavcan_engine_status_ten->esc_index, uavcan_engine_status_ten->padding0);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN, (const char *)uavcan_engine_status_ten, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_CRC);
#endif
}

#if MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uavcan_engine_status_ten_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t source_node_id, uint8_t ecu_index, float lambda_a, float lambda_b, float fuel_inj_work_hours_a, float fuel_inj_work_hours_b, uint8_t fuel_inj_work_sta_a, uint8_t fuel_inj_work_sta_b, float fuel_pressure_kpa, float oil_pressure_kpa, uint8_t oil_temperature_c, uint8_t engine_torque, uint8_t boost_temp, float boost_pressure_kpa, float exhaust_valve_opening, uint8_t ambient_temp, float atmospheric_pre_a_kpa, float atmospheric_pre_b_kpa, float supply_voltage_a, float supply_voltage_b, uint16_t cyl_exh_temp_1, uint16_t cyl_exh_temp_2, uint16_t cyl_exh_temp_3, uint16_t cyl_exh_temp_4, uint8_t oil_level_mm, uint16_t emergstatime_count_a, uint16_t emergstatime_count_b, uint8_t engine_powermode_req_a, uint8_t engine_powermode_req_b, uint16_t throttle_opening_req_val_a, uint16_t throttle_opening_req_val_b, uint16_t speed_req_val_a, uint16_t speed_req_val_b, float flash_rwgvopntgt, float bpc_pdesval, uint8_t engine_aim_atl_ctlstatus_a, uint8_t engine_aim_atl_ctlstatus_b, uint8_t over_boost_speed_sta, uint8_t ign_enable_state, uint8_t sens_state_oxygen, uint8_t sens_state_cyl_exh_temp, uint8_t sens_state_oil_fuel, uint8_t sens_state_boost_exh, uint8_t sens_state_atmospheric_temp, uint8_t msg_state_can, uint8_t msg_volt_state_422_volt, float voltage_v, float current_a, float temperature_k, int32_t rpm, uint8_t power_rating_pct, uint8_t esc_index, const uint8_t *padding0)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, lambda_a);
    _mav_put_float(buf, 12, lambda_b);
    _mav_put_float(buf, 16, fuel_inj_work_hours_a);
    _mav_put_float(buf, 20, fuel_inj_work_hours_b);
    _mav_put_float(buf, 24, fuel_pressure_kpa);
    _mav_put_float(buf, 28, oil_pressure_kpa);
    _mav_put_float(buf, 32, boost_pressure_kpa);
    _mav_put_float(buf, 36, exhaust_valve_opening);
    _mav_put_float(buf, 40, atmospheric_pre_a_kpa);
    _mav_put_float(buf, 44, atmospheric_pre_b_kpa);
    _mav_put_float(buf, 48, supply_voltage_a);
    _mav_put_float(buf, 52, supply_voltage_b);
    _mav_put_float(buf, 56, flash_rwgvopntgt);
    _mav_put_float(buf, 60, bpc_pdesval);
    _mav_put_float(buf, 64, voltage_v);
    _mav_put_float(buf, 68, current_a);
    _mav_put_float(buf, 72, temperature_k);
    _mav_put_int32_t(buf, 76, rpm);
    _mav_put_uint16_t(buf, 80, cyl_exh_temp_1);
    _mav_put_uint16_t(buf, 82, cyl_exh_temp_2);
    _mav_put_uint16_t(buf, 84, cyl_exh_temp_3);
    _mav_put_uint16_t(buf, 86, cyl_exh_temp_4);
    _mav_put_uint16_t(buf, 88, emergstatime_count_a);
    _mav_put_uint16_t(buf, 90, emergstatime_count_b);
    _mav_put_uint16_t(buf, 92, throttle_opening_req_val_a);
    _mav_put_uint16_t(buf, 94, throttle_opening_req_val_b);
    _mav_put_uint16_t(buf, 96, speed_req_val_a);
    _mav_put_uint16_t(buf, 98, speed_req_val_b);
    _mav_put_uint8_t(buf, 100, source_node_id);
    _mav_put_uint8_t(buf, 101, ecu_index);
    _mav_put_uint8_t(buf, 102, fuel_inj_work_sta_a);
    _mav_put_uint8_t(buf, 103, fuel_inj_work_sta_b);
    _mav_put_uint8_t(buf, 104, oil_temperature_c);
    _mav_put_uint8_t(buf, 105, engine_torque);
    _mav_put_uint8_t(buf, 106, boost_temp);
    _mav_put_uint8_t(buf, 107, ambient_temp);
    _mav_put_uint8_t(buf, 108, oil_level_mm);
    _mav_put_uint8_t(buf, 109, engine_powermode_req_a);
    _mav_put_uint8_t(buf, 110, engine_powermode_req_b);
    _mav_put_uint8_t(buf, 111, engine_aim_atl_ctlstatus_a);
    _mav_put_uint8_t(buf, 112, engine_aim_atl_ctlstatus_b);
    _mav_put_uint8_t(buf, 113, over_boost_speed_sta);
    _mav_put_uint8_t(buf, 114, ign_enable_state);
    _mav_put_uint8_t(buf, 115, sens_state_oxygen);
    _mav_put_uint8_t(buf, 116, sens_state_cyl_exh_temp);
    _mav_put_uint8_t(buf, 117, sens_state_oil_fuel);
    _mav_put_uint8_t(buf, 118, sens_state_boost_exh);
    _mav_put_uint8_t(buf, 119, sens_state_atmospheric_temp);
    _mav_put_uint8_t(buf, 120, msg_state_can);
    _mav_put_uint8_t(buf, 121, msg_volt_state_422_volt);
    _mav_put_uint8_t(buf, 122, power_rating_pct);
    _mav_put_uint8_t(buf, 123, esc_index);
    _mav_put_uint8_t_array(buf, 124, padding0, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN, buf, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_CRC);
#else
    mavlink_uavcan_engine_status_ten_t *packet = (mavlink_uavcan_engine_status_ten_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->lambda_a = lambda_a;
    packet->lambda_b = lambda_b;
    packet->fuel_inj_work_hours_a = fuel_inj_work_hours_a;
    packet->fuel_inj_work_hours_b = fuel_inj_work_hours_b;
    packet->fuel_pressure_kpa = fuel_pressure_kpa;
    packet->oil_pressure_kpa = oil_pressure_kpa;
    packet->boost_pressure_kpa = boost_pressure_kpa;
    packet->exhaust_valve_opening = exhaust_valve_opening;
    packet->atmospheric_pre_a_kpa = atmospheric_pre_a_kpa;
    packet->atmospheric_pre_b_kpa = atmospheric_pre_b_kpa;
    packet->supply_voltage_a = supply_voltage_a;
    packet->supply_voltage_b = supply_voltage_b;
    packet->flash_rwgvopntgt = flash_rwgvopntgt;
    packet->bpc_pdesval = bpc_pdesval;
    packet->voltage_v = voltage_v;
    packet->current_a = current_a;
    packet->temperature_k = temperature_k;
    packet->rpm = rpm;
    packet->cyl_exh_temp_1 = cyl_exh_temp_1;
    packet->cyl_exh_temp_2 = cyl_exh_temp_2;
    packet->cyl_exh_temp_3 = cyl_exh_temp_3;
    packet->cyl_exh_temp_4 = cyl_exh_temp_4;
    packet->emergstatime_count_a = emergstatime_count_a;
    packet->emergstatime_count_b = emergstatime_count_b;
    packet->throttle_opening_req_val_a = throttle_opening_req_val_a;
    packet->throttle_opening_req_val_b = throttle_opening_req_val_b;
    packet->speed_req_val_a = speed_req_val_a;
    packet->speed_req_val_b = speed_req_val_b;
    packet->source_node_id = source_node_id;
    packet->ecu_index = ecu_index;
    packet->fuel_inj_work_sta_a = fuel_inj_work_sta_a;
    packet->fuel_inj_work_sta_b = fuel_inj_work_sta_b;
    packet->oil_temperature_c = oil_temperature_c;
    packet->engine_torque = engine_torque;
    packet->boost_temp = boost_temp;
    packet->ambient_temp = ambient_temp;
    packet->oil_level_mm = oil_level_mm;
    packet->engine_powermode_req_a = engine_powermode_req_a;
    packet->engine_powermode_req_b = engine_powermode_req_b;
    packet->engine_aim_atl_ctlstatus_a = engine_aim_atl_ctlstatus_a;
    packet->engine_aim_atl_ctlstatus_b = engine_aim_atl_ctlstatus_b;
    packet->over_boost_speed_sta = over_boost_speed_sta;
    packet->ign_enable_state = ign_enable_state;
    packet->sens_state_oxygen = sens_state_oxygen;
    packet->sens_state_cyl_exh_temp = sens_state_cyl_exh_temp;
    packet->sens_state_oil_fuel = sens_state_oil_fuel;
    packet->sens_state_boost_exh = sens_state_boost_exh;
    packet->sens_state_atmospheric_temp = sens_state_atmospheric_temp;
    packet->msg_state_can = msg_state_can;
    packet->msg_volt_state_422_volt = msg_volt_state_422_volt;
    packet->power_rating_pct = power_rating_pct;
    packet->esc_index = esc_index;
    mav_array_assign_uint8_t(packet->padding0, padding0, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN, (const char *)packet, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_MIN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_CRC);
#endif
}
#endif

#endif

// MESSAGE UAVCAN_ENGINE_STATUS_TEN UNPACKING


/**
 * @brief Get field timestamp from uavcan_engine_status_ten message
 *
 * @return  time since system start (microseconds)
 */
static inline uint64_t mavlink_msg_uavcan_engine_status_ten_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field source_node_id from uavcan_engine_status_ten message
 *
 * @return  UAVCAN source node id
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_source_node_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  100);
}

/**
 * @brief Get field ecu_index from uavcan_engine_status_ten message
 *
 * @return  The index of the publishing ECU
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_ecu_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  101);
}

/**
 * @brief Get field lambda_a from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_lambda_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field lambda_b from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_lambda_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field fuel_inj_work_hours_a from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_fuel_inj_work_hours_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field fuel_inj_work_hours_b from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_fuel_inj_work_hours_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field fuel_inj_work_sta_a from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_fuel_inj_work_sta_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  102);
}

/**
 * @brief Get field fuel_inj_work_sta_b from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_fuel_inj_work_sta_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  103);
}

/**
 * @brief Get field fuel_pressure_kpa from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_fuel_pressure_kpa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field oil_pressure_kpa from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_oil_pressure_kpa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field oil_temperature_c from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_oil_temperature_c(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  104);
}

/**
 * @brief Get field engine_torque from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_engine_torque(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  105);
}

/**
 * @brief Get field boost_temp from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_boost_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  106);
}

/**
 * @brief Get field boost_pressure_kpa from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_boost_pressure_kpa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field exhaust_valve_opening from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_exhaust_valve_opening(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field ambient_temp from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_ambient_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  107);
}

/**
 * @brief Get field atmospheric_pre_a_kpa from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_atmospheric_pre_a_kpa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field atmospheric_pre_b_kpa from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_atmospheric_pre_b_kpa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field supply_voltage_a from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_supply_voltage_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field supply_voltage_b from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_supply_voltage_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field cyl_exh_temp_1 from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_cyl_exh_temp_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  80);
}

/**
 * @brief Get field cyl_exh_temp_2 from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_cyl_exh_temp_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  82);
}

/**
 * @brief Get field cyl_exh_temp_3 from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_cyl_exh_temp_3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  84);
}

/**
 * @brief Get field cyl_exh_temp_4 from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_cyl_exh_temp_4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  86);
}

/**
 * @brief Get field oil_level_mm from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_oil_level_mm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  108);
}

/**
 * @brief Get field emergstatime_count_a from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_emergstatime_count_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  88);
}

/**
 * @brief Get field emergstatime_count_b from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_emergstatime_count_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  90);
}

/**
 * @brief Get field engine_powermode_req_a from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_engine_powermode_req_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  109);
}

/**
 * @brief Get field engine_powermode_req_b from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_engine_powermode_req_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  110);
}

/**
 * @brief Get field throttle_opening_req_val_a from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_throttle_opening_req_val_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  92);
}

/**
 * @brief Get field throttle_opening_req_val_b from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_throttle_opening_req_val_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  94);
}

/**
 * @brief Get field speed_req_val_a from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_speed_req_val_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  96);
}

/**
 * @brief Get field speed_req_val_b from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_speed_req_val_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  98);
}

/**
 * @brief Get field flash_rwgvopntgt from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_flash_rwgvopntgt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field bpc_pdesval from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_bpc_pdesval(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field engine_aim_atl_ctlstatus_a from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_engine_aim_atl_ctlstatus_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  111);
}

/**
 * @brief Get field engine_aim_atl_ctlstatus_b from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_engine_aim_atl_ctlstatus_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  112);
}

/**
 * @brief Get field over_boost_speed_sta from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_over_boost_speed_sta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  113);
}

/**
 * @brief Get field ign_enable_state from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_ign_enable_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  114);
}

/**
 * @brief Get field sens_state_oxygen from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_sens_state_oxygen(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  115);
}

/**
 * @brief Get field sens_state_cyl_exh_temp from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_sens_state_cyl_exh_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  116);
}

/**
 * @brief Get field sens_state_oil_fuel from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_sens_state_oil_fuel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  117);
}

/**
 * @brief Get field sens_state_boost_exh from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_sens_state_boost_exh(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  118);
}

/**
 * @brief Get field sens_state_atmospheric_temp from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_sens_state_atmospheric_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  119);
}

/**
 * @brief Get field msg_state_can from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_msg_state_can(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  120);
}

/**
 * @brief Get field msg_volt_state_422_volt from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_msg_volt_state_422_volt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  121);
}

/**
 * @brief Get field voltage_v from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_voltage_v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field current_a from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_current_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field temperature_k from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline float mavlink_msg_uavcan_engine_status_ten_get_temperature_k(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field rpm from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline int32_t mavlink_msg_uavcan_engine_status_ten_get_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  76);
}

/**
 * @brief Get field power_rating_pct from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_power_rating_pct(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  122);
}

/**
 * @brief Get field esc_index from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_uavcan_engine_status_ten_get_esc_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  123);
}

/**
 * @brief Get field padding0 from uavcan_engine_status_ten message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_uavcan_engine_status_ten_get_padding0(const mavlink_message_t* msg, uint8_t *padding0)
{
    return _MAV_RETURN_uint8_t_array(msg, padding0, 4,  124);
}

/**
 * @brief Decode a uavcan_engine_status_ten message into a struct
 *
 * @param msg The message to decode
 * @param uavcan_engine_status_ten C-struct to decode the message contents into
 */
static inline void mavlink_msg_uavcan_engine_status_ten_decode(const mavlink_message_t* msg, mavlink_uavcan_engine_status_ten_t* uavcan_engine_status_ten)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uavcan_engine_status_ten->timestamp = mavlink_msg_uavcan_engine_status_ten_get_timestamp(msg);
    uavcan_engine_status_ten->lambda_a = mavlink_msg_uavcan_engine_status_ten_get_lambda_a(msg);
    uavcan_engine_status_ten->lambda_b = mavlink_msg_uavcan_engine_status_ten_get_lambda_b(msg);
    uavcan_engine_status_ten->fuel_inj_work_hours_a = mavlink_msg_uavcan_engine_status_ten_get_fuel_inj_work_hours_a(msg);
    uavcan_engine_status_ten->fuel_inj_work_hours_b = mavlink_msg_uavcan_engine_status_ten_get_fuel_inj_work_hours_b(msg);
    uavcan_engine_status_ten->fuel_pressure_kpa = mavlink_msg_uavcan_engine_status_ten_get_fuel_pressure_kpa(msg);
    uavcan_engine_status_ten->oil_pressure_kpa = mavlink_msg_uavcan_engine_status_ten_get_oil_pressure_kpa(msg);
    uavcan_engine_status_ten->boost_pressure_kpa = mavlink_msg_uavcan_engine_status_ten_get_boost_pressure_kpa(msg);
    uavcan_engine_status_ten->exhaust_valve_opening = mavlink_msg_uavcan_engine_status_ten_get_exhaust_valve_opening(msg);
    uavcan_engine_status_ten->atmospheric_pre_a_kpa = mavlink_msg_uavcan_engine_status_ten_get_atmospheric_pre_a_kpa(msg);
    uavcan_engine_status_ten->atmospheric_pre_b_kpa = mavlink_msg_uavcan_engine_status_ten_get_atmospheric_pre_b_kpa(msg);
    uavcan_engine_status_ten->supply_voltage_a = mavlink_msg_uavcan_engine_status_ten_get_supply_voltage_a(msg);
    uavcan_engine_status_ten->supply_voltage_b = mavlink_msg_uavcan_engine_status_ten_get_supply_voltage_b(msg);
    uavcan_engine_status_ten->flash_rwgvopntgt = mavlink_msg_uavcan_engine_status_ten_get_flash_rwgvopntgt(msg);
    uavcan_engine_status_ten->bpc_pdesval = mavlink_msg_uavcan_engine_status_ten_get_bpc_pdesval(msg);
    uavcan_engine_status_ten->voltage_v = mavlink_msg_uavcan_engine_status_ten_get_voltage_v(msg);
    uavcan_engine_status_ten->current_a = mavlink_msg_uavcan_engine_status_ten_get_current_a(msg);
    uavcan_engine_status_ten->temperature_k = mavlink_msg_uavcan_engine_status_ten_get_temperature_k(msg);
    uavcan_engine_status_ten->rpm = mavlink_msg_uavcan_engine_status_ten_get_rpm(msg);
    uavcan_engine_status_ten->cyl_exh_temp_1 = mavlink_msg_uavcan_engine_status_ten_get_cyl_exh_temp_1(msg);
    uavcan_engine_status_ten->cyl_exh_temp_2 = mavlink_msg_uavcan_engine_status_ten_get_cyl_exh_temp_2(msg);
    uavcan_engine_status_ten->cyl_exh_temp_3 = mavlink_msg_uavcan_engine_status_ten_get_cyl_exh_temp_3(msg);
    uavcan_engine_status_ten->cyl_exh_temp_4 = mavlink_msg_uavcan_engine_status_ten_get_cyl_exh_temp_4(msg);
    uavcan_engine_status_ten->emergstatime_count_a = mavlink_msg_uavcan_engine_status_ten_get_emergstatime_count_a(msg);
    uavcan_engine_status_ten->emergstatime_count_b = mavlink_msg_uavcan_engine_status_ten_get_emergstatime_count_b(msg);
    uavcan_engine_status_ten->throttle_opening_req_val_a = mavlink_msg_uavcan_engine_status_ten_get_throttle_opening_req_val_a(msg);
    uavcan_engine_status_ten->throttle_opening_req_val_b = mavlink_msg_uavcan_engine_status_ten_get_throttle_opening_req_val_b(msg);
    uavcan_engine_status_ten->speed_req_val_a = mavlink_msg_uavcan_engine_status_ten_get_speed_req_val_a(msg);
    uavcan_engine_status_ten->speed_req_val_b = mavlink_msg_uavcan_engine_status_ten_get_speed_req_val_b(msg);
    uavcan_engine_status_ten->source_node_id = mavlink_msg_uavcan_engine_status_ten_get_source_node_id(msg);
    uavcan_engine_status_ten->ecu_index = mavlink_msg_uavcan_engine_status_ten_get_ecu_index(msg);
    uavcan_engine_status_ten->fuel_inj_work_sta_a = mavlink_msg_uavcan_engine_status_ten_get_fuel_inj_work_sta_a(msg);
    uavcan_engine_status_ten->fuel_inj_work_sta_b = mavlink_msg_uavcan_engine_status_ten_get_fuel_inj_work_sta_b(msg);
    uavcan_engine_status_ten->oil_temperature_c = mavlink_msg_uavcan_engine_status_ten_get_oil_temperature_c(msg);
    uavcan_engine_status_ten->engine_torque = mavlink_msg_uavcan_engine_status_ten_get_engine_torque(msg);
    uavcan_engine_status_ten->boost_temp = mavlink_msg_uavcan_engine_status_ten_get_boost_temp(msg);
    uavcan_engine_status_ten->ambient_temp = mavlink_msg_uavcan_engine_status_ten_get_ambient_temp(msg);
    uavcan_engine_status_ten->oil_level_mm = mavlink_msg_uavcan_engine_status_ten_get_oil_level_mm(msg);
    uavcan_engine_status_ten->engine_powermode_req_a = mavlink_msg_uavcan_engine_status_ten_get_engine_powermode_req_a(msg);
    uavcan_engine_status_ten->engine_powermode_req_b = mavlink_msg_uavcan_engine_status_ten_get_engine_powermode_req_b(msg);
    uavcan_engine_status_ten->engine_aim_atl_ctlstatus_a = mavlink_msg_uavcan_engine_status_ten_get_engine_aim_atl_ctlstatus_a(msg);
    uavcan_engine_status_ten->engine_aim_atl_ctlstatus_b = mavlink_msg_uavcan_engine_status_ten_get_engine_aim_atl_ctlstatus_b(msg);
    uavcan_engine_status_ten->over_boost_speed_sta = mavlink_msg_uavcan_engine_status_ten_get_over_boost_speed_sta(msg);
    uavcan_engine_status_ten->ign_enable_state = mavlink_msg_uavcan_engine_status_ten_get_ign_enable_state(msg);
    uavcan_engine_status_ten->sens_state_oxygen = mavlink_msg_uavcan_engine_status_ten_get_sens_state_oxygen(msg);
    uavcan_engine_status_ten->sens_state_cyl_exh_temp = mavlink_msg_uavcan_engine_status_ten_get_sens_state_cyl_exh_temp(msg);
    uavcan_engine_status_ten->sens_state_oil_fuel = mavlink_msg_uavcan_engine_status_ten_get_sens_state_oil_fuel(msg);
    uavcan_engine_status_ten->sens_state_boost_exh = mavlink_msg_uavcan_engine_status_ten_get_sens_state_boost_exh(msg);
    uavcan_engine_status_ten->sens_state_atmospheric_temp = mavlink_msg_uavcan_engine_status_ten_get_sens_state_atmospheric_temp(msg);
    uavcan_engine_status_ten->msg_state_can = mavlink_msg_uavcan_engine_status_ten_get_msg_state_can(msg);
    uavcan_engine_status_ten->msg_volt_state_422_volt = mavlink_msg_uavcan_engine_status_ten_get_msg_volt_state_422_volt(msg);
    uavcan_engine_status_ten->power_rating_pct = mavlink_msg_uavcan_engine_status_ten_get_power_rating_pct(msg);
    uavcan_engine_status_ten->esc_index = mavlink_msg_uavcan_engine_status_ten_get_esc_index(msg);
    mavlink_msg_uavcan_engine_status_ten_get_padding0(msg, uavcan_engine_status_ten->padding0);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN? msg->len : MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN;
        memset(uavcan_engine_status_ten, 0, MAVLINK_MSG_ID_UAVCAN_ENGINE_STATUS_TEN_LEN);
    memcpy(uavcan_engine_status_ten, _MAV_PAYLOAD(msg), len);
#endif
}
