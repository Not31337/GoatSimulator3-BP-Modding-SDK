#include "GGGearAbility_MiningOar.h"

UGGGearAbility_MiningOar::UGGGearAbility_MiningOar() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UGGGearAbility_MiningOar::HandleGoatEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


