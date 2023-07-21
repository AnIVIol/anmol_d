# pragma once

#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>
#include <visualization_msgs/Marker.h>
#include <cmath>
#include <strings.h>
#include <vector>


 namespace smb_highlevel_controller{

    class SmbHighlevelController
    {
    public:
        SmbHighlevelController(ros::NodeHandle& nh);


    SmbHighlevelController(const SmbHighlevelController &) = delete;

    SmbHighlevelController& operator=(const SmbHighlevelController &) = delete;

    
    ~SmbHighlevelController() = default;

    
    void setVel(const float &vel, const std::string &dof);

   
    void DriveSmb();

    
    void adjustSpeed(const float &dist);

   
    void adjustHeading(const float &ang);

    
    void vizPillar();
    
    private:
    ros::NodeHandle nodeHandle ;
    ros::Subscriber subscriber ;
    ros::Publisher vel_pub, viz_pub;
    geometry_msgs::Twist msg;
    visualization_msgs:: Marker marker;
    float p_ang, p_vel;
    float pillar_pos[2];



    void LaserCallback(const sensor_msgs::LaserScan &msg);

    void initPillarMarker();
    };
 }