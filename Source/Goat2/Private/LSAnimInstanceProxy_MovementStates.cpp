#include "LSAnimInstanceProxy_MovementStates.h"

FLSAnimInstanceProxy_MovementStates::FLSAnimInstanceProxy_MovementStates() {
    this->FallBlendSpaceControl = 0.00f;
    this->bIsPassenger = false;
    this->BikePedalRotationAlpha = 0.00f;
    this->GrindSpeed = 0.00f;
    this->bIsGrindBraking = false;
    this->UnderWaterPitchAngle = 0.00f;
    this->HeadbuttChargePercentage = 0.00f;
    this->AnimationPlayRate = 0.00f;
    this->StrideBlend = 0.00f;
    this->bIsMoving = false;
    this->MovementDirection = ELSMovementDirection::Forward;
    this->bPlayWalkAnimationsWhileFlying = false;
    this->bIsDoingTricks = false;
    this->LSAnimInstance = NULL;
}

