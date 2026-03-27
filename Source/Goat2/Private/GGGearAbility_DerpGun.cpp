#include "GGGearAbility_DerpGun.h"

UGGGearAbility_DerpGun::UGGGearAbility_DerpGun() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->DerpGunBulletClass = NULL;
    this->ProjectileSpawnerSocket = TEXT("Muzzle");
}


