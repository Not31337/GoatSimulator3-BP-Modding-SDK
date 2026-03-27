#include "GGGearAbility_Tant.h"

UGGGearAbility_Tant::UGGGearAbility_Tant() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->TargetingDistance = 1000.00f;
    this->FireArc = 60.00f;
    this->TargetPriorityMode = ETargetPriorityMode::Closest;
    this->Cooldown = 1.00f;
    this->bUseDifferentCooldownForPlayers = true;
    this->CooldownForPlayers = 2.00f;
    this->ProjectileClass = NULL;
    this->AddedYawArcRotation = 3.00f;
    this->ShootLocationSocket = TEXT("MuzzleSocket");
    this->bUseGearPartFrontDirection = false;
    this->bShowDebugHelpers = false;
    this->ComponentForLauncher = NULL;
    this->Target = NULL;
}


