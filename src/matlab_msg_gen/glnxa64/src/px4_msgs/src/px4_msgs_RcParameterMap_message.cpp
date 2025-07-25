// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/RcParameterMap
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
#include "px4_msgs/msg/rc_parameter_map.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_RcParameterMap_common : public MATLABROS2MsgInterface<px4_msgs::msg::RcParameterMap> {
  public:
    virtual ~ros2_px4_msgs_msg_RcParameterMap_common(){}
    virtual void copy_from_struct(px4_msgs::msg::RcParameterMap* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::RcParameterMap* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_RcParameterMap_common::copy_from_struct(px4_msgs::msg::RcParameterMap* msg, const matlab::data::Struct& arr,
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
        //valid
        const matlab::data::TypedArray<bool> valid_arr = arr["valid"];
        size_t nelem = 3;
        	std::copy(valid_arr.begin(), valid_arr.begin()+nelem, msg->valid.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid' is wrong type; expected a logical.");
    }
    try {
        //param_index
        const matlab::data::TypedArray<int32_t> param_index_arr = arr["param_index"];
        size_t nelem = 3;
        	std::copy(param_index_arr.begin(), param_index_arr.begin()+nelem, msg->param_index.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param_index' is wrong type; expected a int32.");
    }
    try {
        //param_id
        const matlab::data::CharArray param_id_arr = arr["param_id"];
        const std::string param_id_str = param_id_arr.toAscii();
        size_t nelem = 51;
        	std::copy(param_id_arr.begin(), param_id_arr.begin()+nelem, msg->param_id.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param_id' is wrong type; expected a char.");
    }
    try {
        //scale
        const matlab::data::TypedArray<float> scale_arr = arr["scale"];
        size_t nelem = 3;
        	std::copy(scale_arr.begin(), scale_arr.begin()+nelem, msg->scale.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'scale' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'scale' is wrong type; expected a single.");
    }
    try {
        //value0
        const matlab::data::TypedArray<float> value0_arr = arr["value0"];
        size_t nelem = 3;
        	std::copy(value0_arr.begin(), value0_arr.begin()+nelem, msg->value0.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'value0' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'value0' is wrong type; expected a single.");
    }
    try {
        //value_min
        const matlab::data::TypedArray<float> value_min_arr = arr["value_min"];
        size_t nelem = 3;
        	std::copy(value_min_arr.begin(), value_min_arr.begin()+nelem, msg->value_min.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'value_min' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'value_min' is wrong type; expected a single.");
    }
    try {
        //value_max
        const matlab::data::TypedArray<float> value_max_arr = arr["value_max"];
        size_t nelem = 3;
        	std::copy(value_max_arr.begin(), value_max_arr.begin()+nelem, msg->value_max.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'value_max' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'value_max' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_RcParameterMap_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::RcParameterMap* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","RC_PARAM_MAP_NCHAN","PARAM_ID_LEN","valid","param_index","param_id","scale","value0","value_min","value_max"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/RcParameterMap");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // RC_PARAM_MAP_NCHAN
    auto currentElement_RC_PARAM_MAP_NCHAN = (msg + ctr)->RC_PARAM_MAP_NCHAN;
    outArray[ctr]["RC_PARAM_MAP_NCHAN"] = factory.createScalar(currentElement_RC_PARAM_MAP_NCHAN);
    // PARAM_ID_LEN
    auto currentElement_PARAM_ID_LEN = (msg + ctr)->PARAM_ID_LEN;
    outArray[ctr]["PARAM_ID_LEN"] = factory.createScalar(currentElement_PARAM_ID_LEN);
    // valid
    auto currentElement_valid = (msg + ctr)->valid;
    outArray[ctr]["valid"] = factory.createArray<px4_msgs::msg::RcParameterMap::_valid_type::const_iterator, bool>({currentElement_valid.size(), 1}, currentElement_valid.begin(), currentElement_valid.end());
    // param_index
    auto currentElement_param_index = (msg + ctr)->param_index;
    outArray[ctr]["param_index"] = factory.createArray<px4_msgs::msg::RcParameterMap::_param_index_type::const_iterator, int32_t>({currentElement_param_index.size(), 1}, currentElement_param_index.begin(), currentElement_param_index.end());
    // param_id
    auto currentElement_param_id = (msg + ctr)->param_id;
    outArray[ctr]["param_id"] = factory.createCharArray(std::string(currentElement_param_id.begin(),currentElement_param_id.end()));
    // scale
    auto currentElement_scale = (msg + ctr)->scale;
    outArray[ctr]["scale"] = factory.createArray<px4_msgs::msg::RcParameterMap::_scale_type::const_iterator, float>({currentElement_scale.size(), 1}, currentElement_scale.begin(), currentElement_scale.end());
    // value0
    auto currentElement_value0 = (msg + ctr)->value0;
    outArray[ctr]["value0"] = factory.createArray<px4_msgs::msg::RcParameterMap::_value0_type::const_iterator, float>({currentElement_value0.size(), 1}, currentElement_value0.begin(), currentElement_value0.end());
    // value_min
    auto currentElement_value_min = (msg + ctr)->value_min;
    outArray[ctr]["value_min"] = factory.createArray<px4_msgs::msg::RcParameterMap::_value_min_type::const_iterator, float>({currentElement_value_min.size(), 1}, currentElement_value_min.begin(), currentElement_value_min.end());
    // value_max
    auto currentElement_value_max = (msg + ctr)->value_max;
    outArray[ctr]["value_max"] = factory.createArray<px4_msgs::msg::RcParameterMap::_value_max_type::const_iterator, float>({currentElement_value_max.size(), 1}, currentElement_value_max.begin(), currentElement_value_max.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_RcParameterMap_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_RcParameterMap_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_RcParameterMap_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::RcParameterMap,ros2_px4_msgs_msg_RcParameterMap_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_RcParameterMap_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::RcParameterMap,ros2_px4_msgs_msg_RcParameterMap_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_RcParameterMap_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::RcParameterMap>();
    ros2_px4_msgs_msg_RcParameterMap_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_RcParameterMap_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_RcParameterMap_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::RcParameterMap*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_RcParameterMap_common, MATLABROS2MsgInterface<px4_msgs::msg::RcParameterMap>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_RcParameterMap_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER