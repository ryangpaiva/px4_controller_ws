// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SatelliteInfo
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
#include "px4_msgs/msg/satellite_info.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SatelliteInfo_common : public MATLABROS2MsgInterface<px4_msgs::msg::SatelliteInfo> {
  public:
    virtual ~ros2_px4_msgs_msg_SatelliteInfo_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SatelliteInfo* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SatelliteInfo* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SatelliteInfo_common::copy_from_struct(px4_msgs::msg::SatelliteInfo* msg, const matlab::data::Struct& arr,
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
        //count
        const matlab::data::TypedArray<uint8_t> count_arr = arr["count"];
        msg->count = count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'count' is wrong type; expected a uint8.");
    }
    try {
        //svid
        const matlab::data::TypedArray<uint8_t> svid_arr = arr["svid"];
        size_t nelem = 20;
        	std::copy(svid_arr.begin(), svid_arr.begin()+nelem, msg->svid.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'svid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'svid' is wrong type; expected a uint8.");
    }
    try {
        //used
        const matlab::data::TypedArray<uint8_t> used_arr = arr["used"];
        size_t nelem = 20;
        	std::copy(used_arr.begin(), used_arr.begin()+nelem, msg->used.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used' is wrong type; expected a uint8.");
    }
    try {
        //elevation
        const matlab::data::TypedArray<uint8_t> elevation_arr = arr["elevation"];
        size_t nelem = 20;
        	std::copy(elevation_arr.begin(), elevation_arr.begin()+nelem, msg->elevation.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'elevation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'elevation' is wrong type; expected a uint8.");
    }
    try {
        //azimuth
        const matlab::data::TypedArray<uint8_t> azimuth_arr = arr["azimuth"];
        size_t nelem = 20;
        	std::copy(azimuth_arr.begin(), azimuth_arr.begin()+nelem, msg->azimuth.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'azimuth' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'azimuth' is wrong type; expected a uint8.");
    }
    try {
        //snr
        const matlab::data::TypedArray<uint8_t> snr_arr = arr["snr"];
        size_t nelem = 20;
        	std::copy(snr_arr.begin(), snr_arr.begin()+nelem, msg->snr.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'snr' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'snr' is wrong type; expected a uint8.");
    }
    try {
        //prn
        const matlab::data::TypedArray<uint8_t> prn_arr = arr["prn"];
        size_t nelem = 20;
        	std::copy(prn_arr.begin(), prn_arr.begin()+nelem, msg->prn.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'prn' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'prn' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_SatelliteInfo_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SatelliteInfo* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","SAT_INFO_MAX_SATELLITES","count","svid","used","elevation","azimuth","snr","prn"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SatelliteInfo");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // SAT_INFO_MAX_SATELLITES
    auto currentElement_SAT_INFO_MAX_SATELLITES = (msg + ctr)->SAT_INFO_MAX_SATELLITES;
    outArray[ctr]["SAT_INFO_MAX_SATELLITES"] = factory.createScalar(currentElement_SAT_INFO_MAX_SATELLITES);
    // count
    auto currentElement_count = (msg + ctr)->count;
    outArray[ctr]["count"] = factory.createScalar(currentElement_count);
    // svid
    auto currentElement_svid = (msg + ctr)->svid;
    outArray[ctr]["svid"] = factory.createArray<px4_msgs::msg::SatelliteInfo::_svid_type::const_iterator, uint8_t>({currentElement_svid.size(), 1}, currentElement_svid.begin(), currentElement_svid.end());
    // used
    auto currentElement_used = (msg + ctr)->used;
    outArray[ctr]["used"] = factory.createArray<px4_msgs::msg::SatelliteInfo::_used_type::const_iterator, uint8_t>({currentElement_used.size(), 1}, currentElement_used.begin(), currentElement_used.end());
    // elevation
    auto currentElement_elevation = (msg + ctr)->elevation;
    outArray[ctr]["elevation"] = factory.createArray<px4_msgs::msg::SatelliteInfo::_elevation_type::const_iterator, uint8_t>({currentElement_elevation.size(), 1}, currentElement_elevation.begin(), currentElement_elevation.end());
    // azimuth
    auto currentElement_azimuth = (msg + ctr)->azimuth;
    outArray[ctr]["azimuth"] = factory.createArray<px4_msgs::msg::SatelliteInfo::_azimuth_type::const_iterator, uint8_t>({currentElement_azimuth.size(), 1}, currentElement_azimuth.begin(), currentElement_azimuth.end());
    // snr
    auto currentElement_snr = (msg + ctr)->snr;
    outArray[ctr]["snr"] = factory.createArray<px4_msgs::msg::SatelliteInfo::_snr_type::const_iterator, uint8_t>({currentElement_snr.size(), 1}, currentElement_snr.begin(), currentElement_snr.end());
    // prn
    auto currentElement_prn = (msg + ctr)->prn;
    outArray[ctr]["prn"] = factory.createArray<px4_msgs::msg::SatelliteInfo::_prn_type::const_iterator, uint8_t>({currentElement_prn.size(), 1}, currentElement_prn.begin(), currentElement_prn.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SatelliteInfo_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SatelliteInfo_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SatelliteInfo_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SatelliteInfo,ros2_px4_msgs_msg_SatelliteInfo_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SatelliteInfo_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SatelliteInfo,ros2_px4_msgs_msg_SatelliteInfo_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SatelliteInfo_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SatelliteInfo>();
    ros2_px4_msgs_msg_SatelliteInfo_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SatelliteInfo_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SatelliteInfo_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SatelliteInfo*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SatelliteInfo_common, MATLABROS2MsgInterface<px4_msgs::msg::SatelliteInfo>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SatelliteInfo_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER