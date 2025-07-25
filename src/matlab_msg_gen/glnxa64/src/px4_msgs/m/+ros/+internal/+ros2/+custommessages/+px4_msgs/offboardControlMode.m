function [data, info] = offboardControlMode
%OffboardControlMode gives an empty data for px4_msgs/OffboardControlMode
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/OffboardControlMode';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.position, info.position] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.velocity, info.velocity] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.acceleration, info.acceleration] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.attitude, info.attitude] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.body_rate, info.body_rate] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.thrust_and_torque, info.thrust_and_torque] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.direct_actuator, info.direct_actuator] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'px4_msgs/OffboardControlMode';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'position';
info.MatPath{3} = 'velocity';
info.MatPath{4} = 'acceleration';
info.MatPath{5} = 'attitude';
info.MatPath{6} = 'body_rate';
info.MatPath{7} = 'thrust_and_torque';
info.MatPath{8} = 'direct_actuator';
