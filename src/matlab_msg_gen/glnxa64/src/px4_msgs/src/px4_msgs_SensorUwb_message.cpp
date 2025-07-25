// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SensorUwb
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
#include "px4_msgs/msg/sensor_uwb.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SensorUwb_common : public MATLABROS2MsgInterface<px4_msgs::msg::SensorUwb> {
  public:
    virtual ~ros2_px4_msgs_msg_SensorUwb_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SensorUwb* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorUwb* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SensorUwb_common::copy_from_struct(px4_msgs::msg::SensorUwb* msg, const matlab::data::Struct& arr,
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
        //sessionid
        const matlab::data::TypedArray<uint32_t> sessionid_arr = arr["sessionid"];
        msg->sessionid = sessionid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sessionid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'sessionid' is wrong type; expected a uint32.");
    }
    try {
        //time_offset
        const matlab::data::TypedArray<uint32_t> time_offset_arr = arr["time_offset"];
        msg->time_offset = time_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_offset' is wrong type; expected a uint32.");
    }
    try {
        //counter
        const matlab::data::TypedArray<uint32_t> counter_arr = arr["counter"];
        msg->counter = counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'counter' is wrong type; expected a uint32.");
    }
    try {
        //mac
        const matlab::data::TypedArray<uint16_t> mac_arr = arr["mac"];
        msg->mac = mac_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mac' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mac' is wrong type; expected a uint16.");
    }
    try {
        //mac_dest
        const matlab::data::TypedArray<uint16_t> mac_dest_arr = arr["mac_dest"];
        msg->mac_dest = mac_dest_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mac_dest' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mac_dest' is wrong type; expected a uint16.");
    }
    try {
        //status
        const matlab::data::TypedArray<uint16_t> status_arr = arr["status"];
        msg->status = status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a uint16.");
    }
    try {
        //nlos
        const matlab::data::TypedArray<uint8_t> nlos_arr = arr["nlos"];
        msg->nlos = nlos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nlos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'nlos' is wrong type; expected a uint8.");
    }
    try {
        //distance
        const matlab::data::TypedArray<float> distance_arr = arr["distance"];
        msg->distance = distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'distance' is wrong type; expected a single.");
    }
    try {
        //aoa_azimuth_dev
        const matlab::data::TypedArray<float> aoa_azimuth_dev_arr = arr["aoa_azimuth_dev"];
        msg->aoa_azimuth_dev = aoa_azimuth_dev_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aoa_azimuth_dev' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aoa_azimuth_dev' is wrong type; expected a single.");
    }
    try {
        //aoa_elevation_dev
        const matlab::data::TypedArray<float> aoa_elevation_dev_arr = arr["aoa_elevation_dev"];
        msg->aoa_elevation_dev = aoa_elevation_dev_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aoa_elevation_dev' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aoa_elevation_dev' is wrong type; expected a single.");
    }
    try {
        //aoa_azimuth_resp
        const matlab::data::TypedArray<float> aoa_azimuth_resp_arr = arr["aoa_azimuth_resp"];
        msg->aoa_azimuth_resp = aoa_azimuth_resp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aoa_azimuth_resp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aoa_azimuth_resp' is wrong type; expected a single.");
    }
    try {
        //aoa_elevation_resp
        const matlab::data::TypedArray<float> aoa_elevation_resp_arr = arr["aoa_elevation_resp"];
        msg->aoa_elevation_resp = aoa_elevation_resp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aoa_elevation_resp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aoa_elevation_resp' is wrong type; expected a single.");
    }
    try {
        //aoa_azimuth_fom
        const matlab::data::TypedArray<uint8_t> aoa_azimuth_fom_arr = arr["aoa_azimuth_fom"];
        msg->aoa_azimuth_fom = aoa_azimuth_fom_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aoa_azimuth_fom' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aoa_azimuth_fom' is wrong type; expected a uint8.");
    }
    try {
        //aoa_elevation_fom
        const matlab::data::TypedArray<uint8_t> aoa_elevation_fom_arr = arr["aoa_elevation_fom"];
        msg->aoa_elevation_fom = aoa_elevation_fom_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aoa_elevation_fom' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aoa_elevation_fom' is wrong type; expected a uint8.");
    }
    try {
        //aoa_dest_azimuth_fom
        const matlab::data::TypedArray<uint8_t> aoa_dest_azimuth_fom_arr = arr["aoa_dest_azimuth_fom"];
        msg->aoa_dest_azimuth_fom = aoa_dest_azimuth_fom_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aoa_dest_azimuth_fom' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aoa_dest_azimuth_fom' is wrong type; expected a uint8.");
    }
    try {
        //aoa_dest_elevation_fom
        const matlab::data::TypedArray<uint8_t> aoa_dest_elevation_fom_arr = arr["aoa_dest_elevation_fom"];
        msg->aoa_dest_elevation_fom = aoa_dest_elevation_fom_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aoa_dest_elevation_fom' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aoa_dest_elevation_fom' is wrong type; expected a uint8.");
    }
    try {
        //orientation
        const matlab::data::TypedArray<uint8_t> orientation_arr = arr["orientation"];
        msg->orientation = orientation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation' is wrong type; expected a uint8.");
    }
    try {
        //offset_x
        const matlab::data::TypedArray<float> offset_x_arr = arr["offset_x"];
        msg->offset_x = offset_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'offset_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'offset_x' is wrong type; expected a single.");
    }
    try {
        //offset_y
        const matlab::data::TypedArray<float> offset_y_arr = arr["offset_y"];
        msg->offset_y = offset_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'offset_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'offset_y' is wrong type; expected a single.");
    }
    try {
        //offset_z
        const matlab::data::TypedArray<float> offset_z_arr = arr["offset_z"];
        msg->offset_z = offset_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'offset_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'offset_z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_SensorUwb_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorUwb* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","sessionid","time_offset","counter","mac","mac_dest","status","nlos","distance","aoa_azimuth_dev","aoa_elevation_dev","aoa_azimuth_resp","aoa_elevation_resp","aoa_azimuth_fom","aoa_elevation_fom","aoa_dest_azimuth_fom","aoa_dest_elevation_fom","orientation","offset_x","offset_y","offset_z"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SensorUwb");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // sessionid
    auto currentElement_sessionid = (msg + ctr)->sessionid;
    outArray[ctr]["sessionid"] = factory.createScalar(currentElement_sessionid);
    // time_offset
    auto currentElement_time_offset = (msg + ctr)->time_offset;
    outArray[ctr]["time_offset"] = factory.createScalar(currentElement_time_offset);
    // counter
    auto currentElement_counter = (msg + ctr)->counter;
    outArray[ctr]["counter"] = factory.createScalar(currentElement_counter);
    // mac
    auto currentElement_mac = (msg + ctr)->mac;
    outArray[ctr]["mac"] = factory.createScalar(currentElement_mac);
    // mac_dest
    auto currentElement_mac_dest = (msg + ctr)->mac_dest;
    outArray[ctr]["mac_dest"] = factory.createScalar(currentElement_mac_dest);
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    // nlos
    auto currentElement_nlos = (msg + ctr)->nlos;
    outArray[ctr]["nlos"] = factory.createScalar(currentElement_nlos);
    // distance
    auto currentElement_distance = (msg + ctr)->distance;
    outArray[ctr]["distance"] = factory.createScalar(currentElement_distance);
    // aoa_azimuth_dev
    auto currentElement_aoa_azimuth_dev = (msg + ctr)->aoa_azimuth_dev;
    outArray[ctr]["aoa_azimuth_dev"] = factory.createScalar(currentElement_aoa_azimuth_dev);
    // aoa_elevation_dev
    auto currentElement_aoa_elevation_dev = (msg + ctr)->aoa_elevation_dev;
    outArray[ctr]["aoa_elevation_dev"] = factory.createScalar(currentElement_aoa_elevation_dev);
    // aoa_azimuth_resp
    auto currentElement_aoa_azimuth_resp = (msg + ctr)->aoa_azimuth_resp;
    outArray[ctr]["aoa_azimuth_resp"] = factory.createScalar(currentElement_aoa_azimuth_resp);
    // aoa_elevation_resp
    auto currentElement_aoa_elevation_resp = (msg + ctr)->aoa_elevation_resp;
    outArray[ctr]["aoa_elevation_resp"] = factory.createScalar(currentElement_aoa_elevation_resp);
    // aoa_azimuth_fom
    auto currentElement_aoa_azimuth_fom = (msg + ctr)->aoa_azimuth_fom;
    outArray[ctr]["aoa_azimuth_fom"] = factory.createScalar(currentElement_aoa_azimuth_fom);
    // aoa_elevation_fom
    auto currentElement_aoa_elevation_fom = (msg + ctr)->aoa_elevation_fom;
    outArray[ctr]["aoa_elevation_fom"] = factory.createScalar(currentElement_aoa_elevation_fom);
    // aoa_dest_azimuth_fom
    auto currentElement_aoa_dest_azimuth_fom = (msg + ctr)->aoa_dest_azimuth_fom;
    outArray[ctr]["aoa_dest_azimuth_fom"] = factory.createScalar(currentElement_aoa_dest_azimuth_fom);
    // aoa_dest_elevation_fom
    auto currentElement_aoa_dest_elevation_fom = (msg + ctr)->aoa_dest_elevation_fom;
    outArray[ctr]["aoa_dest_elevation_fom"] = factory.createScalar(currentElement_aoa_dest_elevation_fom);
    // orientation
    auto currentElement_orientation = (msg + ctr)->orientation;
    outArray[ctr]["orientation"] = factory.createScalar(currentElement_orientation);
    // offset_x
    auto currentElement_offset_x = (msg + ctr)->offset_x;
    outArray[ctr]["offset_x"] = factory.createScalar(currentElement_offset_x);
    // offset_y
    auto currentElement_offset_y = (msg + ctr)->offset_y;
    outArray[ctr]["offset_y"] = factory.createScalar(currentElement_offset_y);
    // offset_z
    auto currentElement_offset_z = (msg + ctr)->offset_z;
    outArray[ctr]["offset_z"] = factory.createScalar(currentElement_offset_z);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SensorUwb_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SensorUwb_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SensorUwb_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SensorUwb,ros2_px4_msgs_msg_SensorUwb_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SensorUwb_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SensorUwb,ros2_px4_msgs_msg_SensorUwb_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SensorUwb_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SensorUwb>();
    ros2_px4_msgs_msg_SensorUwb_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SensorUwb_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SensorUwb_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SensorUwb*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SensorUwb_common, MATLABROS2MsgInterface<px4_msgs::msg::SensorUwb>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SensorUwb_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER