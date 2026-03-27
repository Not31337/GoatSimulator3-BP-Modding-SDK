#include "BTTask_GGCreateNPCEvent.h"

UBTTask_GGCreateNPCEvent::UBTTask_GGCreateNPCEvent() {
    this->NodeName = TEXT("Create NPC Event");
    this->bSpawnIntoOwnerArea = true;
    this->bSpawnIntoArea = false;
    this->bUseStartNPC = false;
    this->bUseStartLocation = false;
    this->bUseStartActor = false;
}


