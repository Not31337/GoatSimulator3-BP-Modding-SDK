#include "GGInstinct_CloningMachine.h"

AGGInstinct_CloningMachine::AGGInstinct_CloningMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_CloningMachine::OnActorCloned(AActor* Original, AActor* Clone) {
}


