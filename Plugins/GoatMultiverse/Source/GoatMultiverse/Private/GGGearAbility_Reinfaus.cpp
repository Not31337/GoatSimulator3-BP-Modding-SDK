#include "GGGearAbility_Reinfaus.h"

UGGGearAbility_Reinfaus::UGGGearAbility_Reinfaus() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->MinActivationHoldTime = 1.00f;
    this->MaxActivationHoldTime = 1.00f;
    this->AbilityRange = 150.00f;
    this->VerticalImpulseOnTurnIntoProp = 100.00f;
    this->NumFeminineNames = 50;
    this->NumMasculineNames = 100;
    this->EyeTraceRadius = 50.00f;
    this->EyeSizeForScale = 25.00f;
    this->MaxJumpDelay = 5.00f;
    this->JumpForceDelay = 0.20f;
    this->EyeballClass = NULL;
    this->JumpScaleCurve = NULL;
    this->MinJumpForce = 500.00f;
    this->MaxJumpForce = 1000.00f;
    this->JumpEndTorque = 9000.00f;
    this->DestroyBelowSignificanceValue = 0.00f;
}

void UGGGearAbility_Reinfaus::ReleaseAbility() {
}


