#include "GGPlayerGame_Base.h"
#include "Net/UnrealNetwork.h"

AGGPlayerGame_Base::AGGPlayerGame_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRematch = false;
    this->PlayerGamePhase = EPlayerGamePhase::WaitingForPlayers;
    this->bWasGameEverInDrawPhase = false;
    this->bDoSilentCancel = false;
    this->PlayerGameOutcome = EPlayerGameOutcome::Invalid;
    this->StartingPlayerIfAny = NULL;
    this->PlayAreaRadius = 0.00f;
    this->PlayAreaHeight = 0.00f;
    this->OutOfBoundsMaxTime = 0.00f;
    this->PlayerGameStartingPoint = NULL;
    this->GameInviteTS = -1.00f;
    this->PlayerGameDataAsset = NULL;
    this->bScoreCanBeNegative = false;
    this->TokenReward = 0;
    this->LockPlayerOnReadyPoints = true;
}

bool AGGPlayerGame_Base::UpdatePlayerGamePlayerInfo(AGGPlayerController* PC) {
    return false;
}

void AGGPlayerGame_Base::ToggleCanGetScoreForPlayer(AGGPlayerState* PlayerState, bool CanGetScore) {
}


void AGGPlayerGame_Base::SetScoreForPlayer(const AGGPlayerState* PlayerState, float NewScore, bool Force) {
}

void AGGPlayerGame_Base::SetPlayerState(AGGPlayerState* PlayerState, TEnumAsByte<EPlayerGamePlayerState::Type> State) {
}


void AGGPlayerGame_Base::OnSetScoreForPlayer_Implementation(APawn* Player, float NewScore) {
}

void AGGPlayerGame_Base::OnRep_PlayerInfos() {
}








void AGGPlayerGame_Base::OnPhaseChanged_Implementation(TEnumAsByte<EPlayerGamePhase::Type> NewPhase, TEnumAsByte<EPlayerGameOutcome::Type> GameOutcome) {
}

void AGGPlayerGame_Base::OnParticipatingPlayerLeft(AActor* Actor) {
}

void AGGPlayerGame_Base::LeavePlayerGame_Implementation(const FPlayerGamePlayerInfo& PlayerLeavingGame) {
}

bool AGGPlayerGame_Base::IsPlayerInCurrentGame(const AGGPlayerState* PlayerState) const {
    return false;
}

bool AGGPlayerGame_Base::IsGamePlaying() const {
    return false;
}

bool AGGPlayerGame_Base::IsActorWithinBounds(AActor* Actor) {
    return false;
}

bool AGGPlayerGame_Base::HasPlayArea() {
    return false;
}

AGGPlayerState* AGGPlayerGame_Base::GetWinningPlayer() {
    return NULL;
}

float AGGPlayerGame_Base::GetScoreForPlayer(const AGGPlayerState* PlayerState) {
    return 0.0f;
}

int32 AGGPlayerGame_Base::GetRequiredMinimumParticipants() const {
    return 0;
}

TArray<FPlayerGamePlayerInfo> AGGPlayerGame_Base::GetPlayerInfosInState(TEnumAsByte<EPlayerGamePlayerState::Type> PlayerState, bool bLocalOnly) {
    return TArray<FPlayerGamePlayerInfo>();
}

FPlayerGamePlayerInfo AGGPlayerGame_Base::GetPlayerInfo(const AGGPlayerState* PlayerState, bool& OutSuccess) {
    return FPlayerGamePlayerInfo{};
}

FLinearColor AGGPlayerGame_Base::GetPlayerColorFromInfo(FPlayerGamePlayerInfo PlayerInfo) {
    return FLinearColor{};
}

FLinearColor AGGPlayerGame_Base::GetPlayerColorFromGGPlayerState(AGGPlayerState* PlayerState) {
    return FLinearColor{};
}

TArray<FPlayerGameScoreBoardData> AGGPlayerGame_Base::GetOrderedScoreBoardData() {
    return TArray<FPlayerGameScoreBoardData>();
}

int32 AGGPlayerGame_Base::GetNumberOfPlayersNotInState(TEnumAsByte<EPlayerGamePlayerState::Type> State) const {
    return 0;
}

