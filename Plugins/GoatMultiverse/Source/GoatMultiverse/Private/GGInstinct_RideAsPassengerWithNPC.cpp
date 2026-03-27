#include "GGInstinct_RideAsPassengerWithNPC.h"

AGGInstinct_RideAsPassengerWithNPC::AGGInstinct_RideAsPassengerWithNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_RideAsPassengerWithNPC::OnCharacterEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


