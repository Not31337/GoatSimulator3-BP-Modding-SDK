#include "GGGearAbility_SideKick.h"

UGGGearAbility_SideKick::UGGGearAbility_SideKick() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}


