#include "GGOwlCompanionAnimInstance.h"

UGGOwlCompanionAnimInstance::UGGOwlCompanionAnimInstance() {
    this->SpeedThresholdForGlidingFactor = 0.33f;
    this->AttachAnimationStartDistance = 350.00f;
    this->LandingAnimationStartDistance = 350.00f;
    this->TakeoffAnimationMaxDistance = 160.00f;
    this->DistanceCurveName = TEXT("Distance");
    this->AttackAnimation = NULL;
    this->LandingAnimation = NULL;
    this->MovementStateMachineName = TEXT("Movement States");
    this->LandingBlendOutTime = 0.50f;
    this->MaxRollAngle = 80.00f;
    this->YawRateForMaxRoll = 90.00f;
    this->RotationInterpSpeed = 2.00f;
    this->MovementComponent = NULL;
    this->Speed = 0.00f;
    this->FlyingAlpha = 0.00f;
    this->AimAlpha = 0.00f;
    this->OwlCompanion = NULL;
    this->SpeedThresholdForGliding = 0.00f;
    this->bIsRagdoll = false;
    this->AttackAnimationTime = 0.00f;
    this->LandingAnimationTime = 0.00f;
    this->State = EGGOwlCompanionAnimState::Idle;
}


