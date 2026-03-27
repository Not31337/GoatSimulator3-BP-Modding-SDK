#include "GGGearAbility_ElfHat.h"

UGGGearAbility_ElfHat::UGGGearAbility_ElfHat() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->VerticalLaunchAngleOffset = 30.00f;
}


