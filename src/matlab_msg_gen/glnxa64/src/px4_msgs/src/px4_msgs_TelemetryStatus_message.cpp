// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/TelemetryStatus
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "px4_msgs/msg/telemetry_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_TelemetryStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::TelemetryStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_TelemetryStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::TelemetryStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::TelemetryStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_TelemetryStatus_common::copy_from_struct(px4_msgs::msg::TelemetryStatus* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //timestamp
        const matlab::data::TypedArray<uint64_t> timestamp_arr = arr["timestamp"];
        msg->timestamp = timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp' is wrong type; expected a uint64.");
    }
    try {
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr["type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
    }
    try {
        //mode
        const matlab::data::TypedArray<uint8_t> mode_arr = arr["mode"];
        msg->mode = mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode' is wrong type; expected a uint8.");
    }
    try {
        //flow_control
        const matlab::data::TypedArray<bool> flow_control_arr = arr["flow_control"];
        msg->flow_control = flow_control_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flow_control' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flow_control' is wrong type; expected a logical.");
    }
    try {
        //forwarding
        const matlab::data::TypedArray<bool> forwarding_arr = arr["forwarding"];
        msg->forwarding = forwarding_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'forwarding' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'forwarding' is wrong type; expected a logical.");
    }
    try {
        //mavlink_v2
        const matlab::data::TypedArray<bool> mavlink_v2_arr = arr["mavlink_v2"];
        msg->mavlink_v2 = mavlink_v2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mavlink_v2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mavlink_v2' is wrong type; expected a logical.");
    }
    try {
        //ftp
        const matlab::data::TypedArray<bool> ftp_arr = arr["ftp"];
        msg->ftp = ftp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ftp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ftp' is wrong type; expected a logical.");
    }
    try {
        //streams
        const matlab::data::TypedArray<uint8_t> streams_arr = arr["streams"];
        msg->streams = streams_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'streams' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'streams' is wrong type; expected a uint8.");
    }
    try {
        //data_rate
        const matlab::data::TypedArray<float> data_rate_arr = arr["data_rate"];
        msg->data_rate = data_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'data_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'data_rate' is wrong type; expected a single.");
    }
    try {
        //rate_multiplier
        const matlab::data::TypedArray<float> rate_multiplier_arr = arr["rate_multiplier"];
        msg->rate_multiplier = rate_multiplier_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rate_multiplier' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rate_multiplier' is wrong type; expected a single.");
    }
    try {
        //tx_rate_avg
        const matlab::data::TypedArray<float> tx_rate_avg_arr = arr["tx_rate_avg"];
        msg->tx_rate_avg = tx_rate_avg_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tx_rate_avg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tx_rate_avg' is wrong type; expected a single.");
    }
    try {
        //tx_error_rate_avg
        const matlab::data::TypedArray<float> tx_error_rate_avg_arr = arr["tx_error_rate_avg"];
        msg->tx_error_rate_avg = tx_error_rate_avg_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tx_error_rate_avg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tx_error_rate_avg' is wrong type; expected a single.");
    }
    try {
        //tx_message_count
        const matlab::data::TypedArray<uint32_t> tx_message_count_arr = arr["tx_message_count"];
        msg->tx_message_count = tx_message_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tx_message_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tx_message_count' is wrong type; expected a uint32.");
    }
    try {
        //tx_buffer_overruns
        const matlab::data::TypedArray<uint32_t> tx_buffer_overruns_arr = arr["tx_buffer_overruns"];
        msg->tx_buffer_overruns = tx_buffer_overruns_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tx_buffer_overruns' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tx_buffer_overruns' is wrong type; expected a uint32.");
    }
    try {
        //rx_rate_avg
        const matlab::data::TypedArray<float> rx_rate_avg_arr = arr["rx_rate_avg"];
        msg->rx_rate_avg = rx_rate_avg_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_rate_avg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_rate_avg' is wrong type; expected a single.");
    }
    try {
        //rx_message_count
        const matlab::data::TypedArray<uint32_t> rx_message_count_arr = arr["rx_message_count"];
        msg->rx_message_count = rx_message_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_message_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_message_count' is wrong type; expected a uint32.");
    }
    try {
        //rx_message_lost_count
        const matlab::data::TypedArray<uint32_t> rx_message_lost_count_arr = arr["rx_message_lost_count"];
        msg->rx_message_lost_count = rx_message_lost_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_message_lost_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_message_lost_count' is wrong type; expected a uint32.");
    }
    try {
        //rx_buffer_overruns
        const matlab::data::TypedArray<uint32_t> rx_buffer_overruns_arr = arr["rx_buffer_overruns"];
        msg->rx_buffer_overruns = rx_buffer_overruns_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_buffer_overruns' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_buffer_overruns' is wrong type; expected a uint32.");
    }
    try {
        //rx_parse_errors
        const matlab::data::TypedArray<uint32_t> rx_parse_errors_arr = arr["rx_parse_errors"];
        msg->rx_parse_errors = rx_parse_errors_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_parse_errors' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_parse_errors' is wrong type; expected a uint32.");
    }
    try {
        //rx_packet_drop_count
        const matlab::data::TypedArray<uint32_t> rx_packet_drop_count_arr = arr["rx_packet_drop_count"];
        msg->rx_packet_drop_count = rx_packet_drop_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_packet_drop_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_packet_drop_count' is wrong type; expected a uint32.");
    }
    try {
        //rx_message_lost_rate
        const matlab::data::TypedArray<float> rx_message_lost_rate_arr = arr["rx_message_lost_rate"];
        msg->rx_message_lost_rate = rx_message_lost_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_message_lost_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_message_lost_rate' is wrong type; expected a single.");
    }
    try {
        //heartbeat_type_antenna_tracker
        const matlab::data::TypedArray<bool> heartbeat_type_antenna_tracker_arr = arr["heartbeat_type_antenna_tracker"];
        msg->heartbeat_type_antenna_tracker = heartbeat_type_antenna_tracker_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_type_antenna_tracker' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_type_antenna_tracker' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_type_gcs
        const matlab::data::TypedArray<bool> heartbeat_type_gcs_arr = arr["heartbeat_type_gcs"];
        msg->heartbeat_type_gcs = heartbeat_type_gcs_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_type_gcs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_type_gcs' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_type_onboard_controller
        const matlab::data::TypedArray<bool> heartbeat_type_onboard_controller_arr = arr["heartbeat_type_onboard_controller"];
        msg->heartbeat_type_onboard_controller = heartbeat_type_onboard_controller_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_type_onboard_controller' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_type_onboard_controller' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_type_gimbal
        const matlab::data::TypedArray<bool> heartbeat_type_gimbal_arr = arr["heartbeat_type_gimbal"];
        msg->heartbeat_type_gimbal = heartbeat_type_gimbal_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_type_gimbal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_type_gimbal' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_type_adsb
        const matlab::data::TypedArray<bool> heartbeat_type_adsb_arr = arr["heartbeat_type_adsb"];
        msg->heartbeat_type_adsb = heartbeat_type_adsb_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_type_adsb' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_type_adsb' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_type_camera
        const matlab::data::TypedArray<bool> heartbeat_type_camera_arr = arr["heartbeat_type_camera"];
        msg->heartbeat_type_camera = heartbeat_type_camera_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_type_camera' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_type_camera' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_type_parachute
        const matlab::data::TypedArray<bool> heartbeat_type_parachute_arr = arr["heartbeat_type_parachute"];
        msg->heartbeat_type_parachute = heartbeat_type_parachute_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_type_parachute' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_type_parachute' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_type_open_drone_id
        const matlab::data::TypedArray<bool> heartbeat_type_open_drone_id_arr = arr["heartbeat_type_open_drone_id"];
        msg->heartbeat_type_open_drone_id = heartbeat_type_open_drone_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_type_open_drone_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_type_open_drone_id' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_component_telemetry_radio
        const matlab::data::TypedArray<bool> heartbeat_component_telemetry_radio_arr = arr["heartbeat_component_telemetry_radio"];
        msg->heartbeat_component_telemetry_radio = heartbeat_component_telemetry_radio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_component_telemetry_radio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_component_telemetry_radio' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_component_log
        const matlab::data::TypedArray<bool> heartbeat_component_log_arr = arr["heartbeat_component_log"];
        msg->heartbeat_component_log = heartbeat_component_log_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_component_log' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_component_log' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_component_osd
        const matlab::data::TypedArray<bool> heartbeat_component_osd_arr = arr["heartbeat_component_osd"];
        msg->heartbeat_component_osd = heartbeat_component_osd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_component_osd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_component_osd' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_component_obstacle_avoidance
        const matlab::data::TypedArray<bool> heartbeat_component_obstacle_avoidance_arr = arr["heartbeat_component_obstacle_avoidance"];
        msg->heartbeat_component_obstacle_avoidance = heartbeat_component_obstacle_avoidance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_component_obstacle_avoidance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_component_obstacle_avoidance' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_component_vio
        const matlab::data::TypedArray<bool> heartbeat_component_vio_arr = arr["heartbeat_component_vio"];
        msg->heartbeat_component_vio = heartbeat_component_vio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_component_vio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_component_vio' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_component_pairing_manager
        const matlab::data::TypedArray<bool> heartbeat_component_pairing_manager_arr = arr["heartbeat_component_pairing_manager"];
        msg->heartbeat_component_pairing_manager = heartbeat_component_pairing_manager_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_component_pairing_manager' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_component_pairing_manager' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_component_udp_bridge
        const matlab::data::TypedArray<bool> heartbeat_component_udp_bridge_arr = arr["heartbeat_component_udp_bridge"];
        msg->heartbeat_component_udp_bridge = heartbeat_component_udp_bridge_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_component_udp_bridge' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_component_udp_bridge' is wrong type; expected a logical.");
    }
    try {
        //heartbeat_component_uart_bridge
        const matlab::data::TypedArray<bool> heartbeat_component_uart_bridge_arr = arr["heartbeat_component_uart_bridge"];
        msg->heartbeat_component_uart_bridge = heartbeat_component_uart_bridge_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heartbeat_component_uart_bridge' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heartbeat_component_uart_bridge' is wrong type; expected a logical.");
    }
    try {
        //avoidance_system_healthy
        const matlab::data::TypedArray<bool> avoidance_system_healthy_arr = arr["avoidance_system_healthy"];
        msg->avoidance_system_healthy = avoidance_system_healthy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'avoidance_system_healthy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'avoidance_system_healthy' is wrong type; expected a logical.");
    }
    try {
        //open_drone_id_system_healthy
        const matlab::data::TypedArray<bool> open_drone_id_system_healthy_arr = arr["open_drone_id_system_healthy"];
        msg->open_drone_id_system_healthy = open_drone_id_system_healthy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'open_drone_id_system_healthy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'open_drone_id_system_healthy' is wrong type; expected a logical.");
    }
    try {
        //parachute_system_healthy
        const matlab::data::TypedArray<bool> parachute_system_healthy_arr = arr["parachute_system_healthy"];
        msg->parachute_system_healthy = parachute_system_healthy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'parachute_system_healthy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'parachute_system_healthy' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_TelemetryStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::TelemetryStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","LINK_TYPE_GENERIC","LINK_TYPE_UBIQUITY_BULLET","LINK_TYPE_WIRE","LINK_TYPE_USB","LINK_TYPE_IRIDIUM","timestamp","type","mode","flow_control","forwarding","mavlink_v2","ftp","streams","data_rate","rate_multiplier","tx_rate_avg","tx_error_rate_avg","tx_message_count","tx_buffer_overruns","rx_rate_avg","rx_message_count","rx_message_lost_count","rx_buffer_overruns","rx_parse_errors","rx_packet_drop_count","rx_message_lost_rate","HEARTBEAT_TIMEOUT_US","heartbeat_type_antenna_tracker","heartbeat_type_gcs","heartbeat_type_onboard_controller","heartbeat_type_gimbal","heartbeat_type_adsb","heartbeat_type_camera","heartbeat_type_parachute","heartbeat_type_open_drone_id","heartbeat_component_telemetry_radio","heartbeat_component_log","heartbeat_component_osd","heartbeat_component_obstacle_avoidance","heartbeat_component_vio","heartbeat_component_pairing_manager","heartbeat_component_udp_bridge","heartbeat_component_uart_bridge","avoidance_system_healthy","open_drone_id_system_healthy","parachute_system_healthy"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/TelemetryStatus");
    // LINK_TYPE_GENERIC
    auto currentElement_LINK_TYPE_GENERIC = (msg + ctr)->LINK_TYPE_GENERIC;
    outArray[ctr]["LINK_TYPE_GENERIC"] = factory.createScalar(currentElement_LINK_TYPE_GENERIC);
    // LINK_TYPE_UBIQUITY_BULLET
    auto currentElement_LINK_TYPE_UBIQUITY_BULLET = (msg + ctr)->LINK_TYPE_UBIQUITY_BULLET;
    outArray[ctr]["LINK_TYPE_UBIQUITY_BULLET"] = factory.createScalar(currentElement_LINK_TYPE_UBIQUITY_BULLET);
    // LINK_TYPE_WIRE
    auto currentElement_LINK_TYPE_WIRE = (msg + ctr)->LINK_TYPE_WIRE;
    outArray[ctr]["LINK_TYPE_WIRE"] = factory.createScalar(currentElement_LINK_TYPE_WIRE);
    // LINK_TYPE_USB
    auto currentElement_LINK_TYPE_USB = (msg + ctr)->LINK_TYPE_USB;
    outArray[ctr]["LINK_TYPE_USB"] = factory.createScalar(currentElement_LINK_TYPE_USB);
    // LINK_TYPE_IRIDIUM
    auto currentElement_LINK_TYPE_IRIDIUM = (msg + ctr)->LINK_TYPE_IRIDIUM;
    outArray[ctr]["LINK_TYPE_IRIDIUM"] = factory.createScalar(currentElement_LINK_TYPE_IRIDIUM);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["type"] = factory.createScalar(currentElement_type);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["mode"] = factory.createScalar(currentElement_mode);
    // flow_control
    auto currentElement_flow_control = (msg + ctr)->flow_control;
    outArray[ctr]["flow_control"] = factory.createScalar(currentElement_flow_control);
    // forwarding
    auto currentElement_forwarding = (msg + ctr)->forwarding;
    outArray[ctr]["forwarding"] = factory.createScalar(currentElement_forwarding);
    // mavlink_v2
    auto currentElement_mavlink_v2 = (msg + ctr)->mavlink_v2;
    outArray[ctr]["mavlink_v2"] = factory.createScalar(currentElement_mavlink_v2);
    // ftp
    auto currentElement_ftp = (msg + ctr)->ftp;
    outArray[ctr]["ftp"] = factory.createScalar(currentElement_ftp);
    // streams
    auto currentElement_streams = (msg + ctr)->streams;
    outArray[ctr]["streams"] = factory.createScalar(currentElement_streams);
    // data_rate
    auto currentElement_data_rate = (msg + ctr)->data_rate;
    outArray[ctr]["data_rate"] = factory.createScalar(currentElement_data_rate);
    // rate_multiplier
    auto currentElement_rate_multiplier = (msg + ctr)->rate_multiplier;
    outArray[ctr]["rate_multiplier"] = factory.createScalar(currentElement_rate_multiplier);
    // tx_rate_avg
    auto currentElement_tx_rate_avg = (msg + ctr)->tx_rate_avg;
    outArray[ctr]["tx_rate_avg"] = factory.createScalar(currentElement_tx_rate_avg);
    // tx_error_rate_avg
    auto currentElement_tx_error_rate_avg = (msg + ctr)->tx_error_rate_avg;
    outArray[ctr]["tx_error_rate_avg"] = factory.createScalar(currentElement_tx_error_rate_avg);
    // tx_message_count
    auto currentElement_tx_message_count = (msg + ctr)->tx_message_count;
    outArray[ctr]["tx_message_count"] = factory.createScalar(currentElement_tx_message_count);
    // tx_buffer_overruns
    auto currentElement_tx_buffer_overruns = (msg + ctr)->tx_buffer_overruns;
    outArray[ctr]["tx_buffer_overruns"] = factory.createScalar(currentElement_tx_buffer_overruns);
    // rx_rate_avg
    auto currentElement_rx_rate_avg = (msg + ctr)->rx_rate_avg;
    outArray[ctr]["rx_rate_avg"] = factory.createScalar(currentElement_rx_rate_avg);
    // rx_message_count
    auto currentElement_rx_message_count = (msg + ctr)->rx_message_count;
    outArray[ctr]["rx_message_count"] = factory.createScalar(currentElement_rx_message_count);
    // rx_message_lost_count
    auto currentElement_rx_message_lost_count = (msg + ctr)->rx_message_lost_count;
    outArray[ctr]["rx_message_lost_count"] = factory.createScalar(currentElement_rx_message_lost_count);
    // rx_buffer_overruns
    auto currentElement_rx_buffer_overruns = (msg + ctr)->rx_buffer_overruns;
    outArray[ctr]["rx_buffer_overruns"] = factory.createScalar(currentElement_rx_buffer_overruns);
    // rx_parse_errors
    auto currentElement_rx_parse_errors = (msg + ctr)->rx_parse_errors;
    outArray[ctr]["rx_parse_errors"] = factory.createScalar(currentElement_rx_parse_errors);
    // rx_packet_drop_count
    auto currentElement_rx_packet_drop_count = (msg + ctr)->rx_packet_drop_count;
    outArray[ctr]["rx_packet_drop_count"] = factory.createScalar(currentElement_rx_packet_drop_count);
    // rx_message_lost_rate
    auto currentElement_rx_message_lost_rate = (msg + ctr)->rx_message_lost_rate;
    outArray[ctr]["rx_message_lost_rate"] = factory.createScalar(currentElement_rx_message_lost_rate);
    // HEARTBEAT_TIMEOUT_US
    auto currentElement_HEARTBEAT_TIMEOUT_US = (msg + ctr)->HEARTBEAT_TIMEOUT_US;
    outArray[ctr]["HEARTBEAT_TIMEOUT_US"] = factory.createScalar(currentElement_HEARTBEAT_TIMEOUT_US);
    // heartbeat_type_antenna_tracker
    auto currentElement_heartbeat_type_antenna_tracker = (msg + ctr)->heartbeat_type_antenna_tracker;
    outArray[ctr]["heartbeat_type_antenna_tracker"] = factory.createScalar(currentElement_heartbeat_type_antenna_tracker);
    // heartbeat_type_gcs
    auto currentElement_heartbeat_type_gcs = (msg + ctr)->heartbeat_type_gcs;
    outArray[ctr]["heartbeat_type_gcs"] = factory.createScalar(currentElement_heartbeat_type_gcs);
    // heartbeat_type_onboard_controller
    auto currentElement_heartbeat_type_onboard_controller = (msg + ctr)->heartbeat_type_onboard_controller;
    outArray[ctr]["heartbeat_type_onboard_controller"] = factory.createScalar(currentElement_heartbeat_type_onboard_controller);
    // heartbeat_type_gimbal
    auto currentElement_heartbeat_type_gimbal = (msg + ctr)->heartbeat_type_gimbal;
    outArray[ctr]["heartbeat_type_gimbal"] = factory.createScalar(currentElement_heartbeat_type_gimbal);
    // heartbeat_type_adsb
    auto currentElement_heartbeat_type_adsb = (msg + ctr)->heartbeat_type_adsb;
    outArray[ctr]["heartbeat_type_adsb"] = factory.createScalar(currentElement_heartbeat_type_adsb);
    // heartbeat_type_camera
    auto currentElement_heartbeat_type_camera = (msg + ctr)->heartbeat_type_camera;
    outArray[ctr]["heartbeat_type_camera"] = factory.createScalar(currentElement_heartbeat_type_camera);
    // heartbeat_type_parachute
    auto currentElement_heartbeat_type_parachute = (msg + ctr)->heartbeat_type_parachute;
    outArray[ctr]["heartbeat_type_parachute"] = factory.createScalar(currentElement_heartbeat_type_parachute);
    // heartbeat_type_open_drone_id
    auto currentElement_heartbeat_type_open_drone_id = (msg + ctr)->heartbeat_type_open_drone_id;
    outArray[ctr]["heartbeat_type_open_drone_id"] = factory.createScalar(currentElement_heartbeat_type_open_drone_id);
    // heartbeat_component_telemetry_radio
    auto currentElement_heartbeat_component_telemetry_radio = (msg + ctr)->heartbeat_component_telemetry_radio;
    outArray[ctr]["heartbeat_component_telemetry_radio"] = factory.createScalar(currentElement_heartbeat_component_telemetry_radio);
    // heartbeat_component_log
    auto currentElement_heartbeat_component_log = (msg + ctr)->heartbeat_component_log;
    outArray[ctr]["heartbeat_component_log"] = factory.createScalar(currentElement_heartbeat_component_log);
    // heartbeat_component_osd
    auto currentElement_heartbeat_component_osd = (msg + ctr)->heartbeat_component_osd;
    outArray[ctr]["heartbeat_component_osd"] = factory.createScalar(currentElement_heartbeat_component_osd);
    // heartbeat_component_obstacle_avoidance
    auto currentElement_heartbeat_component_obstacle_avoidance = (msg + ctr)->heartbeat_component_obstacle_avoidance;
    outArray[ctr]["heartbeat_component_obstacle_avoidance"] = factory.createScalar(currentElement_heartbeat_component_obstacle_avoidance);
    // heartbeat_component_vio
    auto currentElement_heartbeat_component_vio = (msg + ctr)->heartbeat_component_vio;
    outArray[ctr]["heartbeat_component_vio"] = factory.createScalar(currentElement_heartbeat_component_vio);
    // heartbeat_component_pairing_manager
    auto currentElement_heartbeat_component_pairing_manager = (msg + ctr)->heartbeat_component_pairing_manager;
    outArray[ctr]["heartbeat_component_pairing_manager"] = factory.createScalar(currentElement_heartbeat_component_pairing_manager);
    // heartbeat_component_udp_bridge
    auto currentElement_heartbeat_component_udp_bridge = (msg + ctr)->heartbeat_component_udp_bridge;
    outArray[ctr]["heartbeat_component_udp_bridge"] = factory.createScalar(currentElement_heartbeat_component_udp_bridge);
    // heartbeat_component_uart_bridge
    auto currentElement_heartbeat_component_uart_bridge = (msg + ctr)->heartbeat_component_uart_bridge;
    outArray[ctr]["heartbeat_component_uart_bridge"] = factory.createScalar(currentElement_heartbeat_component_uart_bridge);
    // avoidance_system_healthy
    auto currentElement_avoidance_system_healthy = (msg + ctr)->avoidance_system_healthy;
    outArray[ctr]["avoidance_system_healthy"] = factory.createScalar(currentElement_avoidance_system_healthy);
    // open_drone_id_system_healthy
    auto currentElement_open_drone_id_system_healthy = (msg + ctr)->open_drone_id_system_healthy;
    outArray[ctr]["open_drone_id_system_healthy"] = factory.createScalar(currentElement_open_drone_id_system_healthy);
    // parachute_system_healthy
    auto currentElement_parachute_system_healthy = (msg + ctr)->parachute_system_healthy;
    outArray[ctr]["parachute_system_healthy"] = factory.createScalar(currentElement_parachute_system_healthy);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_TelemetryStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_TelemetryStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_TelemetryStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::TelemetryStatus,ros2_px4_msgs_msg_TelemetryStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_TelemetryStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::TelemetryStatus,ros2_px4_msgs_msg_TelemetryStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_TelemetryStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::TelemetryStatus>();
    ros2_px4_msgs_msg_TelemetryStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_TelemetryStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_TelemetryStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::TelemetryStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_TelemetryStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::TelemetryStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_TelemetryStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER