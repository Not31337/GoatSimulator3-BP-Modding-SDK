#include "GGGearAbility_PersonalTrainer.h"

UGGGearAbility_PersonalTrainer::UGGGearAbility_PersonalTrainer() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->EffectRadius = 1000.00f;
    this->AmountOfInstinctNPCs = 10;
    this->AmountOfInstinctNPCsMobile = 3;
}


