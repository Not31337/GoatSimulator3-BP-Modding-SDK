#include "PActorAttachmentSettings.h"

FPActorAttachmentSettings::FPActorAttachmentSettings() {
    this->bAttachToHandSlot = false;
    this->HandSlot = EAttachmentHandSlot::AHS_Right;
    this->CarryItemType = ECarryItemType::CIT_Normal;
    this->bDropOnRagdoll = false;
    this->bCanTakeDamage = false;
    this->bCanBecomeLostObject = false;
    this->bCanDropOnStartle = false;
}

