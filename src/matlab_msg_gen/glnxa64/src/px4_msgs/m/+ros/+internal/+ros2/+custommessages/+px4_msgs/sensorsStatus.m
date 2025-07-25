function [data, info] = sensorsStatus
%SensorsStatus gives an empty data for px4_msgs/SensorsStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/SensorsStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.device_id_primary, info.device_id_primary] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.device_ids, info.device_ids] = ros.internal.ros2.messages.ros2.default_type('uint32',4,0);
[data.inconsistency, info.inconsistency] = ros.internal.ros2.messages.ros2.default_type('single',4,0);
[data.healthy, info.healthy] = ros.internal.ros2.messages.ros2.default_type('logical',4,0);
[data.priority, info.priority] = ros.internal.ros2.messages.ros2.default_type('uint8',4,0);
[data.enabled, info.enabled] = ros.internal.ros2.messages.ros2.default_type('logical',4,0);
[data.external, info.external] = ros.internal.ros2.messages.ros2.default_type('logical',4,0);
info.MessageType = 'px4_msgs/SensorsStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'device_id_primary';
info.MatPath{3} = 'device_ids';
info.MatPath{4} = 'inconsistency';
info.MatPath{5} = 'healthy';
info.MatPath{6} = 'priority';
info.MatPath{7} = 'enabled';
info.MatPath{8} = 'external';
