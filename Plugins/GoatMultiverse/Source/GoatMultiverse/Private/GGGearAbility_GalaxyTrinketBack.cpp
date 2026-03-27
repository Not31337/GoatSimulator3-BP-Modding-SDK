#include "GGGearAbility_GalaxyTrinketBack.h"

UGGGearAbility_GalaxyTrinketBack::UGGGearAbility_GalaxyTrinketBack() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->HoldDuration = 2.00f;
    this->ExplosionRadius = 1000.00f;
    this->bDisplayDebugRadius = false;
    this->ImpulseStrength = 500.00f;
}


