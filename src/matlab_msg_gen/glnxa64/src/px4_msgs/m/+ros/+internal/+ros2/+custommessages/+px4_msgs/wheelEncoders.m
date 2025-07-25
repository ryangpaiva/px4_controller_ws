function [data, info] = wheelEncoders
%WheelEncoders gives an empty data for px4_msgs/WheelEncoders
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/WheelEncoders';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.wheel_speed, info.wheel_speed] = ros.internal.ros2.messages.ros2.default_type('single',2,0);
[data.wheel_angle, info.wheel_angle] = ros.internal.ros2.messages.ros2.default_type('single',2,0);
info.MessageType = 'px4_msgs/WheelEncoders';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'wheel_speed';
info.MatPath{3} = 'wheel_angle';
