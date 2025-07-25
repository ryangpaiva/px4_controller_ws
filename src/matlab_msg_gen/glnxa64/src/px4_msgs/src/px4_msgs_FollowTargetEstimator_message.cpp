// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/FollowTargetEstimator
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
#include "px4_msgs/msg/follow_target_estimator.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_FollowTargetEstimator_common : public MATLABROS2MsgInterface<px4_msgs::msg::FollowTargetEstimator> {
  public:
    virtual ~ros2_px4_msgs_msg_FollowTargetEstimator_common(){}
    virtual void copy_from_struct(px4_msgs::msg::FollowTargetEstimator* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::FollowTargetEstimator* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_FollowTargetEstimator_common::copy_from_struct(px4_msgs::msg::FollowTargetEstimator* msg, const matlab::data::Struct& arr,
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
        //last_filter_reset_timestamp
        const matlab::data::TypedArray<uint64_t> last_filter_reset_timestamp_arr = arr["last_filter_reset_timestamp"];
        msg->last_filter_reset_timestamp = last_filter_reset_timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'last_filter_reset_timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'last_filter_reset_timestamp' is wrong type; expected a uint64.");
    }
    try {
        //valid
        const matlab::data::TypedArray<bool> valid_arr = arr["valid"];
        msg->valid = valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid' is wrong type; expected a logical.");
    }
    try {
        //stale
        const matlab::data::TypedArray<bool> stale_arr = arr["stale"];
        msg->stale = stale_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stale' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'stale' is wrong type; expected a logical.");
    }
    try {
        //lat_est
        const matlab::data::TypedArray<double> lat_est_arr = arr["lat_est"];
        msg->lat_est = lat_est_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lat_est' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lat_est' is wrong type; expected a double.");
    }
    try {
        //lon_est
        const matlab::data::TypedArray<double> lon_est_arr = arr["lon_est"];
        msg->lon_est = lon_est_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lon_est' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lon_est' is wrong type; expected a double.");
    }
    try {
        //alt_est
        const matlab::data::TypedArray<float> alt_est_arr = arr["alt_est"];
        msg->alt_est = alt_est_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alt_est' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alt_est' is wrong type; expected a single.");
    }
    try {
        //pos_est
        const matlab::data::TypedArray<float> pos_est_arr = arr["pos_est"];
        size_t nelem = 3;
        	std::copy(pos_est_arr.begin(), pos_est_arr.begin()+nelem, msg->pos_est.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_est' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pos_est' is wrong type; expected a single.");
    }
    try {
        //vel_est
        const matlab::data::TypedArray<float> vel_est_arr = arr["vel_est"];
        size_t nelem = 3;
        	std::copy(vel_est_arr.begin(), vel_est_arr.begin()+nelem, msg->vel_est.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_est' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_est' is wrong type; expected a single.");
    }
    try {
        //acc_est
        const matlab::data::TypedArray<float> acc_est_arr = arr["acc_est"];
        size_t nelem = 3;
        	std::copy(acc_est_arr.begin(), acc_est_arr.begin()+nelem, msg->acc_est.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'acc_est' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'acc_est' is wrong type; expected a single.");
    }
    try {
        //prediction_count
        const matlab::data::TypedArray<uint64_t> prediction_count_arr = arr["prediction_count"];
        msg->prediction_count = prediction_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'prediction_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'prediction_count' is wrong type; expected a uint64.");
    }
    try {
        //fusion_count
        const matlab::data::TypedArray<uint64_t> fusion_count_arr = arr["fusion_count"];
        msg->fusion_count = fusion_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fusion_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fusion_count' is wrong type; expected a uint64.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_FollowTargetEstimator_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::FollowTargetEstimator* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","last_filter_reset_timestamp","valid","stale","lat_est","lon_est","alt_est","pos_est","vel_est","acc_est","prediction_count","fusion_count"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/FollowTargetEstimator");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // last_filter_reset_timestamp
    auto currentElement_last_filter_reset_timestamp = (msg + ctr)->last_filter_reset_timestamp;
    outArray[ctr]["last_filter_reset_timestamp"] = factory.createScalar(currentElement_last_filter_reset_timestamp);
    // valid
    auto currentElement_valid = (msg + ctr)->valid;
    outArray[ctr]["valid"] = factory.createScalar(currentElement_valid);
    // stale
    auto currentElement_stale = (msg + ctr)->stale;
    outArray[ctr]["stale"] = factory.createScalar(currentElement_stale);
    // lat_est
    auto currentElement_lat_est = (msg + ctr)->lat_est;
    outArray[ctr]["lat_est"] = factory.createScalar(currentElement_lat_est);
    // lon_est
    auto currentElement_lon_est = (msg + ctr)->lon_est;
    outArray[ctr]["lon_est"] = factory.createScalar(currentElement_lon_est);
    // alt_est
    auto currentElement_alt_est = (msg + ctr)->alt_est;
    outArray[ctr]["alt_est"] = factory.createScalar(currentElement_alt_est);
    // pos_est
    auto currentElement_pos_est = (msg + ctr)->pos_est;
    outArray[ctr]["pos_est"] = factory.createArray<px4_msgs::msg::FollowTargetEstimator::_pos_est_type::const_iterator, float>({currentElement_pos_est.size(), 1}, currentElement_pos_est.begin(), currentElement_pos_est.end());
    // vel_est
    auto currentElement_vel_est = (msg + ctr)->vel_est;
    outArray[ctr]["vel_est"] = factory.createArray<px4_msgs::msg::FollowTargetEstimator::_vel_est_type::const_iterator, float>({currentElement_vel_est.size(), 1}, currentElement_vel_est.begin(), currentElement_vel_est.end());
    // acc_est
    auto currentElement_acc_est = (msg + ctr)->acc_est;
    outArray[ctr]["acc_est"] = factory.createArray<px4_msgs::msg::FollowTargetEstimator::_acc_est_type::const_iterator, float>({currentElement_acc_est.size(), 1}, currentElement_acc_est.begin(), currentElement_acc_est.end());
    // prediction_count
    auto currentElement_prediction_count = (msg + ctr)->prediction_count;
    outArray[ctr]["prediction_count"] = factory.createScalar(currentElement_prediction_count);
    // fusion_count
    auto currentElement_fusion_count = (msg + ctr)->fusion_count;
    outArray[ctr]["fusion_count"] = factory.createScalar(currentElement_fusion_count);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_FollowTargetEstimator_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_FollowTargetEstimator_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_FollowTargetEstimator_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::FollowTargetEstimator,ros2_px4_msgs_msg_FollowTargetEstimator_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_FollowTargetEstimator_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::FollowTargetEstimator,ros2_px4_msgs_msg_FollowTargetEstimator_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_FollowTargetEstimator_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::FollowTargetEstimator>();
    ros2_px4_msgs_msg_FollowTargetEstimator_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_FollowTargetEstimator_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_FollowTargetEstimator_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::FollowTargetEstimator*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_FollowTargetEstimator_common, MATLABROS2MsgInterface<px4_msgs::msg::FollowTargetEstimator>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_FollowTargetEstimator_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER