#include "smb_highlevel_controller/SmbHighlevelController.hpp"

namespace smb_highlevel_controller{

    SmbHighlevelController::SmbHighlevelController(ros::NodeHandle& nh)
        :nodeHandle(nh) ,subscriber() , vel_pub() , viz_pub() , marker() , msg() , p_ang(1.0) , p_vel(.0) {
            nodeHandle.getParam("controller_gain", p_vel);
            std::string topic;
            int queue_size;
            if(!nodeHandle.getParam("subscriber_topic", topic) || ! nodeHandle.getParam("queue_size", queue_size)){
                ROS_ERROR("no subscriber!");
                ros::requestShutdown();
            }
            subscriber = nodeHandle.subscribe(topic , queue_size, &SmbHighlevelController::LaserCallback, this);
            vel_pub = nodeHandle.advertise<geometry_msgs::Twist>("/cmd_vel",1);
            viz_pub = nodeHandle.advertise<visualization_msgs::Marker>("visualization_marker",0);
            initPillarMarker();
            ROS_INFO("node launched!!!!!!!lmao");
            setVel(3.0,"forward");

        }

        void SmbHighlevelController::setVel(const float &vel, const std::string &dof){
    if (dof == "forward") {
        msg.linear.x = vel;
    }
    else if (dof == "ang") {
        msg.angular.z = vel;
    }
}
        void SmbHighlevelController::DriveSmb() {
    vel_pub.publish(msg);
}
        void SmbHighlevelController::adjustSpeed(const float &dist) {
    float vel = p_vel * (dist - 0.16); // stop at 0.16m away
    if (vel > 5.0) {
        vel = 5.0;
    }
    else if (vel < .0) {
        vel = .0;
        setVel(.0, "ang"); // do not turn either
    }

    setVel(vel, "forward");
}
     void SmbHighlevelController::adjustHeading(const float &ang) {
    float diff = -ang;
    setVel(p_ang * diff, "ang");
}   
    void SmbHighlevelController::vizPillar() {
    marker.pose.position.x = pillar_pos[0];
    marker.pose.position.y = pillar_pos[1];
    marker.pose.position.z = -1.0;
    viz_pub.publish(marker);
}

    void SmbHighlevelController::LaserCallback(const sensor_msgs::LaserScan &msg) {
    // fist get the distance
    // typeof(msg.ranges) vector<float>(720)
    auto dist = std::min_element(msg.ranges.cbegin(), msg.ranges.cend());
    // then get the sensor angle
    // angle range [-135 deg, 135 deg]
    int count = dist - msg.ranges.cbegin();
    auto ang = msg.angle_min + msg.angle_increment * count;
    ROS_INFO_STREAM("Pillar is " << *dist << "m away at "
                    << ang / M_PI * 180.0 << " degrees");
    // calculate the coordinate
    pillar_pos[0] = *dist * std::cos(ang);
    pillar_pos[1] = *dist * std::sin(ang);
    ROS_INFO_STREAM("Pillar's coordinate to Smb is [" << pillar_pos[0]
                    << ", " << pillar_pos[1] << "]");

    // adjust heading & drive Smb
    adjustHeading(ang);
    adjustSpeed(*dist);
    DriveSmb();

    // viz pillar
    vizPillar();
}


    void SmbHighlevelController::initPillarMarker() {
    marker.header.frame_id = "base_laser";
    marker.header.stamp = ros::Time();
    marker.ns = "pillar";
    marker.id = 1;
    marker.type = visualization_msgs::Marker::CYLINDER;
    marker.action = visualization_msgs::Marker::ADD;
    marker.pose.position.x = pillar_pos[0];
    marker.pose.position.y = pillar_pos[1];
    marker.pose.position.z = -1.0;
    marker.scale.x = 0.5;
    marker.scale.y = 0.5;
    marker.scale.z = 2;
    marker.color.a = 1.0; // Don't forget to set the alpha!
    marker.color.r = 0.0;
    marker.color.g = 1.0;
    marker.color.b = 0.0;
}
}