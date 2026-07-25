// addon_upload_tft.cpp - TFT component state definitions

#ifdef NSPANEL_HA_ADDON_UPLOAD_TFT

#include "addon_upload_tft.h"

namespace nspanel_ha {

    // TFT upload state variables (previously YAML globals)
    uint8_t tft_upload_attempt = 0;
    bool tft_upload_result = false;

}  // namespace nspanel_ha

#endif  // NSPANEL_HA_ADDON_UPLOAD_TFT
