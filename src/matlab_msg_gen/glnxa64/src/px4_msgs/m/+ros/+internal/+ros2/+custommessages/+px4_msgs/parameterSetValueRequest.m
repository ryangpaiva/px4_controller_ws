function [data, info] = parameterSetValueRequest
%ParameterSetValueRequest gives an empty data for px4_msgs/ParameterSetValueRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/ParameterSetValueRequest';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.parameter_index, info.parameter_index] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.int_value, info.int_value] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.float_value, info.float_value] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 32, [NaN]);
info.MessageType = 'px4_msgs/ParameterSetValueRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'parameter_index';
info.MatPath{3} = 'int_value';
info.MatPath{4} = 'float_value';
info.MatPath{5} = 'ORB_QUEUE_LENGTH';
