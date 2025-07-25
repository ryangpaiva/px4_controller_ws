function [data, info] = adcReport
%AdcReport gives an empty data for px4_msgs/AdcReport
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/AdcReport';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.device_id, info.device_id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.channel_id, info.channel_id] = ros.internal.ros2.messages.ros2.default_type('int16',12,0);
[data.raw_data, info.raw_data] = ros.internal.ros2.messages.ros2.default_type('int32',12,0);
[data.resolution, info.resolution] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.v_ref, info.v_ref] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/AdcReport';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'device_id';
info.MatPath{3} = 'channel_id';
info.MatPath{4} = 'raw_data';
info.MatPath{5} = 'resolution';
info.MatPath{6} = 'v_ref';
