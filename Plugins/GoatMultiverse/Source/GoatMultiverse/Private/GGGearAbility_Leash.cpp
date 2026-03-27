#include "GGGearAbility_Leash.h"
#include "GGLeashComponent2.h"

UGGGearAbility_Leash::UGGGearAbility_Leash() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->TraceRadius = 30.00f;
    this->TraceObjectTypes.AddDefaulted(2);
    this->TraceDistance = 300.00f;
    this->TraceVerticalAngleOffset = 15.00f;
    this->HoldTimeToResetAll = 0.50f;
    this->LeashComponentClass = UGGLeashComponent2::StaticClass();
}

void UGGGearAbility_Leash::ReleaseAllLeashedNPC() {
}