int32 AGGPlayerGame_Base::GetNumberOfPlayersInState(TEnumAsByte<EPlayerGamePlayerState::Type> State) const {
    return 0;
}

int32 AGGPlayerGame_Base::GetNumberOfPlayers() {
    return 0;
}

TArray<FPlayerGamePlayerInfo> AGGPlayerGame_Base::GetLocalPlayerInfos(bool bIncludeLeavers) {
    return TArray<FPlayerGamePlayerInfo>();
}

FPlayerGamePlayerInfo AGGPlayerGame_Base::GetInfoFromColorIndex(int32 Index, bool& OutSuccess) {
    return FPlayerGamePlayerInfo{};
}

TArray<AGGGoat*> AGGPlayerGame_Base::GetGoatsFromPlayerInfos(TArray<FPlayerGamePlayerInfo> PlayerGameInfos) {
    return TArray<AGGGoat*>();
}

TArray<AGGGoat*> AGGPlayerGame_Base::GetGoats() {
    return TArray<AGGGoat*>();
}

AGGPlayerState* AGGPlayerGame_Base::GetGGPlayerStateFromPlayerInfo(FPlayerGamePlayerInfo PlayerInfo) {
    return NULL;
}

AGGPlayerState* AGGPlayerGame_Base::GetFirstPlayerInState(TEnumAsByte<EPlayerGamePlayerState::Type> State) {
    return NULL;
}

FPlayerGamePlayerInfo AGGPlayerGame_Base::GetFirstLocalPlayerInfo(bool bIncludeLeavers, bool& bOutSuccess) {
    return FPlayerGamePlayerInfo{};
}

TArray<AGGPlayerController*> AGGPlayerGame_Base::GetControllersFromPlayerInfos(TArray<FPlayerGamePlayerInfo> PlayerGameInfos) {
    return TArray<AGGPlayerController*>();
}

FLinearColor AGGPlayerGame_Base::GetColorForState_Implementation(TEnumAsByte<EPlayerGamePlayerState::Type> InState) {
    return FLinearColor{};
}

TArray<FPlayerGamePlayerInfo> AGGPlayerGame_Base::GetActivePlayers(bool bAliveOnly, bool bLocalOnly) const {
    return TArray<FPlayerGamePlayerInfo>();
}

TArray<AGGPlayerState*> AGGPlayerGame_Base::GetActiveGGPlayerStates(bool bAliveOnly, bool bLocalOnly) {
    return TArray<AGGPlayerState*>();
}

void AGGPlayerGame_Base::FinishPlayerGame() {
}

void AGGPlayerGame_Base::EndGame(TEnumAsByte<EPlayerGameOutcome::Type> GameOutcome) {
}

void AGGPlayerGame_Base::DecideWinner_Implementation(TEnumAsByte<EPlayerGameOutcome::Type>& OutOutcome) {
}

bool AGGPlayerGame_Base::ClearPlayerGamePlayerInfo() {
    return false;
}

void AGGPlayerGame_Base::ChangeScoreForPlayer(const AGGPlayerState* PlayerState, float ChangeScoreBy, bool Force) {
}

void AGGPlayerGame_Base::ChangePhase(TEnumAsByte<EPlayerGamePhase::Type> NewPhase) {
}

bool AGGPlayerGame_Base::AddOrEditPlayerGamePlayerInfo(AGGPlayerController* PC) {
    return false;
}

void AGGPlayerGame_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPlayerGame_Base, bIsRematch);
    DOREPLIFETIME(AGGPlayerGame_Base, StartingPlayerIfAny);
    DOREPLIFETIME(AGGPlayerGame_Base, GameStartingLocation);
    DOREPLIFETIME(AGGPlayerGame_Base, PlayerGameStartingPoint);
    DOREPLIFETIME(AGGPlayerGame_Base, GameInviteTS);
    DOREPLIFETIME(AGGPlayerGame_Base, PlayerGameDataAsset);
    DOREPLIFETIME(AGGPlayerGame_Base, PlayerInfos);
}


