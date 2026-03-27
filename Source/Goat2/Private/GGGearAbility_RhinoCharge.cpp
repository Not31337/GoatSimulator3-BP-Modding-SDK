#include "GGGearAbility_RhinoCharge.h"

UGGGearAbility_RhinoCharge::UGGGearAbility_RhinoCharge() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ChargeDuration = 4.00f;
    this->ForceCompClass = NULL;
    this->ForceComp = NULL;
}

void UGGGearAbility_RhinoCharge::ServerSetWantToSprinting_Implementation(bool bWantsToSprintNow) {
}


