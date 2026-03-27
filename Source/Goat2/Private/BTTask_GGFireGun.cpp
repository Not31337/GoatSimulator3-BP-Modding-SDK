#include "BTTask_GGFireGun.h"

UBTTask_GGFireGun::UBTTask_GGFireGun() {
    this->NodeName = TEXT("Fire Gun");
    this->ShootMontage = NULL;
    this->AnimPlayRate = 1.00f;
    this->ProjectileClass = NULL;
    this->OwnerBT = NULL;
    this->NPC = NULL;
}

void UBTTask_GGFireGun::OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}


