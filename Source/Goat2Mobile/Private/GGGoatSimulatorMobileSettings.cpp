#include "GGGoatSimulatorMobileSettings.h"

UGGGoatSimulatorMobileSettings::UGGGoatSimulatorMobileSettings() {
    this->MobileAppVersion = EGGMobileAppVersion::Multiverse;
    this->bMakingMobileBuilds = false;
    this->LandscapePaths.AddDefaulted(6);
    this->PluginsWithPlatformMobileAssets.AddDefaulted(6);
}


