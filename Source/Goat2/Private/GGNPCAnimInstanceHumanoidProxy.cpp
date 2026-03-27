#include "GGNPCAnimInstanceHumanoidProxy.h"

FGGNPCAnimInstanceHumanoidProxy::FGGNPCAnimInstanceHumanoidProxy() {
    this->CurrentMontageSlot = ENPCMontageSlots::NMS_Default;
    this->BlendSpaceOverride = EBlendspaceOverride::BO_None;
    this->bIsPanicking = false;
    this->bIsDisgusted = false;
    this->bIsInVehicle = false;
    this->bIsPassenger = false;
    this->NPCMovementBSValueOverZero = false;
    this->NPCCarryItemType = ECarryItemType::CIT_Normal;
    this->AlphaPointAtTargetIKNode = 0.00f;
    this->AlphaElbowBlendingPointAtTarget = 0.00f;
    this->MaxTimePointingAtTarget = 0.00f;
}

