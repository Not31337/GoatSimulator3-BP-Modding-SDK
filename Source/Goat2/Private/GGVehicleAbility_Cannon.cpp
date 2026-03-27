#include "GGVehicleAbility_Cannon.h"

UGGVehicleAbility_Cannon::UGGVehicleAbility_Cannon() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->ObjectTypeToSpawn = NULL;
    this->MeshOverride = NULL;
    this->MeshComponentTag = TEXT("Cannon");
    this->SpawnSocketName = TEXT("CannonSocket");
    this->AppliedImpulse = 10000.00f;
}


