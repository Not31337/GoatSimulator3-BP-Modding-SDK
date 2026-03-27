#include "GGGearAbility_HandsOfMidas.h"

UGGGearAbility_HandsOfMidas::UGGGearAbility_HandsOfMidas() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->GoldMaterial = NULL;
}

void UGGGearAbility_HandsOfMidas::OnGoatHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}


