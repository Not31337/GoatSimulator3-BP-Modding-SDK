#include "GGGoatPlayerState.h"
#include "Net/UnrealNetwork.h"

AGGGoatPlayerState::AGGGoatPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnedMotorcycle = NULL;
    this->PlayerWaypointActorClass = NULL;
    this->PlayerWaypointActor = NULL;
    this->bIsWatchingLevelSequence = false;
}

void AGGGoatPlayerState::UpdatePlayerRadarData() {
}

void AGGGoatPlayerState::SetOwnedDLCs_Implementation(const TArray<EGoatDLC>& UpdatedDLCs) {
}

void AGGGoatPlayerState::ServerSetWatchingLevelSequence_Implementation(bool bIsWatching) {
}

void AGGGoatPlayerState::OnPlayerInfoChanged(AGGGameState* GameState) {
}

void AGGGoatPlayerState::OnPlayerGamePlayerInfoChanged(AGGPlayerGame_Base* PlayerGame) {
}

void AGGGoatPlayerState::OnPlayerGamePhaseChanged(AGGPlayerGame_Base* PlayerGame, TEnumAsByte<EPlayerGamePhase::Type> NewPhase) {
}

void AGGGoatPlayerState::OnGameCurrentActiveGameChanged(AGGPlayerGame_Base* PlayerGame) {
}

void AGGGoatPlayerState::OnDLCsUpdated() {
}

bool AGGGoatPlayerState::HasUpdatedDLCs() const {
    return false;
}

TArray<EGoatDLC> AGGGoatPlayerState::GetOwnedDLCs() const {
    return TArray<EGoatDLC>();
}

void AGGGoatPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGoatPlayerState, SpawnedMotorcycle);
    DOREPLIFETIME(AGGGoatPlayerState, PlayerWaypointActor);
    DOREPLIFETIME(AGGGoatPlayerState, bIsWatchingLevelSequence);
    DOREPLIFETIME(AGGGoatPlayerState, OwnedDLCs);
}


