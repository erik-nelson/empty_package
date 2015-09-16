#include <empty_package/EmptyPackage.h>

#include <ros/ros.h>

EmptyPackage::EmptyPackage() {}

EmptyPackage::~EmptyPackage() {}

bool EmptyPackage::Initialize(const ros::NodeHandle& n)
{
  name = ros::names::append(n.getNamespace(), "EmptyPackage");

  if (!LoadParameters(n))
  {
    ROS_ERROR("%s: Failed to load parameters.", name.c_str());
    return false;
  }

  if (!RegisterCallbacks(n))
  {
    ROS_ERROR("%s: Failed to register callbacks.", name.c_str());
    return false;
  }

  return true;
}

bool EmptyPackage::LoadParameters(const ros::NodeHandle& n)
{
  return true;
}

bool EmptyPackage::RegisterCallbacks(const ros::NodeHandle& n)
{
  ros::NodeHandle nl(n);

  // pub = nl.advertise<geometry_msgs::WHATEVER>("topic_name", "topic_hz", false);

  return true;
}
