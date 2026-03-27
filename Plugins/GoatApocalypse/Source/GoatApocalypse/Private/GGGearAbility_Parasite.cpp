#include "GGGearAbility_Parasite.h"

UGGGearAbility_Parasite::UGGGearAbility_Parasite() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->HoldTimeToReleaseEatenTargets = 0.20f;
}


