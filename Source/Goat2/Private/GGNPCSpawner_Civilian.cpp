#include "GGNPCSpawner_Civilian.h"
#include "ENPCType.h"

AGGNPCSpawner_Civilian::AGGNPCSpawner_Civilian(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEditRagdolledThroughImpact = false;
    this->bCanEditPassedOut = false;
    this->bCanEditPassOutOnRagdoll = false;
    this->NPCType = ENPCType::NT_Civilian;
    this->StartEvent = NULL;
    this->StartEventSpawner = NULL;
    this->bRequireEnabledStartEvent = false;
    this->StartMoods.AddDefaulted(4);
    this->bCanEditAreaTags = false;
}

bool AGGNPCSpawner_Civilian::StartEventEnabled() {
    return false;
}


