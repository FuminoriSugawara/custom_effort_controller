#ifndef CUSTOM_EFFORT_CONTROLLER_HPP_
#define CUSTOM_EFFORT_CONTROLLER_HPP_

#include <string>
#include <vector>

#include "effort_controllers/joint_group_effort_controller.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "rclcpp/rclcpp.hpp"

namespace custom_effort_controller
{

class CustomEffortController : public effort_controllers::JointGroupEffortController
{
    public:
    controller_interface::return_type update(const rclcpp::Time & time, const rclcpp::Duration & period) override;
 

};

}  // namespace custom_effort_controller

#endif  // CUSTOM_EFFORT_CONTROLLER_HPP_