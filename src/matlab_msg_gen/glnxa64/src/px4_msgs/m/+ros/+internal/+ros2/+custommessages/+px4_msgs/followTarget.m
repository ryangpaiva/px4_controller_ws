function [data, info] = followTarget
%FollowTarget gives an empty data for px4_msgs/FollowTarget
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/FollowTarget';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.lat, info.lat] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.lon, info.lon] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.alt, info.alt] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.vy, info.vy] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.vx, info.vx] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.vz, info.vz] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.est_cap, info.est_cap] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/FollowTarget';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'lat';
info.MatPath{3} = 'lon';
info.MatPath{4} = 'alt';
info.MatPath{5} = 'vy';
info.MatPath{6} = 'vx';
info.MatPath{7} = 'vz';
info.MatPath{8} = 'est_cap';
