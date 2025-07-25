function [data, info] = gimbalControls
%GimbalControls gives an empty data for px4_msgs/GimbalControls
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/GimbalControls';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.INDEX_ROLL, info.INDEX_ROLL] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.INDEX_PITCH, info.INDEX_PITCH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.INDEX_YAW, info.INDEX_YAW] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.timestamp_sample, info.timestamp_sample] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.control, info.control] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
info.MessageType = 'px4_msgs/GimbalControls';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'INDEX_ROLL';
info.MatPath{3} = 'INDEX_PITCH';
info.MatPath{4} = 'INDEX_YAW';
info.MatPath{5} = 'timestamp_sample';
info.MatPath{6} = 'control';
