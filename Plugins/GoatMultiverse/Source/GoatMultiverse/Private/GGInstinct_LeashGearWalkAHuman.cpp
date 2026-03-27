#include "GGInstinct_LeashGearWalkAHuman.h"

AGGInstinct_LeashGearWalkAHuman::AGGInstinct_LeashGearWalkAHuman(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_LeashGearWalkAHuman::OnActorLeashed(UGGLeashComponent2* LeashComponent, AActor* LeashedActor) {
}


