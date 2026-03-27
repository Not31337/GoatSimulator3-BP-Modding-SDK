#include "GGRadarSystem.h"
#include "Net/UnrealNetwork.h"

UGGRadarSystem::UGGRadarSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGGRadarSystem::SetRadarActorAsWaypoint(AActor* WaypointActor, AGGPlayerState* WaypointOwner) {
}

void UGGRadarSystem::RemoveVisibilityRules(FGameplayTag Source) {
}

void UGGRadarSystem::RemoveRadarData(AActor* Owner) {
}

void UGGRadarSystem::RemoveAllWaypointsWithOwner(AGGPlayerState* WaypointOwner) {
}

void UGGRadarSystem::OnRep_PlayerWaypoints() {
}

void UGGRadarSystem::OnRadarActorEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UGGRadarSystem::OnPlayerInfoChanged(AGGGameState* GameState) {
}

bool UGGRadarSystem::IsWaypointForPlayer(AActor* WaypointActor, AGGPlayerState* WaypointOwner) {
    return false;
}

bool UGGRadarSystem::IsWaypoint(AActor* WaypointActor) const {
    return false;
}

bool UGGRadarSystem::HasWaypoint(AGGPlayerState* WaypointOwner) {
    return false;
}

AActor* UGGRadarSystem::GetWaypointRadarActor(AGGPlayerState* WaypointOwner) {
    return NULL;
}

void UGGRadarSystem::GetWaypointPlayers(AActor* WaypointActor, TArray<AGGPlayerState*>& OutPlayers) {
}

void UGGRadarSystem::AddVisibilityRule(const FRadarSystemVisibilityRule& VisibilityRule) {
}

void UGGRadarSystem::AddRadarData(AActor* Owner) {
}

void UGGRadarSystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGRadarSystem, PlayerWaypoints);
}


