#include "GGInstinct_GiveGemToNpc.h"

AGGInstinct_GiveGemToNpc::AGGInstinct_GiveGemToNpc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_GiveGemToNpc::OnGemPickedUp(AGGPhysicsActor_Base* Gem, AGGCharacter* Character) {
}

void AGGInstinct_GiveGemToNpc::GoatDroppedLickedActor(AGGGoat* GoatLicking, AActor* LickedActor) {
}


