#include "BaseAnimInstanceProxy.h"

FBaseAnimInstanceProxy::FBaseAnimInstanceProxy() {
    this->MovementDirection = ELSMovementDirection::Forward;
    this->MovementMode = MOVE_None;
    this->Gait = ELSGait::Walking;
    this->Stance = ELSStance::Standing;
    this->StrideBlend = 0.00f;
    this->WalkRunBlend = 0.00f;
    this->PlayRate = 0.00f;
    this->PlayRateCrouch = 0.00f;
    this->LeanForward = 0.00f;
    this->LeanSideways = 0.00f;
    this->bIsMoving = false;
    this->bShouldMove = false;
    this->bJumped = false;
    this->bIsMovingOnGround = false;
    this->bHasMovementInput = false;
    this->bIsRagdoll = false;
    this->bIsStandingUp = false;
    this->FootIKAlpha = 0.00f;
    this->bRotateLeft = false;
    this->bRotateRight = false;
    this->RotateAnimationPlayRate = 0.00f;
    this->FlailRate = 0.00f;
    this->bIsStumbling = false;
    this->LookAtAlpha = 0.00f;
    this->LookAtAlphaTorso = 0.00f;
}

