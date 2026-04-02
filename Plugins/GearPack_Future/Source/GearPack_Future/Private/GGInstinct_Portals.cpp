#include "GGInstinct_Portals.h"

AGGInstinct_Portals::AGGInstinct_Portals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_Portals::OnActorPorted(AActor* Actor, AGGGoat* GoatOwner) {
}


