// page_notification.h

#pragma once

#ifdef NSPANEL_HA_PAGE_NOTIFICATION

#include <cstdint>
#include <string>

namespace nspanel_ha {

  extern std::string notification_label;
  extern std::string notification_text;
  extern uint16_t notification_icon_color_normal;
  extern uint16_t notification_icon_color_unread;

}  // namespace nspanel_ha

#endif  // NSPANEL_HA_PAGE_NOTIFICATION
