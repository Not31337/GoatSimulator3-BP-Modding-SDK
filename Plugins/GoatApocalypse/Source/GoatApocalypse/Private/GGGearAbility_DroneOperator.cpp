#include "GGGearAbility_DroneOperator.h"

UGGGearAbility_DroneOperator::UGGGearAbility_DroneOperator() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->CameraDroneClass = NULL;
    this->CloseBoxAfterRelease = 2.00f;
    this->CameraDrone = NULL;
    this->DroneGear = NULL;
}


