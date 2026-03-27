#include "GGVehicleSlipperyStatusEffectParams.h"

FGGVehicleSlipperyStatusEffectParams::FGGVehicleSlipperyStatusEffectParams() {
    this->SlipperyLatStiffValue = 0.00f;
    this->SlipperyLatStiffMaxLoad = 0.00f;
    this->SlipperyLongStiffValue = 0.00f;
    this->SlipperyTireConfig = NULL;
    this->SlipperyCheckInterval = 0.00f;
    this->MinSpeedForCheck = 0.00f;
}

