#include "GGGearAbility_PurityRing.h"

UGGGearAbility_PurityRing::UGGGearAbility_PurityRing() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->ActivationDelay = 2.00f;
    this->InvisibilityDelay = 2.00f;
    this->bToggleEnabled = false;
    this->bCanActivateAnimation = true;
    this->RegularGoatData = NULL;
}


void UGGGearAbility_PurityRing::OnEquippedRing() {
}



void UGGGearAbility_PurityRing::MulticastEnableEffect_Implementation(AGGGoat* Goat) {
}

void UGGGearAbility_PurityRing::MulticastDisableEffect_Implementation(AGGGoat* Goat) {
}


