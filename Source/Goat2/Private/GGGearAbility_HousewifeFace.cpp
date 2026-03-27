#include "GGGearAbility_HousewifeFace.h"

UGGGearAbility_HousewifeFace::UGGGearAbility_HousewifeFace() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->LaserProjectileClass = NULL;
}


