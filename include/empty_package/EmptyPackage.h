#ifndef EMPTY_PACKAGE_H
#define EMPTY_PACKAGE_H

#include <ros/ros.h>

class EmptyPackage {
 public:
  explicit EmptyPackage();
  ~EmptyPackage();

  bool Initialize(const ros::NodeHandle& n);

 private:
  bool LoadParameters(const ros::NodeHandle& n);
  bool RegisterCallbacks(const ros::NodeHandle& n);

  std::string name_;
};

#endif
