// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/OpenDroneIdSystem
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
#include "px4_msgs/msg/open_drone_id_system.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_OpenDroneIdSystem_common : public MATLABROS2MsgInterface<px4_msgs::msg::OpenDroneIdSystem> {
  public:
    virtual ~ros2_px4_msgs_msg_OpenDroneIdSystem_common(){}
    virtual void copy_from_struct(px4_msgs::msg::OpenDroneIdSystem* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::OpenDroneIdSystem* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_OpenDroneIdSystem_common::copy_from_struct(px4_msgs::msg::OpenDroneIdSystem* msg, const matlab::data::Struct& arr,
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
        //id_or_mac
        const matlab::data::TypedArray<uint8_t> id_or_mac_arr = arr["id_or_mac"];
        size_t nelem = 20;
        	std::copy(id_or_mac_arr.begin(), id_or_mac_arr.begin()+nelem, msg->id_or_mac.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id_or_mac' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id_or_mac' is wrong type; expected a uint8.");
    }
    try {
        //operator_location_type
        const matlab::data::TypedArray<uint8_t> operator_location_type_arr = arr["operator_location_type"];
        msg->operator_location_type = operator_location_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'operator_location_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'operator_location_type' is wrong type; expected a uint8.");
    }
    try {
        //classification_type
        const matlab::data::TypedArray<uint8_t> classification_type_arr = arr["classification_type"];
        msg->classification_type = classification_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'classification_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'classification_type' is wrong type; expected a uint8.");
    }
    try {
        //operator_latitude
        const matlab::data::TypedArray<int32_t> operator_latitude_arr = arr["operator_latitude"];
        msg->operator_latitude = operator_latitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'operator_latitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'operator_latitude' is wrong type; expected a int32.");
    }
    try {
        //operator_longitude
        const matlab::data::TypedArray<int32_t> operator_longitude_arr = arr["operator_longitude"];
        msg->operator_longitude = operator_longitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'operator_longitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'operator_longitude' is wrong type; expected a int32.");
    }
    try {
        //area_count
        const matlab::data::TypedArray<uint16_t> area_count_arr = arr["area_count"];
        msg->area_count = area_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'area_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'area_count' is wrong type; expected a uint16.");
    }
    try {
        //area_radius
        const matlab::data::TypedArray<uint16_t> area_radius_arr = arr["area_radius"];
        msg->area_radius = area_radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'area_radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'area_radius' is wrong type; expected a uint16.");
    }
    try {
        //area_ceiling
        const matlab::data::TypedArray<float> area_ceiling_arr = arr["area_ceiling"];
        msg->area_ceiling = area_ceiling_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'area_ceiling' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'area_ceiling' is wrong type; expected a single.");
    }
    try {
        //area_floor
        const matlab::data::TypedArray<float> area_floor_arr = arr["area_floor"];
        msg->area_floor = area_floor_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'area_floor' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'area_floor' is wrong type; expected a single.");
    }
    try {
        //category_eu
        const matlab::data::TypedArray<uint8_t> category_eu_arr = arr["category_eu"];
        msg->category_eu = category_eu_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'category_eu' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'category_eu' is wrong type; expected a uint8.");
    }
    try {
        //class_eu
        const matlab::data::TypedArray<uint8_t> class_eu_arr = arr["class_eu"];
        msg->class_eu = class_eu_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'class_eu' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'class_eu' is wrong type; expected a uint8.");
    }
    try {
        //operator_altitude_geo
        const matlab::data::TypedArray<float> operator_altitude_geo_arr = arr["operator_altitude_geo"];
        msg->operator_altitude_geo = operator_altitude_geo_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'operator_altitude_geo' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'operator_altitude_geo' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_OpenDroneIdSystem_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::OpenDroneIdSystem* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","id_or_mac","operator_location_type","classification_type","operator_latitude","operator_longitude","area_count","area_radius","area_ceiling","area_floor","category_eu","class_eu","operator_altitude_geo"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/OpenDroneIdSystem");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // id_or_mac
    auto currentElement_id_or_mac = (msg + ctr)->id_or_mac;
    outArray[ctr]["id_or_mac"] = factory.createArray<px4_msgs::msg::OpenDroneIdSystem::_id_or_mac_type::const_iterator, uint8_t>({currentElement_id_or_mac.size(), 1}, currentElement_id_or_mac.begin(), currentElement_id_or_mac.end());
    // operator_location_type
    auto currentElement_operator_location_type = (msg + ctr)->operator_location_type;
    outArray[ctr]["operator_location_type"] = factory.createScalar(currentElement_operator_location_type);
    // classification_type
    auto currentElement_classification_type = (msg + ctr)->classification_type;
    outArray[ctr]["classification_type"] = factory.createScalar(currentElement_classification_type);
    // operator_latitude
    auto currentElement_operator_latitude = (msg + ctr)->operator_latitude;
    outArray[ctr]["operator_latitude"] = factory.createScalar(currentElement_operator_latitude);
    // operator_longitude
    auto currentElement_operator_longitude = (msg + ctr)->operator_longitude;
    outArray[ctr]["operator_longitude"] = factory.createScalar(currentElement_operator_longitude);
    // area_count
    auto currentElement_area_count = (msg + ctr)->area_count;
    outArray[ctr]["area_count"] = factory.createScalar(currentElement_area_count);
    // area_radius
    auto currentElement_area_radius = (msg + ctr)->area_radius;
    outArray[ctr]["area_radius"] = factory.createScalar(currentElement_area_radius);
    // area_ceiling
    auto currentElement_area_ceiling = (msg + ctr)->area_ceiling;
    outArray[ctr]["area_ceiling"] = factory.createScalar(currentElement_area_ceiling);
    // area_floor
    auto currentElement_area_floor = (msg + ctr)->area_floor;
    outArray[ctr]["area_floor"] = factory.createScalar(currentElement_area_floor);
    // category_eu
    auto currentElement_category_eu = (msg + ctr)->category_eu;
    outArray[ctr]["category_eu"] = factory.createScalar(currentElement_category_eu);
    // class_eu
    auto currentElement_class_eu = (msg + ctr)->class_eu;
    outArray[ctr]["class_eu"] = factory.createScalar(currentElement_class_eu);
    // operator_altitude_geo
    auto currentElement_operator_altitude_geo = (msg + ctr)->operator_altitude_geo;
    outArray[ctr]["operator_altitude_geo"] = factory.createScalar(currentElement_operator_altitude_geo);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_OpenDroneIdSystem_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_OpenDroneIdSystem_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_OpenDroneIdSystem_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::OpenDroneIdSystem,ros2_px4_msgs_msg_OpenDroneIdSystem_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_OpenDroneIdSystem_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::OpenDroneIdSystem,ros2_px4_msgs_msg_OpenDroneIdSystem_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_OpenDroneIdSystem_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::OpenDroneIdSystem>();
    ros2_px4_msgs_msg_OpenDroneIdSystem_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_OpenDroneIdSystem_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_OpenDroneIdSystem_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::OpenDroneIdSystem*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_OpenDroneIdSystem_common, MATLABROS2MsgInterface<px4_msgs::msg::OpenDroneIdSystem>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_OpenDroneIdSystem_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER