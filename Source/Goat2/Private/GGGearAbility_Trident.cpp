#include "GGGearAbility_Trident.h"

UGGGearAbility_Trident::UGGGearAbility_Trident() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->ProjectileBaseClass = NULL;
    this->LaunchPower = 2000.00f;
    this->MaxSpawnedActors = 15;
}


