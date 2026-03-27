#include "LostObject.h"

FLostObject::FLostObject() {
    this->LostActor = NULL;
    this->Timestamp = 0.00f;
    this->ForgetAfterOverride = 0.00f;
    this->bWasAttachedBefore = false;
    this->bWasAttachedToHand = false;
    this->HandSlot = EAttachmentHandSlot::AHS_Right;
    this->bDropOnRagdoll = false;
    this->bCanTakeDamage = false;
    this->CarryType = ECarryItemType::CIT_Normal;
    this->bCanDropOnStartle = false;
}

