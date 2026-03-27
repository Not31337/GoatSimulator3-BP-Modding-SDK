#include "GGGearAbility_RadioactiveRods.h"

UGGGearAbility_RadioactiveRods::UGGGearAbility_RadioactiveRods() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->ExtraLimbComponentClass = NULL;
    this->HitParticle = NULL;
    this->HitSound = NULL;
    this->ExtraLimbsForInstinct = 4;
}

void UGGGearAbility_RadioactiveRods::OnGoatHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}


