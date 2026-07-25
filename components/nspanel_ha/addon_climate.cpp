// addon_climate.cpp

#ifdef NSPANEL_HA_ADDON_CLIMATE_BASE

#include "addon_climate.h"

namespace nspanel_ha {

// Global var for the friendly name of the embedded climate entity
std::string addon_climate_friendly_name = "Thermostat";
bool is_addon_climate_visible = false;

}  // namespace nspanel_ha

#endif  // NSPANEL_HA_ADDON_CLIMATE_BASE
