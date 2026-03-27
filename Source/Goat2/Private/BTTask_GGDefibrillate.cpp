#include "BTTask_GGDefibrillate.h"

UBTTask_GGDefibrillate::UBTTask_GGDefibrillate() {
    this->NodeName = TEXT("Defibrillate");
    this->bRequireTargetHit = true;
    this->DistanceFromCharacter = 100.00f;
    this->Radius = 80.00f;
    this->Height = 96.00f;
    this->OwnerBT = NULL;
    this->NPC = NULL;
}

void UBTTask_GGDefibrillate::OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}

void UBTTask_GGDefibrillate::OnAnimationEnded(UAnimMontage* Montage, bool Interrupted) {
}


