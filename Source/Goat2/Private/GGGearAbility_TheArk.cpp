#include "GGGearAbility_TheArk.h"

UGGGearAbility_TheArk::UGGGearAbility_TheArk() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->SpawnVelocity = 2000.00f;
    this->MaxRandomAngularVelocity = 500.00f;
    this->ShootPitchAngle = 5.00f;
    this->RandomShootPitchAngleRange = 5.00f;
    this->MaxSpawnedNPCs = 15;
    this->bShootAtRandomDirection = true;
    this->SpawnSocket = TEXT("SpawnSocket");
    this->bPoolNPCsWhenUnequipped = true;
}


