#include "GGNPCSpawner_Professional.h"
#include "ENPCType.h"

AGGNPCSpawner_Professional::AGGNPCSpawner_Professional(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEditRagdolledThroughImpact = false;
    this->bCanEditPassedOut = false;
    this->bCanEditPassOutOnRagdoll = false;
    this->NPCType = ENPCType::NT_Professional;
    this->bCanUseProfessionalSpawnPool = true;
}

AGGNPC* AGGNPCSpawner_Professional::SpawnNPCElement(FWeightedElement_Professional Element) {
    return NULL;
}


