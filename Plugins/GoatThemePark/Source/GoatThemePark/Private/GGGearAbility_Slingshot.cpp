#include "GGGearAbility_Slingshot.h"

UGGGearAbility_Slingshot::UGGGearAbility_Slingshot() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bCanActivateWhileRagdoll = false;
    this->SlingshotClass = NULL;
    this->FrontOffset = 100.00f;
    this->SpawnedSlingshot = NULL;
}


