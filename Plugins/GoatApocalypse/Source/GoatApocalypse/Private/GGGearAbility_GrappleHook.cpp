#include "GGGearAbility_GrappleHook.h"

UGGGearAbility_GrappleHook::UGGGearAbility_GrappleHook() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->VerticalLaunchAngleOffset = 0.00f;
    this->ProjectileClass = NULL;
    this->ReturnHookCatchDistance = 300.00f;
    this->FireHookDelay = 0.10f;
    this->FireHookMontage = NULL;
    this->GrappleGearMesh = NULL;
    this->SpawnedHook = NULL;
}

UGGGoatGear_Skel_GrappleHook* UGGGearAbility_GrappleHook::GetGrappleGearMesh() {
    return NULL;
}


