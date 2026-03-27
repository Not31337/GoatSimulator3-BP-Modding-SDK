#include "GGEventBase.h"
#include "EQuestReplication.h"
#include "ESaveGameType.h"
#include "GGEventPointComponent.h"

AGGEventBase::AGGEventBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bActiveByDefault = false;
    this->QuestReplicationMode = EQuestReplication::Shared;
    this->QuestSaveMethod = ESaveGameType::World;
    this->QuestProgressTiers.AddDefaulted(1);
    this->bSavePartialCompletion = false;
    this->UnreadMenuCategory = TEXT("quests");
    this->UnreadQuestCategory = TEXT("quests_event");
    this->ShowQuestIDAsUnread = true;
    this->MainEventPointComponent = CreateDefaultSubobject<UGGEventPointComponent>(TEXT("MainEventPoint"));
    this->bGlobalEvent = false;
    this->bTreatAsSecretInMapAreaInformation = false;
    this->bHideOnMapTilCompleted = false;
    this->CompletedSequence = NULL;
    this->CompletedSequenceDelay = 0.00f;
    this->bWasDeactivatedAfterCompletion = false;
    this->CompletedSequenceActor = NULL;
    this->CompletedSequencePlayer = NULL;
}

void AGGEventBase::RemoveEventPoint(UGGEventPointComponent* EventPoint) {
}

void AGGEventBase::PlayEventCompletedSequence(bool PlayCameraCuts) {
}


void AGGEventBase::OnGoatTowerSynchronised(AGGGoatTower* GoatTower, ETowerSynchronizationEvent SynchronizationEvent) {
}




void AGGEventBase::MulticastActivateHint_Implementation(const FString& HintID) {
}

bool AGGEventBase::IsConsideredForNearestEvent() {
    return false;
}

bool AGGEventBase::HasEverBeenDiscovered() {
    return false;
}

bool AGGEventBase::HasBeenDiscoveredThisSession() {
    return false;
}

void AGGEventBase::GetEventStates(EEventActiveState& ActiveState, EEventCompletedState& CompletedState) {
}

EEventCompletedState AGGEventBase::GetCompletionState() {
    return EEventCompletedState::Error;
}

FVector AGGEventBase::GetClosestEventPointLocation(FVector Location, float& OutDistance) {
    return FVector{};
}

EEventActiveState AGGEventBase::GetActiveState() {
    return EEventActiveState::Error;
}

bool AGGEventBase::ConsideredCompletedInWorld() {
    return false;
}

void AGGEventBase::CompletedSequenceFinished() {
}

void AGGEventBase::AddEventPoint(UGGEventPointComponent* EventPoint) {
}


