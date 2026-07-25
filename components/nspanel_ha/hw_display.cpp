// hw_display.cpp

#ifdef NSPANEL_HA_HW_DISPLAY

#include "hw_display.h"

namespace nspanel_ha {

    static const char *TAG_COMPONENT_HW_DISPLAY = "nspanel.component.hw_display";

    uint8_t brightness_current = 100;
    uint8_t display_mode = UINT8_MAX;
    uint8_t display_charset = UINT8_MAX;

}  // namespace nspanel_ha

#endif  // NSPANEL_HA_HW_DISPLAY
