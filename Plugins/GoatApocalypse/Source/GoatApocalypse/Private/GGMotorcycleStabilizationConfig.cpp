#include "GGMotorcycleStabilizationConfig.h"

UGGMotorcycleStabilizationConfig::UGGMotorcycleStabilizationConfig() {
    this->AutoCentreTorqueStrength = 250.00f;
    this->RotationDamping = 50.00f;
    this->MaxAngularAcceleration = 500.00f;
    this->AngularVelocityDamping = 2.00f;
    this->bEnableSpeedBasedRoll = true;
    this->MaxRollAngle = 50.00f;
    this->MaxRollAngleSpeed = 3000.00f;
    this->MinSpeedForSurfaceAligning = 500.00f;
}


