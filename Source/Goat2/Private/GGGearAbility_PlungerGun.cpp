#include "GGGearAbility_PlungerGun.h"

UGGGearAbility_PlungerGun::UGGGearAbility_PlungerGun() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->PlungerProjectileClass = NULL;
    this->PlungerShootVelocity = 1000.00f;
    this->PlungerShootRandomRotationVelocity = 500.00f;
    this->PlungerShootPitchAngle = 5.00f;
    this->PlungerShootRandomPitchAngle = 5.00f;
    this->PlungerSpawnOffset = 20.00f;
    this->MaxSpawnedPlungers = 15;
    this->bShootAtRandomDirection = false;
}


