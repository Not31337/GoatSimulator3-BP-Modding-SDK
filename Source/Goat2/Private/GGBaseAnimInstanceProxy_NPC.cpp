#include "GGBaseAnimInstanceProxy_NPC.h"

FGGBaseAnimInstanceProxy_NPC::FGGBaseAnimInstanceProxy_NPC() {
    this->Mood = EMoods::M_None;
    this->CarryItemType = ECarryItemType::CIT_Normal;
    this->bIsGrabbingCharacter = false;
    this->bIsInVehicle = false;
    this->bIsPassenger = false;
    this->bIsRiding = false;
    this->CurrentAnimationState = ENPCAnimationStates::NAS_None;
    this->PanicType = EPanicTypes::PT_None;
    this->bIsFrozen = false;
    this->AlphaPointAtTargetIKNode = 0.00f;
    this->AlphaElbowBlendingPointAtTarget = 0.00f;
    this->CurrentWalkCycleAnimation = NULL;
    this->CurrentRunCycleAnimation = NULL;
    this->FootLockAlphaIdle = 0.00f;
}

