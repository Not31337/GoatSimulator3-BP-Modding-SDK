#include "GGGearAbility_PieThrower.h"

UGGGearAbility_PieThrower::UGGGearAbility_PieThrower() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->LaunchLocationSocket = TEXT("LaunchLocation");
    this->PieLaunchDelay = 0.37f;
    this->LaunchForce = 1500.00f;
    this->ProjectileClass = NULL;
    this->AimPitchOffset = 20.00f;
    this->AttachedProjectile = NULL;
}

void UGGGearAbility_PieThrower::LaunchPie() {
}


