#include "GGSimulatedEngine.h"

FGGSimulatedEngine::FGGSimulatedEngine() {
    this->MaxSpeed = 0.00f;
    this->GearChangeDuration = 0.00f;
    this->GearChangeUpThreshold = 0.00f;
    this->GearChangeDownThreshold = 0.00f;
    this->IdleRPM = 0.00f;
    this->GearChangeSound = NULL;
    this->RPMDecayWhileInAir = NULL;
    this->RPMLerpType = EGGLerpType::Linear;
    this->RPMInterpolationSpeed = 0.00f;
    this->RPMExponentialDecay = 0.00f;
    this->ThrottleLerpType = EGGLerpType::Linear;
    this->ThrottleInterpolationSpeed = 0.00f;
    this->ThrottleExpDecay = 0.00f;
}

