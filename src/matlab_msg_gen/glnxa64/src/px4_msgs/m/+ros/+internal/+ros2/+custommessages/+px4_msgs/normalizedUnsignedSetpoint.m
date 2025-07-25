function [data, info] = normalizedUnsignedSetpoint
%NormalizedUnsignedSetpoint gives an empty data for px4_msgs/NormalizedUnsignedSetpoint
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/NormalizedUnsignedSetpoint';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.normalized_setpoint, info.normalized_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/NormalizedUnsignedSetpoint';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'normalized_setpoint';
