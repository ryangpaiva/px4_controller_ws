function [data, info] = trajectorySetpoint
%TrajectorySetpoint gives an empty data for px4_msgs/TrajectorySetpoint
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/TrajectorySetpoint';
[data.MESSAGE_VERSION, info.MESSAGE_VERSION] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 0, [NaN]);
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.position, info.position] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.velocity, info.velocity] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.acceleration, info.acceleration] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.jerk, info.jerk] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.yaw, info.yaw] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.yawspeed, info.yawspeed] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/TrajectorySetpoint';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'MESSAGE_VERSION';
info.MatPath{2} = 'timestamp';
info.MatPath{3} = 'position';
info.MatPath{4} = 'velocity';
info.MatPath{5} = 'acceleration';
info.MatPath{6} = 'jerk';
info.MatPath{7} = 'yaw';
info.MatPath{8} = 'yawspeed';
