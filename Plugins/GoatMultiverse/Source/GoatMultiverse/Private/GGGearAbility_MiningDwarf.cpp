#include "GGGearAbility_MiningDwarf.h"

UGGGearAbility_MiningDwarf::UGGGearAbility_MiningDwarf() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->GlowStickClass = NULL;
    this->BaaSoundOverride = NULL;
    this->SpawnRotationVerticalOffset = 20.00f;
    this->InitialSpeed = 1000.00f;
    this->ForwardSpawnOffset = 20.00f;
    this->MaxGlowsticks = 7;
}


