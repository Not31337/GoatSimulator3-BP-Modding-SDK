#include "BTTask_GGPickUpActor.h"

UBTTask_GGPickUpActor::UBTTask_GGPickUpActor() {
    this->NodeName = TEXT("Pick Up Actor");
    this->PickupMontage = NULL;
    this->PickupType = EPickupType::PT_EnvBehaviorContainer;
    this->bAttemptToUseLostObjectData = false;
    this->bAttachToHand = true;
    this->HandSlot = EAttachmentHandSlot::AHS_Right;
    this->CarryType = ECarryItemType::CIT_Normal;
    this->bDropOnRagdoll = false;
    this->bCanTakeDamage = false;
    this->bCanBecomeLostObject = false;
    this->bCanDropOnStartle = false;
    this->OwnerBT = NULL;
    this->NPC = NULL;
    this->bCanEditBehaviorContainer = true;
    this->bCanEditExisitingPActor = false;
}

void UBTTask_GGPickUpActor::OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}


