#include "GGGearAbility_GravityGun.h"

UGGGearAbility_GravityGun::UGGGearAbility_GravityGun() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->OverlapCheckRadius = 150.00f;
    this->ObjectTypes.AddDefaulted(3);
    this->HoldThrowDuration = 1.50f;
    this->bAutoThrowAfterDuration = true;
    this->ThrowCameraShake = NULL;
    this->GravityGunGear = NULL;
}

void UGGGearAbility_GravityGun::ClientCameraShake_Implementation() {
}


