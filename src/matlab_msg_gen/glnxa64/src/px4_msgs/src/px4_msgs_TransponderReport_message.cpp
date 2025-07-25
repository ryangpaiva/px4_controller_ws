// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/TransponderReport
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
#include "px4_msgs/msg/transponder_report.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_TransponderReport_common : public MATLABROS2MsgInterface<px4_msgs::msg::TransponderReport> {
  public:
    virtual ~ros2_px4_msgs_msg_TransponderReport_common(){}
    virtual void copy_from_struct(px4_msgs::msg::TransponderReport* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::TransponderReport* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_TransponderReport_common::copy_from_struct(px4_msgs::msg::TransponderReport* msg, const matlab::data::Struct& arr,
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
        //icao_address
        const matlab::data::TypedArray<uint32_t> icao_address_arr = arr["icao_address"];
        msg->icao_address = icao_address_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'icao_address' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'icao_address' is wrong type; expected a uint32.");
    }
    try {
        //lat
        const matlab::data::TypedArray<double> lat_arr = arr["lat"];
        msg->lat = lat_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lat' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lat' is wrong type; expected a double.");
    }
    try {
        //lon
        const matlab::data::TypedArray<double> lon_arr = arr["lon"];
        msg->lon = lon_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lon' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lon' is wrong type; expected a double.");
    }
    try {
        //altitude_type
        const matlab::data::TypedArray<uint8_t> altitude_type_arr = arr["altitude_type"];
        msg->altitude_type = altitude_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude_type' is wrong type; expected a uint8.");
    }
    try {
        //altitude
        const matlab::data::TypedArray<float> altitude_arr = arr["altitude"];
        msg->altitude = altitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude' is wrong type; expected a single.");
    }
    try {
        //heading
        const matlab::data::TypedArray<float> heading_arr = arr["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a single.");
    }
    try {
        //hor_velocity
        const matlab::data::TypedArray<float> hor_velocity_arr = arr["hor_velocity"];
        msg->hor_velocity = hor_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hor_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hor_velocity' is wrong type; expected a single.");
    }
    try {
        //ver_velocity
        const matlab::data::TypedArray<float> ver_velocity_arr = arr["ver_velocity"];
        msg->ver_velocity = ver_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ver_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ver_velocity' is wrong type; expected a single.");
    }
    try {
        //callsign
        const matlab::data::CharArray callsign_arr = arr["callsign"];
        const std::string callsign_str = callsign_arr.toAscii();
        size_t nelem = 9;
        	std::copy(callsign_arr.begin(), callsign_arr.begin()+nelem, msg->callsign.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'callsign' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'callsign' is wrong type; expected a char.");
    }
    try {
        //emitter_type
        const matlab::data::TypedArray<uint8_t> emitter_type_arr = arr["emitter_type"];
        msg->emitter_type = emitter_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'emitter_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'emitter_type' is wrong type; expected a uint8.");
    }
    try {
        //tslc
        const matlab::data::TypedArray<uint8_t> tslc_arr = arr["tslc"];
        msg->tslc = tslc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tslc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tslc' is wrong type; expected a uint8.");
    }
    try {
        //flags
        const matlab::data::TypedArray<uint16_t> flags_arr = arr["flags"];
        msg->flags = flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flags' is wrong type; expected a uint16.");
    }
    try {
        //squawk
        const matlab::data::TypedArray<uint16_t> squawk_arr = arr["squawk"];
        msg->squawk = squawk_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'squawk' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'squawk' is wrong type; expected a uint16.");
    }
    try {
        //uas_id
        const matlab::data::TypedArray<uint8_t> uas_id_arr = arr["uas_id"];
        size_t nelem = 18;
        	std::copy(uas_id_arr.begin(), uas_id_arr.begin()+nelem, msg->uas_id.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'uas_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'uas_id' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_TransponderReport_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::TransponderReport* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","icao_address","lat","lon","altitude_type","altitude","heading","hor_velocity","ver_velocity","callsign","emitter_type","tslc","flags","squawk","uas_id","PX4_ADSB_FLAGS_VALID_COORDS","PX4_ADSB_FLAGS_VALID_ALTITUDE","PX4_ADSB_FLAGS_VALID_HEADING","PX4_ADSB_FLAGS_VALID_VELOCITY","PX4_ADSB_FLAGS_VALID_CALLSIGN","PX4_ADSB_FLAGS_VALID_SQUAWK","PX4_ADSB_FLAGS_RETRANSLATE","ADSB_EMITTER_TYPE_NO_INFO","ADSB_EMITTER_TYPE_LIGHT","ADSB_EMITTER_TYPE_SMALL","ADSB_EMITTER_TYPE_LARGE","ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE","ADSB_EMITTER_TYPE_HEAVY","ADSB_EMITTER_TYPE_HIGHLY_MANUV","ADSB_EMITTER_TYPE_ROTOCRAFT","ADSB_EMITTER_TYPE_UNASSIGNED","ADSB_EMITTER_TYPE_GLIDER","ADSB_EMITTER_TYPE_LIGHTER_AIR","ADSB_EMITTER_TYPE_PARACHUTE","ADSB_EMITTER_TYPE_ULTRA_LIGHT","ADSB_EMITTER_TYPE_UNASSIGNED2","ADSB_EMITTER_TYPE_UAV","ADSB_EMITTER_TYPE_SPACE","ADSB_EMITTER_TYPE_UNASSGINED3","ADSB_EMITTER_TYPE_EMERGENCY_SURFACE","ADSB_EMITTER_TYPE_SERVICE_SURFACE","ADSB_EMITTER_TYPE_POINT_OBSTACLE","ADSB_EMITTER_TYPE_ENUM_END","ORB_QUEUE_LENGTH"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/TransponderReport");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // icao_address
    auto currentElement_icao_address = (msg + ctr)->icao_address;
    outArray[ctr]["icao_address"] = factory.createScalar(currentElement_icao_address);
    // lat
    auto currentElement_lat = (msg + ctr)->lat;
    outArray[ctr]["lat"] = factory.createScalar(currentElement_lat);
    // lon
    auto currentElement_lon = (msg + ctr)->lon;
    outArray[ctr]["lon"] = factory.createScalar(currentElement_lon);
    // altitude_type
    auto currentElement_altitude_type = (msg + ctr)->altitude_type;
    outArray[ctr]["altitude_type"] = factory.createScalar(currentElement_altitude_type);
    // altitude
    auto currentElement_altitude = (msg + ctr)->altitude;
    outArray[ctr]["altitude"] = factory.createScalar(currentElement_altitude);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // hor_velocity
    auto currentElement_hor_velocity = (msg + ctr)->hor_velocity;
    outArray[ctr]["hor_velocity"] = factory.createScalar(currentElement_hor_velocity);
    // ver_velocity
    auto currentElement_ver_velocity = (msg + ctr)->ver_velocity;
    outArray[ctr]["ver_velocity"] = factory.createScalar(currentElement_ver_velocity);
    // callsign
    auto currentElement_callsign = (msg + ctr)->callsign;
    outArray[ctr]["callsign"] = factory.createCharArray(std::string(currentElement_callsign.begin(),currentElement_callsign.end()));
    // emitter_type
    auto currentElement_emitter_type = (msg + ctr)->emitter_type;
    outArray[ctr]["emitter_type"] = factory.createScalar(currentElement_emitter_type);
    // tslc
    auto currentElement_tslc = (msg + ctr)->tslc;
    outArray[ctr]["tslc"] = factory.createScalar(currentElement_tslc);
    // flags
    auto currentElement_flags = (msg + ctr)->flags;
    outArray[ctr]["flags"] = factory.createScalar(currentElement_flags);
    // squawk
    auto currentElement_squawk = (msg + ctr)->squawk;
    outArray[ctr]["squawk"] = factory.createScalar(currentElement_squawk);
    // uas_id
    auto currentElement_uas_id = (msg + ctr)->uas_id;
    outArray[ctr]["uas_id"] = factory.createArray<px4_msgs::msg::TransponderReport::_uas_id_type::const_iterator, uint8_t>({currentElement_uas_id.size(), 1}, currentElement_uas_id.begin(), currentElement_uas_id.end());
    // PX4_ADSB_FLAGS_VALID_COORDS
    auto currentElement_PX4_ADSB_FLAGS_VALID_COORDS = (msg + ctr)->PX4_ADSB_FLAGS_VALID_COORDS;
    outArray[ctr]["PX4_ADSB_FLAGS_VALID_COORDS"] = factory.createScalar(currentElement_PX4_ADSB_FLAGS_VALID_COORDS);
    // PX4_ADSB_FLAGS_VALID_ALTITUDE
    auto currentElement_PX4_ADSB_FLAGS_VALID_ALTITUDE = (msg + ctr)->PX4_ADSB_FLAGS_VALID_ALTITUDE;
    outArray[ctr]["PX4_ADSB_FLAGS_VALID_ALTITUDE"] = factory.createScalar(currentElement_PX4_ADSB_FLAGS_VALID_ALTITUDE);
    // PX4_ADSB_FLAGS_VALID_HEADING
    auto currentElement_PX4_ADSB_FLAGS_VALID_HEADING = (msg + ctr)->PX4_ADSB_FLAGS_VALID_HEADING;
    outArray[ctr]["PX4_ADSB_FLAGS_VALID_HEADING"] = factory.createScalar(currentElement_PX4_ADSB_FLAGS_VALID_HEADING);
    // PX4_ADSB_FLAGS_VALID_VELOCITY
    auto currentElement_PX4_ADSB_FLAGS_VALID_VELOCITY = (msg + ctr)->PX4_ADSB_FLAGS_VALID_VELOCITY;
    outArray[ctr]["PX4_ADSB_FLAGS_VALID_VELOCITY"] = factory.createScalar(currentElement_PX4_ADSB_FLAGS_VALID_VELOCITY);
    // PX4_ADSB_FLAGS_VALID_CALLSIGN
    auto currentElement_PX4_ADSB_FLAGS_VALID_CALLSIGN = (msg + ctr)->PX4_ADSB_FLAGS_VALID_CALLSIGN;
    outArray[ctr]["PX4_ADSB_FLAGS_VALID_CALLSIGN"] = factory.createScalar(currentElement_PX4_ADSB_FLAGS_VALID_CALLSIGN);
    // PX4_ADSB_FLAGS_VALID_SQUAWK
    auto currentElement_PX4_ADSB_FLAGS_VALID_SQUAWK = (msg + ctr)->PX4_ADSB_FLAGS_VALID_SQUAWK;
    outArray[ctr]["PX4_ADSB_FLAGS_VALID_SQUAWK"] = factory.createScalar(currentElement_PX4_ADSB_FLAGS_VALID_SQUAWK);
    // PX4_ADSB_FLAGS_RETRANSLATE
    auto currentElement_PX4_ADSB_FLAGS_RETRANSLATE = (msg + ctr)->PX4_ADSB_FLAGS_RETRANSLATE;
    outArray[ctr]["PX4_ADSB_FLAGS_RETRANSLATE"] = factory.createScalar(currentElement_PX4_ADSB_FLAGS_RETRANSLATE);
    // ADSB_EMITTER_TYPE_NO_INFO
    auto currentElement_ADSB_EMITTER_TYPE_NO_INFO = (msg + ctr)->ADSB_EMITTER_TYPE_NO_INFO;
    outArray[ctr]["ADSB_EMITTER_TYPE_NO_INFO"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_NO_INFO);
    // ADSB_EMITTER_TYPE_LIGHT
    auto currentElement_ADSB_EMITTER_TYPE_LIGHT = (msg + ctr)->ADSB_EMITTER_TYPE_LIGHT;
    outArray[ctr]["ADSB_EMITTER_TYPE_LIGHT"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_LIGHT);
    // ADSB_EMITTER_TYPE_SMALL
    auto currentElement_ADSB_EMITTER_TYPE_SMALL = (msg + ctr)->ADSB_EMITTER_TYPE_SMALL;
    outArray[ctr]["ADSB_EMITTER_TYPE_SMALL"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_SMALL);
    // ADSB_EMITTER_TYPE_LARGE
    auto currentElement_ADSB_EMITTER_TYPE_LARGE = (msg + ctr)->ADSB_EMITTER_TYPE_LARGE;
    outArray[ctr]["ADSB_EMITTER_TYPE_LARGE"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_LARGE);
    // ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE
    auto currentElement_ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE = (msg + ctr)->ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE;
    outArray[ctr]["ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE);
    // ADSB_EMITTER_TYPE_HEAVY
    auto currentElement_ADSB_EMITTER_TYPE_HEAVY = (msg + ctr)->ADSB_EMITTER_TYPE_HEAVY;
    outArray[ctr]["ADSB_EMITTER_TYPE_HEAVY"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_HEAVY);
    // ADSB_EMITTER_TYPE_HIGHLY_MANUV
    auto currentElement_ADSB_EMITTER_TYPE_HIGHLY_MANUV = (msg + ctr)->ADSB_EMITTER_TYPE_HIGHLY_MANUV;
    outArray[ctr]["ADSB_EMITTER_TYPE_HIGHLY_MANUV"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_HIGHLY_MANUV);
    // ADSB_EMITTER_TYPE_ROTOCRAFT
    auto currentElement_ADSB_EMITTER_TYPE_ROTOCRAFT = (msg + ctr)->ADSB_EMITTER_TYPE_ROTOCRAFT;
    outArray[ctr]["ADSB_EMITTER_TYPE_ROTOCRAFT"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_ROTOCRAFT);
    // ADSB_EMITTER_TYPE_UNASSIGNED
    auto currentElement_ADSB_EMITTER_TYPE_UNASSIGNED = (msg + ctr)->ADSB_EMITTER_TYPE_UNASSIGNED;
    outArray[ctr]["ADSB_EMITTER_TYPE_UNASSIGNED"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_UNASSIGNED);
    // ADSB_EMITTER_TYPE_GLIDER
    auto currentElement_ADSB_EMITTER_TYPE_GLIDER = (msg + ctr)->ADSB_EMITTER_TYPE_GLIDER;
    outArray[ctr]["ADSB_EMITTER_TYPE_GLIDER"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_GLIDER);
    // ADSB_EMITTER_TYPE_LIGHTER_AIR
    auto currentElement_ADSB_EMITTER_TYPE_LIGHTER_AIR = (msg + ctr)->ADSB_EMITTER_TYPE_LIGHTER_AIR;
    outArray[ctr]["ADSB_EMITTER_TYPE_LIGHTER_AIR"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_LIGHTER_AIR);
    // ADSB_EMITTER_TYPE_PARACHUTE
    auto currentElement_ADSB_EMITTER_TYPE_PARACHUTE = (msg + ctr)->ADSB_EMITTER_TYPE_PARACHUTE;
    outArray[ctr]["ADSB_EMITTER_TYPE_PARACHUTE"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_PARACHUTE);
    // ADSB_EMITTER_TYPE_ULTRA_LIGHT
    auto currentElement_ADSB_EMITTER_TYPE_ULTRA_LIGHT = (msg + ctr)->ADSB_EMITTER_TYPE_ULTRA_LIGHT;
    outArray[ctr]["ADSB_EMITTER_TYPE_ULTRA_LIGHT"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_ULTRA_LIGHT);
    // ADSB_EMITTER_TYPE_UNASSIGNED2
    auto currentElement_ADSB_EMITTER_TYPE_UNASSIGNED2 = (msg + ctr)->ADSB_EMITTER_TYPE_UNASSIGNED2;
    outArray[ctr]["ADSB_EMITTER_TYPE_UNASSIGNED2"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_UNASSIGNED2);
    // ADSB_EMITTER_TYPE_UAV
    auto currentElement_ADSB_EMITTER_TYPE_UAV = (msg + ctr)->ADSB_EMITTER_TYPE_UAV;
    outArray[ctr]["ADSB_EMITTER_TYPE_UAV"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_UAV);
    // ADSB_EMITTER_TYPE_SPACE
    auto currentElement_ADSB_EMITTER_TYPE_SPACE = (msg + ctr)->ADSB_EMITTER_TYPE_SPACE;
    outArray[ctr]["ADSB_EMITTER_TYPE_SPACE"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_SPACE);
    // ADSB_EMITTER_TYPE_UNASSGINED3
    auto currentElement_ADSB_EMITTER_TYPE_UNASSGINED3 = (msg + ctr)->ADSB_EMITTER_TYPE_UNASSGINED3;
    outArray[ctr]["ADSB_EMITTER_TYPE_UNASSGINED3"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_UNASSGINED3);
    // ADSB_EMITTER_TYPE_EMERGENCY_SURFACE
    auto currentElement_ADSB_EMITTER_TYPE_EMERGENCY_SURFACE = (msg + ctr)->ADSB_EMITTER_TYPE_EMERGENCY_SURFACE;
    outArray[ctr]["ADSB_EMITTER_TYPE_EMERGENCY_SURFACE"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_EMERGENCY_SURFACE);
    // ADSB_EMITTER_TYPE_SERVICE_SURFACE
    auto currentElement_ADSB_EMITTER_TYPE_SERVICE_SURFACE = (msg + ctr)->ADSB_EMITTER_TYPE_SERVICE_SURFACE;
    outArray[ctr]["ADSB_EMITTER_TYPE_SERVICE_SURFACE"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_SERVICE_SURFACE);
    // ADSB_EMITTER_TYPE_POINT_OBSTACLE
    auto currentElement_ADSB_EMITTER_TYPE_POINT_OBSTACLE = (msg + ctr)->ADSB_EMITTER_TYPE_POINT_OBSTACLE;
    outArray[ctr]["ADSB_EMITTER_TYPE_POINT_OBSTACLE"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_POINT_OBSTACLE);
    // ADSB_EMITTER_TYPE_ENUM_END
    auto currentElement_ADSB_EMITTER_TYPE_ENUM_END = (msg + ctr)->ADSB_EMITTER_TYPE_ENUM_END;
    outArray[ctr]["ADSB_EMITTER_TYPE_ENUM_END"] = factory.createScalar(currentElement_ADSB_EMITTER_TYPE_ENUM_END);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_TransponderReport_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_TransponderReport_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_TransponderReport_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::TransponderReport,ros2_px4_msgs_msg_TransponderReport_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_TransponderReport_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::TransponderReport,ros2_px4_msgs_msg_TransponderReport_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_TransponderReport_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::TransponderReport>();
    ros2_px4_msgs_msg_TransponderReport_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_TransponderReport_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_TransponderReport_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::TransponderReport*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_TransponderReport_common, MATLABROS2MsgInterface<px4_msgs::msg::TransponderReport>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_TransponderReport_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER