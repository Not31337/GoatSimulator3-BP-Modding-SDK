#include "GGGearAbility_TShirtLauncher.h"

UGGGearAbility_TShirtLauncher::UGGGearAbility_TShirtLauncher() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->TShirtClass = NULL;
    this->ShootPitchAngle = 10.00f;
    this->ProjectileSpawnerSocket = TEXT("MuzzleSocket");
    this->TShirtComponent = NULL;
    this->TShirt = NULL;
}


