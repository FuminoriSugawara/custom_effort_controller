#include "controller_interface/controller_interface.hpp"
#include "custom_effort_controller/custom_effort_controller.hpp"

#include <string>
#include <vector>

#include "hardware_interface/types/hardware_interface_type_values.hpp"

namespace custom_effort_controller
{
controller_interface::return_type CustomEffortController::update(
  const rclcpp::Time & time, const rclcpp::Duration & period)
{
  auto result = effort_controllers::JointGroupEffortController::update(time, period);
  
  if (result != controller_interface::return_type::OK) {
    return result;
  }


  return controller_interface::return_type::OK;
}

}  // namespace custom_effort_controller

#include "pluginlib/class_list_macros.hpp"

PLUGINLIB_EXPORT_CLASS(
  custom_effort_controller::CustomEffortController, controller_interface::ControllerInterface)