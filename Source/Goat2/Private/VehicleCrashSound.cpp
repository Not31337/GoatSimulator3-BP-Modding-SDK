#include "VehicleCrashSound.h"

FVehicleCrashSound::FVehicleCrashSound() {
    this->CrashType = EVehicleCrashType::VCT_Other;
    this->MinImpactSize = 0.00f;
    this->Sound = NULL;
}

