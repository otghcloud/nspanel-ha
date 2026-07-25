// addon_upload_tft.h - Complete TFT component state management

#pragma once

#ifdef NSPANEL_HA_ADDON_UPLOAD_TFT

#include <cstdint>

namespace nspanel_ha {

    // TFT upload state variables (previously YAML globals)
    extern uint8_t tft_upload_attempt;
    extern bool tft_upload_result;

}  // namespace nspanel_ha

#endif  // NSPANEL_HA_ADDON_UPLOAD_TFT
