#include "GGInstinct_PActorVehicle.h"

AGGInstinct_PActorVehicle::AGGInstinct_PActorVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_PActorVehicle::OnPlayerEnterPActorVehicle(AGGVehicle* Vehicle, AGGCharacter* Character, bool bIsDriver) {
}


