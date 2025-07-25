function [data, info] = roverMecanumGuidanceStatus
%RoverMecanumGuidanceStatus gives an empty data for px4_msgs/RoverMecanumGuidanceStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/RoverMecanumGuidanceStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.lookahead_distance, info.lookahead_distance] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.heading_error, info.heading_error] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.desired_speed, info.desired_speed] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/RoverMecanumGuidanceStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'lookahead_distance';
info.MatPath{3} = 'heading_error';
info.MatPath{4} = 'desired_speed';
