#include "GGGearAbility_Gardener.h"

UGGGearAbility_Gardener::UGGGearAbility_Gardener() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->GardenderClass = NULL;
    this->GardenderSeedClass = NULL;
    this->ShootPitchAngle = 10.00f;
    this->ProjectileSpawnerSocket = TEXT("ProjectileSpawnerSocket");
    this->GardenerComponent = NULL;
    this->Seed = NULL;
    this->AbilityComp = NULL;
}


