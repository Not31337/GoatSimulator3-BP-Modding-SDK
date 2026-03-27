#include "GGGearAbility_Poop.h"

UGGGearAbility_Poop::UGGGearAbility_Poop() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->PoopClass = NULL;
    this->LifeSpam = 20.00f;
}


