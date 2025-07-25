function [data, info] = rtlTimeEstimate
%RtlTimeEstimate gives an empty data for px4_msgs/RtlTimeEstimate
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/RtlTimeEstimate';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.valid, info.valid] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.time_estimate, info.time_estimate] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.safe_time_estimate, info.safe_time_estimate] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/RtlTimeEstimate';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'valid';
info.MatPath{3} = 'time_estimate';
info.MatPath{4} = 'safe_time_estimate';
