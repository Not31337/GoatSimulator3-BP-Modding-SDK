#include "GGGearAbility_Paraglider.h"

UGGGearAbility_Paraglider::UGGGearAbility_Paraglider() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->FallingGravity = 0.25f;
    this->FallingMaxVelocity = 100.00f;
    this->TimeToParaglide = 30.00f;
}

void UGGGearAbility_Paraglider::TriggerInstinct(AGGGoat* Goat) {
}

void UGGGearAbility_Paraglider::CharacterOnLanded(const FHitResult& Hit) {
}

void UGGGearAbility_Paraglider::CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


