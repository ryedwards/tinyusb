/** \addtogroup group_configuration
 *  @{ */

//--------------------------------------------------------------------+
// COMMON CONFIGURATION
//--------------------------------------------------------------------+

/// \brief tell the stack which mode (host/device/otg) the usb controller0 will be operated on. Possible value is
/// from \ref TUSB_MODE. Note the hardware usb controller must support the selected mode.
#define TUSB_CFG_CONTROLLER_0_MODE

/** USB controller in MCU often has limited access to specific RAM section. The Stack will use this macro to place internal variables
  into the USB RAM section as follows. if your mcu's usb controller has no such limit, define TUSB_CFG_ATTR_USBRAM as empty macro.

  @code
  TUSB_CFG_ATTR_USBRAM uint8_t usb_xfer_buffer[10];
  @endcode
 */
#define TUSB_CFG_ATTR_USBRAM

#define TUSB_CFG_MCU          ///< Select one of the supported MCU, the value must be from \ref config_mcu_selection
#define TUSB_CFG_OS           ///< Select one of the supported RTOS, the value must be from \ref TUSB_OS RTOS.
#define TUSB_CFG_OS_TASK_PRIO ///< If \ref TUSB_CFG_OS is configured to use a real RTOS (other than TUSB_OS_NONE). This determines the priority of the usb stack task.

//--------------------------------------------------------------------+
// HOST CONFIGURATION
//--------------------------------------------------------------------+
/** \defgroup TUSB_CFG_HOST Host Options
 *  @{ */

/** \brief Maximum number of device host stack can manage
 * \n If hub class is not enabled, set this equal to number of controllers in host mode
 * \n If hub class is enabled, make sure hub is also counted */
#define TUSB_CFG_HOST_DEVICE_MAX

/// \brief Buffer size used for getting device configuration descriptor. You may want to increase this from default (256)
/// to support lengthy composite device especially with Audio or Video class
#define TUSB_CFG_HOST_ENUM_BUFFER_SIZE

/** \defgroup config_host_class Class Driver
 * \brief For each Class Driver a value of 1 means enable, value of 0 mean disable
 * @{ */
#define TUSB_CFG_HOST_HUB           ///< Enable Hub Class
#define TUSB_CFG_HOST_HID_KEYBOARD  ///< Enable HID Class for Keyboard
#define TUSB_CFG_HOST_HID_MOUSE     ///< Enable HID Class for Mouse
#define TUSB_CFG_HOST_HID_GENERIC   ///< Enable HID Class for Generic (not supported yet)
#define TUSB_CFG_HOST_MSC           ///< Enable Mass Storage Class (SCSI subclass only)
#define TUSB_CFG_HOST_CDC           ///< Enable Virtual Serial (Communication Device Class)
#define TUSB_CFG_HOST_CDC_RNDIS     ///< Enable Remote Network Device (require TUSB_CFG_HOST_CDC to be enabled)
/** @} */

/** @} */ // group Host

//--------------------------------------------------------------------+
// DEVICE CONFIGURATION
//--------------------------------------------------------------------+
/** \defgroup TUSB_CFG_DEVICE Device Options
 * \brief For each Class Driver a value of 1 means enable, value of 0 mean disable
 *  @{ */

/** \defgroup config_device_class Class Driver
 * \brief For each Class Driver a value of 1 means enable, value of 0 mean disable
 * @{ */
#define TUSB_CFG_DEVICE_HID_KEYBOARD ///< Enable HID Class for Keyboard
#define TUSB_CFG_DEVICE_HID_MOUSE 	 ///< Enable HID Class for Mouse
#define TUSB_CFG_DEVICE_HID_GENERIC  ///< Enable HID Class for Generic (not supported yet)
#define TUSB_CFG_DEVICE_MSC 				 ///< Enable Mass Storage Class (SCSI subclass only)
#define TUSB_CFG_DEVICE_CDC 				 ///< Enable Virtual Serial (Communication Device Class)
/** @} */

 /** @} */ // group Device

/** @} */
