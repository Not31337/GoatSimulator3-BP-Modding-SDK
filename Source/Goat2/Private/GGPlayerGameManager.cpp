#include "GGPlayerGameManager.h"
#include "Net/UnrealNetwork.h"

AGGPlayerGameManager::AGGPlayerGameManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->PlayerGameInviteDuration = 10.00f;
    this->PlayerInviteTeleportDistance = 1500.00f;
    this->RematchDelay = 1.00f;
    this->CurrentActiveGame = NULL;
}

bool AGGPlayerGameManager::UpdatePlayerGamePlayerInfo(AGGPlayerController* PC) {
    return false;
}

void AGGPlayerGameManager::StartNewPlayerGameFromStartingPoint(AGGPlayerGameStartingPoint* StartingPoint, AGGPlayerState* PlayerStartingGameIfAny, bool bForceStart, bool bIsRematch) {
}

void AGGPlayerGameManager::StartNewPlayerGameFromLocation(UGGPlayerGameDataAsset* DataAsset, FVector GameStartingLocation, AGGPlayerState* PlayerStartingGameIfAny, bool bForceStart, bool bIsRematch) {
}

void AGGPlayerGameManager::SetLobbyState(AActor* Player, TEnumAsByte<EPlayerGamePlayerLobbyState::Type> State) {
}

void AGGPlayerGameManager::SetCurrentActiveGame(AGGPlayerGame_Base* PlayerGame) {
}

void AGGPlayerGameManager::PlayerAnsweredInvite(AGGPlayerController* GGPC, bool Accepted) {
}

void AGGPlayerGameManager::OnTeleportAreaOpening(int32 AreaSlot, UGGTeleportAreaDataAsset* AreaAsset) {
}


void AGGPlayerGameManager::OnRep_LobbyPlayerInfos() {
}

void AGGPlayerGameManager::OnRep_CurrentActiveGame() {
}

void AGGPlayerGameManager::OnPlayerGamePlayerInfoChanged(AGGPlayerGame_Base* PlayerGame) {
}






void AGGPlayerGameManager::LeaveCurrentGame(AActor* PlayerLeavingGame) {
}

bool AGGPlayerGameManager::HasEnoughPlayers(const UGGPlayerGameDataAsset* DataAsset) const {
    return false;
}

TArray<APawn*> AGGPlayerGameManager::GetPlayers() {
    return TArray<APawn*>();
}

FString AGGPlayerGameManager::GetPlayerNameFromPlayer(AActor* Player) const {
    return TEXT("");
}

FString AGGPlayerGameManager::GetPlayerNameFromInfo(FPlayerGamePlayerInfo PlayerInfo) const {
    return TEXT("");
}

TArray<UGGPlayerGameDataAsset*> AGGPlayerGameManager::GetPlayerGameAssets() {
    return TArray<UGGPlayerGameDataAsset*>();
}

UGGPlayerGameDataAsset* AGGPlayerGameManager::GetPlayerGameAssetFromId(const FString& GameID) {
    return NULL;
}

TArray<AGGPlayerController*> AGGPlayerGameManager::GetPCs() {
    return TArray<AGGPlayerController*>();
}

int32 AGGPlayerGameManager::GetNumberOfPlayersInLobbyState(TEnumAsByte<EPlayerGamePlayerLobbyState::Type> State) const {
    return 0;
}

int32 AGGPlayerGameManager::GetNumberOfPlayersAnsweredInvite() const {
    return 0;
}

TEnumAsByte<EPlayerGamePlayerLobbyState::Type> AGGPlayerGameManager::GetLobbyState(AActor* Player) {
    return EPlayerGamePlayerLobbyState::Waiting;
}

TArray<AGGGoat*> AGGPlayerGameManager::GetGoats() {
    return TArray<AGGGoat*>();
}

AGGPlayerState* AGGPlayerGameManager::GetGGPlayerStateFromPlayerInfo(FPlayerGamePlayerInfo PlayerInfo) const {
    return NULL;
}

UGGPlayerGameDataAsset* AGGPlayerGameManager::GetCurrentGameDataAsset() {
    return NULL;
}

AGGPlayerGame_Base* AGGPlayerGameManager::GetCurrentActiveGame() {
    return NULL;
}

FVector AGGPlayerGameManager::GetAdjustedStartingLocation(FVector StartLocation, float Radius, AGGGoat* GoatToTeleport) {
    return FVector{};
}

void AGGPlayerGameManager::CreateGameInviteNotification_BP(AGGPlayerController* GGPC, AGGPlayerGame_Base* InPlayerGame, float InInviteDuration) {
}

bool AGGPlayerGameManager::AddLobbyPlayerInfo(AGGPlayerController* PC) {
    return false;
}

void AGGPlayerGameManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPlayerGameManager, LobbyPlayerInfos);
    DOREPLIFETIME(AGGPlayerGameManager, CurrentActiveGame);
    DOREPLIFETIME(AGGPlayerGameManager, StartingPoints);
}


