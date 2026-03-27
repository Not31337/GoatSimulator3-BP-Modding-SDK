#include "GGGearAbility_PActorVehicle.h"

UGGGearAbility_PActorVehicle::UGGGearAbility_PActorVehicle() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->PActorVehicleClass = NULL;
    this->HighlightMaterial = NULL;
    this->HighlightedPActor = NULL;
}

void UGGGearAbility_PActorVehicle::ServerConvertPActorIntoVehicle_Implementation(AGGPhysicsActor* PActor) {
}


