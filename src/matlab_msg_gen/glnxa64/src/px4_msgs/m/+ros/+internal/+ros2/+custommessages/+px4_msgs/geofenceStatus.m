function [data, info] = geofenceStatus
%GeofenceStatus gives an empty data for px4_msgs/GeofenceStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/GeofenceStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.geofence_id, info.geofence_id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.status, info.status] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.GF_STATUS_LOADING, info.GF_STATUS_LOADING] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.GF_STATUS_READY, info.GF_STATUS_READY] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
info.MessageType = 'px4_msgs/GeofenceStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'geofence_id';
info.MatPath{3} = 'status';
info.MatPath{4} = 'GF_STATUS_LOADING';
info.MatPath{5} = 'GF_STATUS_READY';
