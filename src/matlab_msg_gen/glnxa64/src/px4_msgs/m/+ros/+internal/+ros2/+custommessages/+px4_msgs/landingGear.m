function [data, info] = landingGear
%LandingGear gives an empty data for px4_msgs/LandingGear
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/LandingGear';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.GEAR_UP, info.GEAR_UP] = ros.internal.ros2.messages.ros2.default_type('int8',1,0, 1, [NaN]);
[data.GEAR_DOWN, info.GEAR_DOWN] = ros.internal.ros2.messages.ros2.default_type('int8',1,0, -1, [NaN]);
[data.GEAR_KEEP, info.GEAR_KEEP] = ros.internal.ros2.messages.ros2.default_type('int8',1,0, 0, [NaN]);
[data.landing_gear, info.landing_gear] = ros.internal.ros2.messages.ros2.default_type('int8',1,0);
info.MessageType = 'px4_msgs/LandingGear';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'GEAR_UP';
info.MatPath{3} = 'GEAR_DOWN';
info.MatPath{4} = 'GEAR_KEEP';
info.MatPath{5} = 'landing_gear';
