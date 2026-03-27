#include "GGGearAbility_Ricer.h"

UGGGearAbility_Ricer::UGGGearAbility_Ricer() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->InteractionRadius = 25.00f;
    this->InteractionHalfHeight = 50.00f;
    this->InteractionStartForwardOffset = 20.00f;
    this->InteractionStartUpOffset = 0.00f;
    this->InteractionForwardDistance = 100.00f;
    this->bDebugDrawInteraction = true;
    this->DestroyedVehicleMaterialIndex = 0;
}


