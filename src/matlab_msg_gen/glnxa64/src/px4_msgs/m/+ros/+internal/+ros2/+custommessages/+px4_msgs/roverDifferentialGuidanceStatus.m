function [data, info] = roverDifferentialGuidanceStatus
%RoverDifferentialGuidanceStatus gives an empty data for px4_msgs/RoverDifferentialGuidanceStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/RoverDifferentialGuidanceStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.lookahead_distance, info.lookahead_distance] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.heading_error_deg, info.heading_error_deg] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.state_machine, info.state_machine] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/RoverDifferentialGuidanceStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'lookahead_distance';
info.MatPath{3} = 'heading_error_deg';
info.MatPath{4} = 'state_machine';
