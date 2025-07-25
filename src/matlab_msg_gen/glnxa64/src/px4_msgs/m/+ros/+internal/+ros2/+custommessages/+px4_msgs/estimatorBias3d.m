function [data, info] = estimatorBias3d
%EstimatorBias3d gives an empty data for px4_msgs/EstimatorBias3d
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/EstimatorBias3d';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.timestamp_sample, info.timestamp_sample] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.device_id, info.device_id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.bias, info.bias] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.bias_var, info.bias_var] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.innov, info.innov] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.innov_var, info.innov_var] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.innov_test_ratio, info.innov_test_ratio] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
info.MessageType = 'px4_msgs/EstimatorBias3d';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'timestamp_sample';
info.MatPath{3} = 'device_id';
info.MatPath{4} = 'bias';
info.MatPath{5} = 'bias_var';
info.MatPath{6} = 'innov';
info.MatPath{7} = 'innov_var';
info.MatPath{8} = 'innov_test_ratio';
