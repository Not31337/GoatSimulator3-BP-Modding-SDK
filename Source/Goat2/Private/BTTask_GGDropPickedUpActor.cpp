#include "BTTask_GGDropPickedUpActor.h"

UBTTask_GGDropPickedUpActor::UBTTask_GGDropPickedUpActor() {
    this->NodeName = TEXT("Drop Picked Up Actor");
    this->DropActorMontage = NULL;
    this->DistanceInFront = 80.00f;
    this->bCanBecomeLostObject = false;
    this->bSetLifespanWhenDropped = true;
    this->LifeSpan = 30.00f;
    this->OwnerBT = NULL;
    this->NPC = NULL;
}

void UBTTask_GGDropPickedUpActor::OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}


