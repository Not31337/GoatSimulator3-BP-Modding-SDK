#include "GGGearAbility_Leafblower.h"

UGGGearAbility_Leafblower::UGGGearAbility_Leafblower() {
    this->LeafBlower = NULL;
    this->BlowAreaMesh = NULL;
    this->bHideConeComponent = true;
}

void UGGGearAbility_Leafblower::CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


