function [data, info] = actuatorServos
%ActuatorServos gives an empty data for px4_msgs/ActuatorServos
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/ActuatorServos';
[data.MESSAGE_VERSION, info.MESSAGE_VERSION] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 0, [NaN]);
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.timestamp_sample, info.timestamp_sample] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.NUM_CONTROLS, info.NUM_CONTROLS] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 8, [NaN]);
[data.control, info.control] = ros.internal.ros2.messages.ros2.default_type('single',8,0);
info.MessageType = 'px4_msgs/ActuatorServos';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'MESSAGE_VERSION';
info.MatPath{2} = 'timestamp';
info.MatPath{3} = 'timestamp_sample';
info.MatPath{4} = 'NUM_CONTROLS';
info.MatPath{5} = 'control';
