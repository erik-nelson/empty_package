#include <ros/ros.h>
#include <empty_package/empty_package.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "empty_package");
  ros::NodeHandle n("~");

  EmptyPackage ep;

  if (!ep.Initialize(n)) {
    ROS_ERROR("%s: Failed to initialize empty package.",
              ros::this_node::getName().c_str());
    return EXIT_FAILURE;
  }

  ros::spin();

  return EXIT_SUCCESS;
}
