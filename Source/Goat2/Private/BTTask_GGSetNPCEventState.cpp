#include "BTTask_GGSetNPCEventState.h"

UBTTask_GGSetNPCEventState::UBTTask_GGSetNPCEventState() {
    this->NodeName = TEXT("Set NPC Event State");
    this->StateToSet = 0;
    this->bSetOnAllNPCs = false;
}


