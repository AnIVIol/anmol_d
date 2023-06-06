sudo apt install -y ros-noetic-hector-gazebo-plugins ros-noetic-velodyne ros-noetic-velodyne-description ros-noetic-velodyne-gazebo-plugins ros-noetic-pointcloud-to-laserscan ros-noetic-twist-mux
cd ~
mkdir Git Workspace
cd Workspace
mkdir -p smb_ws/src/
mkdir -p teleop_twist_keyboard/src/
cd ~/Git/
wget https://ethz.ch/content/dam/ethz/special-interest/mavt/robotics-n-intelligent-systems/rsl-dam/ROS2021/lec1/smb_common.zip
git clone https://github.com/ros-teleop/teleop_twist_keyboard.git
unzip smb_common.zip
rm smb_common.zip
ln -s ~/Git/smb_common/* ~/Workspaces/smb_ws/src/
ln -s ~/Git/teleop_twist_keyboard/ ~/Workspaces/teleop_twist_keyboard/src/
cd ~/Workspace/smb_common/
catkin build
source devel/setup.bash
cd ~/Workspaces/teleop_twist_keyboard/
catkin build
source devel/setup.bash
cd ~