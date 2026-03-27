#include "GGNPCAnimInstanceProxy.h"

FGGNPCAnimInstanceProxy::FGGNPCAnimInstanceProxy() {
    this->CurrentMood = EMoods::M_None;
    this->bIsFalling = false;
    this->bIsBurning = false;
    this->bGrabbedCharacter = false;
    this->bHasNPCBSOverride = false;
    this->NPCMovementBSOverride = NULL;
    this->MovementBSValue = 0.00f;
    this->RotationBSValue = 0.00f;
    this->bIsRotating = false;
    this->CurrentIdleBlendValue = 0;
    this->bHasCustomAnimations = false;
    this->CurrentAnimationState = ENPCAnimationStates::NAS_None;
    this->bIsFrozen = false;
    this->HeadTurningState = EHeadTurning::HT_None;
    this->PreviousLookAtActor = NULL;
    this->NPCMovementComponent = NULL;
}

