#include "GGGearAbility_RocketBoots.h"

UGGGearAbility_RocketBoots::UGGGearAbility_RocketBoots() {
    this->MaxSpeed = 1000.00f;
    this->Acceleration = 200.00f;
    this->Duration = 1.00f;
    this->RocketBoostAbilityTag = TEXT("GearAbility.RocketBoots");
    this->DamageRadius = 50.00f;
    this->bDealsForceDamage = true;
    this->ForceDamage = 100.00f;
    this->ImpulseDamage = 100.00f;
    this->bDealDamageToGGMeshComponents = true;
    this->ForceComponent = NULL;
    this->RocketBoots = NULL;
    this->RocketBootGear = NULL;
}

void UGGGearAbility_RocketBoots::CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


