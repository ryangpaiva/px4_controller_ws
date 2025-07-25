function [data, info] = landingTargetInnovations
%LandingTargetInnovations gives an empty data for px4_msgs/LandingTargetInnovations
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/LandingTargetInnovations';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.innov_x, info.innov_x] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.innov_y, info.innov_y] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.innov_cov_x, info.innov_cov_x] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.innov_cov_y, info.innov_cov_y] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/LandingTargetInnovations';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'innov_x';
info.MatPath{3} = 'innov_y';
info.MatPath{4} = 'innov_cov_x';
info.MatPath{5} = 'innov_cov_y';
