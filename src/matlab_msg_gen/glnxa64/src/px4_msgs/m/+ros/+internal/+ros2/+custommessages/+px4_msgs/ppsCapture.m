function [data, info] = ppsCapture
%PpsCapture gives an empty data for px4_msgs/PpsCapture
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/PpsCapture';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.rtc_timestamp, info.rtc_timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.pps_rate_exceeded_counter, info.pps_rate_exceeded_counter] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/PpsCapture';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'rtc_timestamp';
info.MatPath{3} = 'pps_rate_exceeded_counter';
