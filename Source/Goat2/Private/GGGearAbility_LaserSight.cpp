#include "GGGearAbility_LaserSight.h"

UGGGearAbility_LaserSight::UGGGearAbility_LaserSight() {
    this->PhysActorForce = 17000.00f;
    this->CharacterForce = 1000.00f;
    this->VehicleForce = 30000.00f;
    this->NormalForce = 15000.00f;
    this->LaserSightGear = NULL;
    this->LastLaunchedActor = NULL;
}

void UGGGearAbility_LaserSight::CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


