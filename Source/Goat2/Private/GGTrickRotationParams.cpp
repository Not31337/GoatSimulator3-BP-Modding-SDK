#include "GGTrickRotationParams.h"

FGGTrickRotationParams::FGGTrickRotationParams() {
    this->bCanDoTricks = false;
    this->MaxSimulationIterations = 0;
    this->MinTickTime = 0.00f;
    this->SpinningMaxRotationRate = 0.00f;
    this->MaxSimulationTimeStep = 0.00f;
    this->NotifyRadius = 0.00f;
    this->InputToleranceForTrickReset = 0.00f;
}

