function [data, info] = vehicleAttitude
%VehicleAttitude gives an empty data for px4_msgs/VehicleAttitude
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/VehicleAttitude';
[data.MESSAGE_VERSION, info.MESSAGE_VERSION] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 0, [NaN]);
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.timestamp_sample, info.timestamp_sample] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.q, info.q] = ros.internal.ros2.messages.ros2.default_type('single',4,0);
[data.delta_q_reset, info.delta_q_reset] = ros.internal.ros2.messages.ros2.default_type('single',4,0);
[data.quat_reset_counter, info.quat_reset_counter] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/VehicleAttitude';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'MESSAGE_VERSION';
info.MatPath{2} = 'timestamp';
info.MatPath{3} = 'timestamp_sample';
info.MatPath{4} = 'q';
info.MatPath{5} = 'delta_q_reset';
info.MatPath{6} = 'quat_reset_counter';
