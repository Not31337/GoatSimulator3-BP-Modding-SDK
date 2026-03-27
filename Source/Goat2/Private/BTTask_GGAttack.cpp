#include "BTTask_GGAttack.h"

UBTTask_GGAttack::UBTTask_GGAttack() {
    this->NodeName = TEXT("Attack");
    this->bRequireTargetHit = false;
    this->bOverrideAttackVariations = false;
    this->OwnerBT = NULL;
    this->NPC = NULL;
}

void UBTTask_GGAttack::OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}

void UBTTask_GGAttack::OnAnimationEnded(UAnimMontage* Montage, bool Interrupted) {
}


