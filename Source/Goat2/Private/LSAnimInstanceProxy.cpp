#include "LSAnimInstanceProxy.h"

FLSAnimInstanceProxy::FLSAnimInstanceProxy() {
    this->Speed = 0.00f;
    this->Direction = 0.00f;
    this->bIsMoving = false;
    this->Gait = ELSGait::Walking;
    this->MovementMode = MOVE_None;
    this->PreviousMovementMode = MOVE_None;
    this->Stance = ELSStance::Standing;
    this->bIsAiming = false;
    this->bIsRagdoll = false;
    this->bIsStandingUp = false;
    this->RotationMode = ELSRotationMode::VelocityDirection;
    this->ViewMode = ELSViewMode::FirstPerson;
    this->WalkRunBlend = 0.00f;
    this->bRightFood = false;
    this->StartPosition = 0.00f;
    this->LeanRotation = 0.00f;
    this->LeanAcceleration = 0.00f;
    this->LeanInAir = 0.00f;
    this->LandPredictionAlpha = 0.00f;
    this->ActiveLocomotionState = ELSLocomotionState::None;
    this->IdleEntryState = ELSIdleEntryState::Normal;
    this->MovementDirection = ELSMovementDirection::Forward;
    this->FlailRate = 0.00f;
    this->FlailBlendAlpha = 0.00f;
    this->bWantsToTurnInPlace = false;
    this->PlayRate = 0.00f;
    this->NormalPlayRate = 0.00f;
    this->OverlayState = 0;
    this->StrideBlend = 0.00f;
    this->RootBoneAdjustmentAlpha = 0.00f;
}

