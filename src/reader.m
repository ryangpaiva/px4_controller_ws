% 1. Specify bag file path
bagFilePath = './quarts/quarts_0.db3'; 
px4MsgsPath = '/home/ryangpaiva/px4_minimal_ws/src';
% Check if the path exists to avoid errors
if exist(px4MsgsPath, 'dir') == 7
    disp(['Generating ROS 2 messages from: ', px4MsgsPath]);
    try
        ros2genmsg(px4MsgsPath);
        disp('Custom ROS 2 messages generated successfully.');
    catch ME
        warning(['Error generating custom messages: ', ME.message]);
        disp('Please ensure the px4_msgs directory contains the correct structure (e.g., a "msg" folder with .msg files).');
        disp('If you continue to have issues, you might need to manually set the MATLAB current folder to the parent of px4_msgs, or verify your ROS 2 environment setup.');
    end
else
    error(['Error: px4_msgs directory not found at ', px4MsgsPath, '. Please verify the path.']);
end

% 2. Create ros2bagreader object
bagReader = ros2bagreader(bagFilePath); 


DesiredAttitude = select(bagReader, 'Topic', '/fmu/in/vehicle_attitude_setpoint'); 
ActualAttitude = select(bagReader, 'TOpic', '/fmu/out/vehicle_attitude'); 
%ros2genmsg('./px4_msgs/');
msgsFiltered = readMessages(ActualAttitude);