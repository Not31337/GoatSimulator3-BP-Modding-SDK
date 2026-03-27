#include "GGGearAbility_RockHero.h"

UGGGearAbility_RockHero::UGGGearAbility_RockHero() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->BoulderActorClass = NULL;
}

void UGGGearAbility_RockHero::GoatStartedControllingObject(UObject* Object) {
}

void UGGGearAbility_RockHero::CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


