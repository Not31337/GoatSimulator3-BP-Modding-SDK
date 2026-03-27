#include "GGCreateNPCEvent.h"

UGGCreateNPCEvent::UGGCreateNPCEvent() {
    this->WorldContextObject = NULL;
    this->NPC = NULL;
    this->Actor = NULL;
}

void UGGCreateNPCEvent::NPCEventCreateDelegate(AGGNPCEvent* NPCEvent) {
}

UGGCreateNPCEvent* UGGCreateNPCEvent::CreateNPCEvent(const UObject* NewWorldContextObject, const FGameplayTag EventToCreate, const bool SpawnIntoArea, const FGameplayTag Area, AGGNPC* StartNPC, const FVector StartLocation, AActor* StartActor) {
    return NULL;
}


