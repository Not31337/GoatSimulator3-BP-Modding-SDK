#include "GGRadarComponent.h"

UGGRadarComponent::UGGRadarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInitialized = false;
    this->RadarSystem = NULL;
    this->DefaultNearestEventClass = NULL;
    this->StylizedDistanceFactor = 0.02f;
    this->StylizedDistanceTextFormat = FText::FromString(TEXT("{Max}{Distance}m"));
    this->StylizedDistanceMaxDigits = 3;
    this->StylizedDistanceMinDigits = 1;
    this->StylizedDistanceCutoffDistance = 999;
}

void UGGRadarComponent::UpdateRadarData(AGGQuestBase* Quest) {
}

void UGGRadarComponent::ServerRemoveRadarWaypoint_Implementation(AGGPlayerState* PlayerState) {
}

void UGGRadarComponent::ServerRemovePersonalWaypoint_Implementation(AGGPlayerState* PlayerState) {
}

void UGGRadarComponent::ServerCreateOrMoveRadarWaypoint_Implementation(AGGPlayerState* PlayerState, AActor* TargetActor) {
}

void UGGRadarComponent::ServerCreateOrMovePersonalWaypoint_Implementation(AGGPlayerState* PlayerState, FVector Location) {
}

void UGGRadarComponent::OnQuestUpdated(AGGQuestBase* Quest, FGameplayTag UpdateTag) {
}

void UGGRadarComponent::OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState) {
}

void UGGRadarComponent::OnGoatTowerSynchronised(AGGGoatTower* GoatTower, ETowerSynchronizationEvent SynchronizationEvent) {
}

void UGGRadarComponent::OnGoatExitedThroneRoom(AGGGoat* Goat, AGGGoatTower* GoatTower) {
}

void UGGRadarComponent::OnGoatEnteredThroneRoom(AGGGoat* Goat, AGGGoatTower* GoatTower) {
}

void UGGRadarComponent::InitQuestBindings(UGGQuestManager* QuestManager) {
}

int32 UGGRadarComponent::GetStylizedDistanceToRadarPoint(AGGPlayerController* GGPC, FRadarCoordinateData InData) {
    return 0;
}

FText UGGRadarComponent::GetStylizedDistanceTextToRadarPoint(AGGPlayerController* GGPC, FRadarCoordinateData InData) {
    return FText::GetEmpty();
}

AGGPlayerController* UGGRadarComponent::GetOwningController() {
    return NULL;
}

void UGGRadarComponent::AddRadarCoordinateDataActor(AActor* Actor) {
}


