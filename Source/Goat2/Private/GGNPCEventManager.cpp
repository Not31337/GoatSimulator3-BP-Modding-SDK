#include "GGNPCEventManager.h"
#include "Templates/SubclassOf.h"

UGGNPCEventManager::UGGNPCEventManager() {
    this->EventsDataTable = NULL;
    this->GlobalDynamicEvents.AddDefaulted(1);
    this->ForceEventsRelevantFor = 5.00f;
}

void UGGNPCEventManager::RemoveEvent(AGGNPCEvent* EventToRemove, bool FromEndPlay) {
}

void UGGNPCEventManager::RemoveAllEvents(bool OnlyDynamicEvents) {
}

void UGGNPCEventManager::NPCEventLoaded() {
}

bool UGGNPCEventManager::IsEventEnabled(FGameplayTag EventTag) const {
    return false;
}

UGGNPCEventManager* UGGNPCEventManager::GetNPCEventManager(const UObject* WorldContextObject) {
    return NULL;
}

bool UGGNPCEventManager::GetEventsOfClass(TSubclassOf<AGGNPCEvent> EventClass, TArray<AGGNPCEvent*>& Events) {
    return false;
}

TArray<AGGNPCEvent*> UGGNPCEventManager::GetActiveEvents() const {
    return TArray<AGGNPCEvent*>();
}

TArray<AGGNPCEvent*> UGGNPCEventManager::GetActiveDynamicEvents() const {
    return TArray<AGGNPCEvent*>();
}

bool UGGNPCEventManager::EventOnCooldown_Tag(FGameplayTag EventTag, AActor* CooldownActor) {
    return false;
}

bool UGGNPCEventManager::EventOnCooldown(TSubclassOf<AGGNPCEvent> EventClass, AActor* CooldownActor) {
    return false;
}


