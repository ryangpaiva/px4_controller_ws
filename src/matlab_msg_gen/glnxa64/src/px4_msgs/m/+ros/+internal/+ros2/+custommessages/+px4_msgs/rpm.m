function [data, info] = rpm
%Rpm gives an empty data for px4_msgs/Rpm
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/Rpm';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.rpm_estimate, info.rpm_estimate] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.rpm_raw, info.rpm_raw] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/Rpm';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'rpm_estimate';
info.MatPath{3} = 'rpm_raw';
