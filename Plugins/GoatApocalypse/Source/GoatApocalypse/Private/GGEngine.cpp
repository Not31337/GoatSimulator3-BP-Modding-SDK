#include "GGEngine.h"

FGGEngine::FGGEngine() {
    this->TorqueCurve = NULL;
    this->EngineRevUpMOI = 0.00f;
    this->EngineRevDownSpeed = 0.00f;
    this->EngineRPMIncreaseSpeed = 0.00f;
    this->PoweredWheelIndex = 0;
    this->EngineTorqueMultiplier = 0.00f;
    this->ClutchEngageSpeed = 0.00f;
}

