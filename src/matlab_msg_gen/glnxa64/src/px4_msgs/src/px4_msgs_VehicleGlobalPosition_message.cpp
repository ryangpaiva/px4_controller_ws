// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleGlobalPosition
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
#include "px4_msgs/msg/vehicle_global_position.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleGlobalPosition_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleGlobalPosition> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleGlobalPosition_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleGlobalPosition* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleGlobalPosition* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleGlobalPosition_common::copy_from_struct(px4_msgs::msg::VehicleGlobalPosition* msg, const matlab::data::Struct& arr,
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
        //timestamp_sample
        const matlab::data::TypedArray<uint64_t> timestamp_sample_arr = arr["timestamp_sample"];
        msg->timestamp_sample = timestamp_sample_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_sample' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_sample' is wrong type; expected a uint64.");
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
        //alt
        const matlab::data::TypedArray<float> alt_arr = arr["alt"];
        msg->alt = alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alt' is wrong type; expected a single.");
    }
    try {
        //alt_ellipsoid
        const matlab::data::TypedArray<float> alt_ellipsoid_arr = arr["alt_ellipsoid"];
        msg->alt_ellipsoid = alt_ellipsoid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alt_ellipsoid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alt_ellipsoid' is wrong type; expected a single.");
    }
    try {
        //lat_lon_valid
        const matlab::data::TypedArray<bool> lat_lon_valid_arr = arr["lat_lon_valid"];
        msg->lat_lon_valid = lat_lon_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lat_lon_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lat_lon_valid' is wrong type; expected a logical.");
    }
    try {
        //alt_valid
        const matlab::data::TypedArray<bool> alt_valid_arr = arr["alt_valid"];
        msg->alt_valid = alt_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alt_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alt_valid' is wrong type; expected a logical.");
    }
    try {
        //delta_alt
        const matlab::data::TypedArray<float> delta_alt_arr = arr["delta_alt"];
        msg->delta_alt = delta_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_alt' is wrong type; expected a single.");
    }
    try {
        //delta_terrain
        const matlab::data::TypedArray<float> delta_terrain_arr = arr["delta_terrain"];
        msg->delta_terrain = delta_terrain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_terrain' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_terrain' is wrong type; expected a single.");
    }
    try {
        //lat_lon_reset_counter
        const matlab::data::TypedArray<uint8_t> lat_lon_reset_counter_arr = arr["lat_lon_reset_counter"];
        msg->lat_lon_reset_counter = lat_lon_reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lat_lon_reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lat_lon_reset_counter' is wrong type; expected a uint8.");
    }
    try {
        //alt_reset_counter
        const matlab::data::TypedArray<uint8_t> alt_reset_counter_arr = arr["alt_reset_counter"];
        msg->alt_reset_counter = alt_reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alt_reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alt_reset_counter' is wrong type; expected a uint8.");
    }
    try {
        //terrain_reset_counter
        const matlab::data::TypedArray<uint8_t> terrain_reset_counter_arr = arr["terrain_reset_counter"];
        msg->terrain_reset_counter = terrain_reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'terrain_reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'terrain_reset_counter' is wrong type; expected a uint8.");
    }
    try {
        //eph
        const matlab::data::TypedArray<float> eph_arr = arr["eph"];
        msg->eph = eph_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'eph' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'eph' is wrong type; expected a single.");
    }
    try {
        //epv
        const matlab::data::TypedArray<float> epv_arr = arr["epv"];
        msg->epv = epv_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'epv' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'epv' is wrong type; expected a single.");
    }
    try {
        //terrain_alt
        const matlab::data::TypedArray<float> terrain_alt_arr = arr["terrain_alt"];
        msg->terrain_alt = terrain_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'terrain_alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'terrain_alt' is wrong type; expected a single.");
    }
    try {
        //terrain_alt_valid
        const matlab::data::TypedArray<bool> terrain_alt_valid_arr = arr["terrain_alt_valid"];
        msg->terrain_alt_valid = terrain_alt_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'terrain_alt_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'terrain_alt_valid' is wrong type; expected a logical.");
    }
    try {
        //dead_reckoning
        const matlab::data::TypedArray<bool> dead_reckoning_arr = arr["dead_reckoning"];
        msg->dead_reckoning = dead_reckoning_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dead_reckoning' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dead_reckoning' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleGlobalPosition_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleGlobalPosition* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","timestamp_sample","lat","lon","alt","alt_ellipsoid","lat_lon_valid","alt_valid","delta_alt","delta_terrain","lat_lon_reset_counter","alt_reset_counter","terrain_reset_counter","eph","epv","terrain_alt","terrain_alt_valid","dead_reckoning"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleGlobalPosition");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // lat
    auto currentElement_lat = (msg + ctr)->lat;
    outArray[ctr]["lat"] = factory.createScalar(currentElement_lat);
    // lon
    auto currentElement_lon = (msg + ctr)->lon;
    outArray[ctr]["lon"] = factory.createScalar(currentElement_lon);
    // alt
    auto currentElement_alt = (msg + ctr)->alt;
    outArray[ctr]["alt"] = factory.createScalar(currentElement_alt);
    // alt_ellipsoid
    auto currentElement_alt_ellipsoid = (msg + ctr)->alt_ellipsoid;
    outArray[ctr]["alt_ellipsoid"] = factory.createScalar(currentElement_alt_ellipsoid);
    // lat_lon_valid
    auto currentElement_lat_lon_valid = (msg + ctr)->lat_lon_valid;
    outArray[ctr]["lat_lon_valid"] = factory.createScalar(currentElement_lat_lon_valid);
    // alt_valid
    auto currentElement_alt_valid = (msg + ctr)->alt_valid;
    outArray[ctr]["alt_valid"] = factory.createScalar(currentElement_alt_valid);
    // delta_alt
    auto currentElement_delta_alt = (msg + ctr)->delta_alt;
    outArray[ctr]["delta_alt"] = factory.createScalar(currentElement_delta_alt);
    // delta_terrain
    auto currentElement_delta_terrain = (msg + ctr)->delta_terrain;
    outArray[ctr]["delta_terrain"] = factory.createScalar(currentElement_delta_terrain);
    // lat_lon_reset_counter
    auto currentElement_lat_lon_reset_counter = (msg + ctr)->lat_lon_reset_counter;
    outArray[ctr]["lat_lon_reset_counter"] = factory.createScalar(currentElement_lat_lon_reset_counter);
    // alt_reset_counter
    auto currentElement_alt_reset_counter = (msg + ctr)->alt_reset_counter;
    outArray[ctr]["alt_reset_counter"] = factory.createScalar(currentElement_alt_reset_counter);
    // terrain_reset_counter
    auto currentElement_terrain_reset_counter = (msg + ctr)->terrain_reset_counter;
    outArray[ctr]["terrain_reset_counter"] = factory.createScalar(currentElement_terrain_reset_counter);
    // eph
    auto currentElement_eph = (msg + ctr)->eph;
    outArray[ctr]["eph"] = factory.createScalar(currentElement_eph);
    // epv
    auto currentElement_epv = (msg + ctr)->epv;
    outArray[ctr]["epv"] = factory.createScalar(currentElement_epv);
    // terrain_alt
    auto currentElement_terrain_alt = (msg + ctr)->terrain_alt;
    outArray[ctr]["terrain_alt"] = factory.createScalar(currentElement_terrain_alt);
    // terrain_alt_valid
    auto currentElement_terrain_alt_valid = (msg + ctr)->terrain_alt_valid;
    outArray[ctr]["terrain_alt_valid"] = factory.createScalar(currentElement_terrain_alt_valid);
    // dead_reckoning
    auto currentElement_dead_reckoning = (msg + ctr)->dead_reckoning;
    outArray[ctr]["dead_reckoning"] = factory.createScalar(currentElement_dead_reckoning);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleGlobalPosition_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleGlobalPosition_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleGlobalPosition_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleGlobalPosition,ros2_px4_msgs_msg_VehicleGlobalPosition_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleGlobalPosition_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleGlobalPosition,ros2_px4_msgs_msg_VehicleGlobalPosition_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleGlobalPosition_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleGlobalPosition>();
    ros2_px4_msgs_msg_VehicleGlobalPosition_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleGlobalPosition_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleGlobalPosition_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleGlobalPosition*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleGlobalPosition_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleGlobalPosition>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleGlobalPosition_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER