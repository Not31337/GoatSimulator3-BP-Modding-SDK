#include "GGGearAbility_HelicopterBot.h"

UGGGearAbility_HelicopterBot::UGGGearAbility_HelicopterBot() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ToggleAbilityHoldThreshold = 0.20f;
    this->FallingGravity = 0.20f;
    this->FallingMaxVelocity = 300.00f;
    this->MaxFlightHeight = 1000.00f;
    this->FadeOutDuration = 0.50f;
    this->HelicopterBotGear = NULL;
}

void UGGGearAbility_HelicopterBot::OnJumped(AGGCharacter* Character) {
}

void UGGGearAbility_HelicopterBot::CharacterOnLanded(const FHitResult& Hit) {
}

void UGGGearAbility_HelicopterBot::CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


