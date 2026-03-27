#include "BTTask_GGThrowObject.h"

UBTTask_GGThrowObject::UBTTask_GGThrowObject() {
    this->NodeName = TEXT("Throw Object");
    this->ThrowMontage = NULL;
    this->ThrowForce = 2500.00f;
    this->bUseAdequateForce = false;
    this->DistanceInFront = 50.00f;
    this->AnimPlayRate = 1.00f;
    this->OwnerBT = NULL;
    this->NPC = NULL;
    this->PActorToThrow = NULL;
    this->PhysProjToThrow = NULL;
}

void UBTTask_GGThrowObject::OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}


