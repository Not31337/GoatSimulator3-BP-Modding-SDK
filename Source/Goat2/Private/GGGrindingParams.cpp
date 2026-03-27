#include "GGGrindingParams.h"

FGGGrindingParams::FGGGrindingParams() {
    this->Acceleration = 0.00f;
    this->MaxSpeed = 0.00f;
    this->StartGrindingSplineDistanceCondition = 0.00f;
    this->ImpactRagdollThreshold = 0.00f;
    this->CharacterUpAdjust = 0.00f;
    this->JumpZHeight = 0.00f;
    this->SidewaysJumpFactor = 0.00f;
    this->HyperspeedAcceleration = 0.00f;
    this->HyperspeedMaxSpeed = 0.00f;
    this->HyperspeedActivationTime = 0.00f;
    this->HyperspeedCameraShakeClass = NULL;
    this->InitialHyperspeedCameraShakeClass = NULL;
    this->TurnRightMontage = NULL;
    this->TurnLeftMontage = NULL;
    this->DefaultTurnDuration = 0.00f;
    this->InputBlockDurationWhileTurning = 0.00f;
    this->AutoJumpOffDelayWhenStuck = 0.00f;
    this->InitialLerpSpeed = 0.00f;
    this->StartGrindingTurnAroundDistance = 0.00f;
}

