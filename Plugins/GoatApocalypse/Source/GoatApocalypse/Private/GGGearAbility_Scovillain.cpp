#include "GGGearAbility_Scovillain.h"

UGGGearAbility_Scovillain::UGGGearAbility_Scovillain() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Scovillain = NULL;
}


