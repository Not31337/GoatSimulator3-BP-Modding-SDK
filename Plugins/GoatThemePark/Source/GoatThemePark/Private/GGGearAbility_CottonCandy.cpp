#include "GGGearAbility_CottonCandy.h"

UGGGearAbility_CottonCandy::UGGGearAbility_CottonCandy() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->CottonCandyGear = NULL;
}


