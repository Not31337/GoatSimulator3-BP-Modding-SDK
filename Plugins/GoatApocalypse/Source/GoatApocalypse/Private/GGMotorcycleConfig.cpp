#include "GGMotorcycleConfig.h"

UGGMotorcycleConfig::UGGMotorcycleConfig() {
    this->MaxDriveTorque = 2000.00f;
    this->DriveTorqueCurve = NULL;
    this->BrakeTorque = 1000.00f;
    this->MaxForwardSpeed = 2500.00f;
    this->MaxBackwardSpeed = 450.00f;
    this->CurveMaxSteeringAngle = NULL;
    this->SteeringAngleInterpSpeed = 10.00f;
    this->BurnoutMaxMotorcycleSpeed = 60.00f;
    this->BurnoutSideWaysForce = 800.00f;
    this->BurnoutHoldTimeForMaxBoost = 1.00f;
    this->BurnoutReleaseBoost = 700.00f;
    this->BurnoutReleaseBoostDuration = 0.50f;
    this->BurnoutReleaseSound = NULL;
    this->bAdjustBackWheelFrictionDuringHandbrake = true;
    this->HandbrakeTorque = 3000.00f;
    this->HandbrakeFrictionReleaseDelay = 0.50f;
    this->HandbrakeFrictionMinSpeed = 0.50f;
    this->LandingPredictionTime = 0.50f;
    this->AirStabilizationDelay = 1.00f;
    this->AirStabilizationAfterTrickDelay = 0.50f;
    this->AirTricksPitchStrength = 100.00f;
    this->AirTricksYawStrength = 100.00f;
    this->AirTrickYawRampUpSpeedStart = 1.00f;
    this->AirTrickYawRampUpSpeed = 2.00f;
    this->DeltaSpeedToThrowPlayerOffAfterHit = 1000.00f;
    this->bUseSeparateVerticalSpeed = true;
    this->VerticalDeltaSpeedToThrowPlayerOffAfterHit = 2000.00f;
    this->ThrowOffDurationAfterHit = 0.20f;
    this->bShowImpactDebugInfo = false;
    this->CollisionResponseCurve = NULL;
    this->CrashBurstParticle = NULL;
}


