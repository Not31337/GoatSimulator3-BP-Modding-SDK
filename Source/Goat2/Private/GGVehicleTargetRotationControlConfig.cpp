#include "GGVehicleTargetRotationControlConfig.h"

FGGVehicleTargetRotationControlConfig::FGGVehicleTargetRotationControlConfig() {
    this->bEnabled = false;
    this->bRollVsSpeedEnabled = false;
    this->RollControlScaling = 0.00f;
    this->RollControlMaxSpeed = 0.00f;
    this->RollMaxAngle = 0.00f;
    this->RotationStiffness = 0.00f;
    this->RotationDamping = 0.00f;
    this->MaxAccel = 0.00f;
    this->AutoCentrePitchStrength = 0.00f;
    this->AutoCentreYawStrength = 0.00f;
}

