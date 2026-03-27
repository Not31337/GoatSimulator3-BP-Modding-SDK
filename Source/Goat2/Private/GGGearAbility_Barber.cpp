#include "GGGearAbility_Barber.h"

UGGGearAbility_Barber::UGGGearAbility_Barber() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->BlowdryerProjectileClass = NULL;
    this->ShootPitchAngle = 0.00f;
    this->ProjectileSpawnerSocket = TEXT("ProjectileSpawnerSocket");
}


