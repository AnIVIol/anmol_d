# Topic Information
/clock
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /clock
Type: rosgraph_msgs/Clock
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: 
 * /rosout (http://PEACOCK:42727/)
 * /pointcloud_to_laserscan (http://PEACOCK:44913/)
 * /smb_robot_state_publisher (http://PEACOCK:36845/)
 * /twist_mux (http://PEACOCK:42509/)
 * /base_controller_spawner (http://PEACOCK:40111/)
 * /gazebo (http://PEACOCK:45095/)
 * /gazebo_gui (http://PEACOCK:40885/)
```
/cmd_vel
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /cmd_vel
Type: geometry_msgs/Twist
Publishers: None
Subscribers: 
 * /twist_mux (http://PEACOCK:42509/)
 * /gazebo (http://PEACOCK:45095/)
```
/diagnostics
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /diagnostics
Type: diagnostic_msgs/DiagnosticArray
Publishers: 
 * /twist_mux (http://PEACOCK:42509/)
Subscribers: None
```
/e_stop
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /e_stop
Type: std_msgs/Bool
Publishers: None
Subscribers: 
 * /twist_mux (http://PEACOCK:42509/)
```
/gazebo/link_states
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo/link_states
Type: gazebo_msgs/LinkStates
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo/model_states
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo/model_states
Type: gazebo_msgs/ModelStates
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo/parameter_descriptions
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo/parameter_descriptions
Type: dynamic_reconfigure/ConfigDescription
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo/parameter_updates
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo/parameter_updates
Type: dynamic_reconfigure/Config
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo/performance_metrics
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo/performance_metrics
Type: gazebo_msgs/PerformanceMetrics
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo/set_link_state
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo/set_link_state
Type: gazebo_msgs/LinkState
Publishers: None
Subscribers: 
 * /gazebo (http://PEACOCK:45095/)
```
/gazebo/set_model_state
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo/set_model_state
Type: gazebo_msgs/ModelState
Publishers: None
Subscribers: 
 * /gazebo (http://PEACOCK:45095/)
```
/gazebo_ros_control/pid_gains/LF_WHEEL_JOINT/parameter_descriptions
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo_ros_control/pid_gains/LF_WHEEL_JOINT/parameter_descriptions
Type: dynamic_reconfigure/ConfigDescription
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo_ros_control/pid_gains/LF_WHEEL_JOINT/parameter_updates
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo_ros_control/pid_gains/LF_WHEEL_JOINT/parameter_updates
Type: dynamic_reconfigure/Config
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo_ros_control/pid_gains/LH_WHEEL_JOINT/parameter_descriptions
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo_ros_control/pid_gains/LH_WHEEL_JOINT/parameter_descriptions
Type: dynamic_reconfigure/ConfigDescription
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo_ros_control/pid_gains/LH_WHEEL_JOINT/parameter_updates
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo_ros_control/pid_gains/LH_WHEEL_JOINT/parameter_updates
Type: dynamic_reconfigure/Config
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo_ros_control/pid_gains/RF_WHEEL_JOINT/parameter_descriptions
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo_ros_control/pid_gains/RF_WHEEL_JOINT/parameter_descriptions
Type: dynamic_reconfigure/ConfigDescription
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo_ros_control/pid_gains/RF_WHEEL_JOINT/parameter_updates
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo_ros_control/pid_gains/RF_WHEEL_JOINT/parameter_updates
Type: dynamic_reconfigure/Config
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo_ros_control/pid_gains/RH_WHEEL_JOINT/parameter_descriptions
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo_ros_control/pid_gains/RH_WHEEL_JOINT/parameter_descriptions
Type: dynamic_reconfigure/ConfigDescription
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/gazebo_ros_control/pid_gains/RH_WHEEL_JOINT/parameter_updates
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /gazebo_ros_control/pid_gains/RH_WHEEL_JOINT/parameter_updates
Type: dynamic_reconfigure/Config
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/imu0
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /imu0
Type: sensor_msgs/Imu
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/imu0/accel/parameter_descriptions
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /imu0/accel/parameter_descriptions
Type: dynamic_reconfigure/ConfigDescription
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/imu0/accel/parameter_updates
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /imu0/accel/parameter_updates
Type: dynamic_reconfigure/Config
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/imu0/bias
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /imu0/bias
Type: sensor_msgs/Imu
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/imu0/rate/parameter_descriptions
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /imu0/rate/parameter_descriptions
Type: dynamic_reconfigure/ConfigDescription
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/imu0/rate/parameter_updates
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /imu0/rate/parameter_updates
Type: dynamic_reconfigure/Config
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/imu0/yaw/parameter_descriptions
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /imu0/yaw/parameter_descriptions
Type: dynamic_reconfigure/ConfigDescription
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/imu0/yaw/parameter_updates
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /imu0/yaw/parameter_updates
Type: dynamic_reconfigure/Config
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/joint_states
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /joint_states
Type: sensor_msgs/JointState
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: 
 * /smb_robot_state_publisher (http://PEACOCK:36845/)
```
/joy_teleop/cmd_vel
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /joy_teleop/cmd_vel
Type: geometry_msgs/Twist
Publishers: None
Subscribers: 
 * /twist_mux (http://PEACOCK:42509/)
```
/odom
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /odom
Type: nav_msgs/Odometry
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/rosout
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /rosout
Type: rosgraph_msgs/Log
Publishers: 
 * /pointcloud_to_laserscan (http://PEACOCK:44913/)
 * /smb_robot_state_publisher (http://PEACOCK:36845/)
 * /twist_mux (http://PEACOCK:42509/)
 * /base_controller_spawner (http://PEACOCK:40111/)
 * /gazebo (http://PEACOCK:45095/)
 * /gazebo_gui (http://PEACOCK:40885/)
Subscribers: 
 * /rosout (http://PEACOCK:42727/)
```
/rosout_agg
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /rosout_agg
Type: rosgraph_msgs/Log
Publishers: 
 * /rosout (http://PEACOCK:42727/)
Subscribers: None
```
/rslidar_points
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /rslidar_points
Type: sensor_msgs/PointCloud2
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/scan
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /scan
Type: sensor_msgs/LaserScan
Publishers: 
 * /pointcloud_to_laserscan (http://PEACOCK:44913/)
Subscribers: None
```
/smb_velocity_controller/cmd_vel
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /smb_velocity_controller/cmd_vel
Type: geometry_msgs/Twist
Publishers: 
 * /twist_mux (http://PEACOCK:42509/)
Subscribers: 
 * /gazebo (http://PEACOCK:45095/)
```
/smb_velocity_controller/odom
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /smb_velocity_controller/odom
Type: nav_msgs/Odometry
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/smb_velocity_controller/parameter_descriptions
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /smb_velocity_controller/parameter_descriptions
Type: dynamic_reconfigure/ConfigDescription
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/smb_velocity_controller/parameter_updates
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /smb_velocity_controller/parameter_updates
Type: dynamic_reconfigure/Config
Publishers: 
 * /gazebo (http://PEACOCK:45095/)
Subscribers: None
```
/tf
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /tf
Type: tf2_msgs/TFMessage
Publishers: 
 * /smb_robot_state_publisher (http://PEACOCK:36845/)
 * /gazebo (http://PEACOCK:45095/)
Subscribers: 
 * /pointcloud_to_laserscan (http://PEACOCK:44913/)
```
/tf_static
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /tf_static
Type: tf2_msgs/TFMessage
Publishers: 
 * /smb_robot_state_publisher (http://PEACOCK:36845/)
Subscribers: 
 * /pointcloud_to_laserscan (http://PEACOCK:44913/)
```
/twist_marker_server/cmd_vel
```bash
[kaptaan@PEACOCK]-[~/Workspaces/smb_ws]$ rostopic info /twist_marker_server/cmd_vel
Type: geometry_msgs/Twist
Publishers: None
Subscribers: 
 * /twist_mux (http://PEACOCK:42509/)
```
