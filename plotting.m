% Read data
sp = readtable('vehicle_attitude_setpoint.csv');
actual = readtable('vehicle_attitude.csv');

% Convert timestamps
t_sp = sp.timestamp * 1e-6;       % seconds
t_act = actual.timestamp * 1e-6;  % seconds

% Quaternions
q_sp = [sp.q_w, sp.q_x, sp.q_y, sp.q_z];
q_act = [actual.q_w, actual.q_x, actual.q_y, actual.q_z];

% Convert quaternions to Euler angles (roll-pitch-yaw, in radians)
euler_sp = quat2eul(q_sp, 'ZYX');   % returns [yaw, pitch, roll]
euler_act = quat2eul(q_act, 'ZYX');

% Reorder to roll-pitch-yaw
euler_sp = euler_sp(:, [3 2 1]);
euler_act = euler_act(:, [3 2 1]);

% ------------------------------
% Plot QUATERNIONS
figure;
subplot(2,1,1)
hold on;
plot(t_act, q_act(:,1), '-', 'DisplayName', 'q_w actual');
plot(t_act, q_act(:,2), '-', 'DisplayName', 'q_x actual');
plot(t_act, q_act(:,3), '-', 'DisplayName', 'q_y actual');
plot(t_act, q_act(:,4), '-', 'DisplayName', 'q_z actual');

plot(t_sp, q_sp(:,1), '--', 'DisplayName', 'q_w setpoint');
plot(t_sp, q_sp(:,2), '--', 'DisplayName', 'q_x setpoint');
plot(t_sp, q_sp(:,3), '--', 'DisplayName', 'q_y setpoint');
plot(t_sp, q_sp(:,4), '--', 'DisplayName', 'q_z setpoint');

title('Quaternion Comparison');
xlabel('Time [s]');
ylabel('Quaternion Value');
legend('Location', 'best');
grid on;

% ------------------------------
% Plot EULER ANGLES
subplot(2,1,2)
labels = {'Roll', 'Pitch', 'Yaw'};
colors = 'rgb';

hold on;
for i = 1:3
    plot(t_act, euler_act(:,i), '-', 'Color', colors(i), 'DisplayName', [labels{i} ' actual']);
    plot(t_sp, euler_sp(:,i), '--', 'Color', colors(i), 'DisplayName', [labels{i} ' setpoint']);
end

title('Euler Angle Comparison (ZYX)');
xlabel('Time [s]');
ylabel('Angle [rad]');
legend('Location', 'best');
grid on;



