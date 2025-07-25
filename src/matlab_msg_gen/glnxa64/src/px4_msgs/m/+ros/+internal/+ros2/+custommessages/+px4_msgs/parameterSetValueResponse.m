function [data, info] = parameterSetValueResponse
%ParameterSetValueResponse gives an empty data for px4_msgs/ParameterSetValueResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/ParameterSetValueResponse';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.request_timestamp, info.request_timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.parameter_index, info.parameter_index] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 4, [NaN]);
info.MessageType = 'px4_msgs/ParameterSetValueResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'request_timestamp';
info.MatPath{3} = 'parameter_index';
info.MatPath{4} = 'ORB_QUEUE_LENGTH';
