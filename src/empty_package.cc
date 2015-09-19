#include <empty_package/empty_package.h>

#include <ros/ros.h>

EmptyPackage::EmptyPackage() {}

EmptyPackage::~EmptyPackage() {}

bool EmptyPackage::Initialize(const ros::NodeHandle& n) {
  name_ = ros::names::append(n.getNamespace(), "empty_package");

  if (!LoadParameters(n)) {
    ROS_ERROR("%s: Failed to load parameters.", name_.c_str());
    return false;
  }

  if (!RegisterCallbacks(n)) {
    ROS_ERROR("%s: Failed to register callbacks.", name_.c_str());
    return false;
  }

  return true;
}

bool EmptyPackage::LoadParameters(const ros::NodeHandle& n) { return true; }

bool EmptyPackage::RegisterCallbacks(const ros::NodeHandle& n) {
  ros::NodeHandle nl(n);

  // pub = nl.advertise<geometry_msgs::WHATEVER>("topic_name", "topic_hz",
  // false);

  return true;
}
