#include "GGGoatAnimInstance.h"

UGGGoatAnimInstance::UGGGoatAnimInstance() {
    this->CachedGoat = NULL;
    this->CachedPC = NULL;
    this->bDidBouncyJump = false;
    this->bOnLadder = false;
    this->bIsEmoting = false;
    this->IsMovingBlendweight = 0.00f;
    this->CurrentYawRotationSpeed = 0.00f;
    this->bPlayRunInsteadOfSprint = false;
    this->AirTimestamp = 0.00f;
    this->bInAir = false;
    this->bJustJumped = false;
    this->bIsFreefalling = false;
    this->FreeFallingThreshold = 0.00f;
    this->bPositiveZVelocity = false;
    this->bDoingTricks = false;
    this->FallBlendSpaceControl = 0.00f;
    this->GoatSlotBlending = EGoatBlendSlots::GBS_None;
    this->bIsGrinding = false;
    this->GrindSpeed = 0.00f;
    this->bIsWallrunning = false;
    this->WallrunMeshPotentialAngle = 0.00f;
    this->WallruningDirectionInterpSpeeed = 0.00f;
    this->bIsSwimming = false;
    this->bIsSprinting = false;
    this->bInVehicle = false;
    this->bIsBiking = false;
    this->bIsDriver = false;
    this->bOnlyNeckBaa = false;
    this->bIsRiding = false;
    this->bIsPigSliding = false;
    this->FootIKAlpha = 1.00f;
    this->BikePedalRotationAlpha = 0.00f;
    this->bIsGrounded = true;
    this->MinSprintAnimTime = 0.00f;
    this->MaxSprintAnimTime = 0.00f;
    this->CurrentSprintIndex = 0;
    this->SprintAnimStartTimestamp = 0.00f;
    this->CurrentSprintAnimLength = 0.00f;
    this->bWasSprinting = false;
    this->Animations = NULL;
    this->TongueRetractionInterpSpeedAfterDropLick = 0.00f;
    this->FootIKRagdollBlendOutTime = 0.50f;
    this->VelocityThresholdUnderWaterMovement = 10.00f;
    this->bUseConstantInterpSpeedForUnderWater = true;
    this->UnderWaterPitchRotationSpeed = 120.00f;
    this->UnderWaterToHorizontalRotationSpeed = 90.00f;
}



