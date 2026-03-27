#include "BTTask_GGDropCharacter.h"

UBTTask_GGDropCharacter::UBTTask_GGDropCharacter() {
    this->NodeName = TEXT("Drop Character");
    this->DropMontage = NULL;
    this->bThrowCharacter = false;
    this->ImpulsePower = 1000.00f;
    this->bPutDroppedCharacterInBBValue = false;
    this->OwnerBT = NULL;
    this->NPC = NULL;
}

void UBTTask_GGDropCharacter::OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}


