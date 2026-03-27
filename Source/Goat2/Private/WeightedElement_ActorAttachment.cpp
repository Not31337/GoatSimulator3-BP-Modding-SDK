#include "WeightedElement_ActorAttachment.h"

FWeightedElement_ActorAttachment::FWeightedElement_ActorAttachment() {
    this->ActorClass = NULL;
    this->bAttachToHandSlot = false;
    this->HandSlot = EAttachmentHandSlot::AHS_Right;
    this->CarryItemType = ECarryItemType::CIT_Normal;
    this->bDropOnRagdoll = false;
    this->bCanTakeDamage = false;
    this->MeshOverride = NULL;
    this->bCanBecomeLostObject = false;
    this->bCanDropOnStartle = false;
}

