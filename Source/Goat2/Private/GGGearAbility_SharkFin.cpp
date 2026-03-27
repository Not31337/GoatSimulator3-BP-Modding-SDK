#include "GGGearAbility_SharkFin.h"

UGGGearAbility_SharkFin::UGGGearAbility_SharkFin() {
    this->bReplicateInputDirectly = true;
    this->SharkFinActor = NULL;
    this->bCanBeInterrupted = true;
    this->PushRadius = 500.00f;
    this->PhysActorForce = 5000.00f;
    this->CharacterForce = 5000.00f;
    this->VehicleForce = 5000.00f;
    this->GoatLanuchForce = 800.00f;
    this->bDrawRadius = false;
    this->SpeedMultiplier = 0.25f;
    this->SharkFin = NULL;
}

void UGGGearAbility_SharkFin::OnCharacterStartEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


