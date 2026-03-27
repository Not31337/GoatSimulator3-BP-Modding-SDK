#include "GGGameState.h"
#include "GGFactsDatabaseSystem.h"
#include "GGPropStateManager.h"
#include "Net/UnrealNetwork.h"

AGGGameState::AGGGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerGameManager = NULL;
    this->FactsDatabase = CreateDefaultSubobject<UGGFactsDatabaseSystem>(TEXT("Facts Database"));
    this->PublicDemoDuration = 900.00f;
    this->PressDemoDuration = 1800.00f;
    this->PropStateManager = CreateDefaultSubobject<UGGPropStateManager>(TEXT("PropStateManager"));
    this->BossLevelMediaSoundListener = NULL;
    this->DurationAfterServerStartForClientIntro = 300.00f;
    this->bShouldClientsPlayIntro = false;
    this->DisabledGear = NULL;
    this->bOnlyShowGearsReEnabledTutorialInNextSession = true;
    this->CurrentlyActiveStretchGoal = NULL;
}

void AGGGameState::UpdateTelemetrySystem() {
}

void AGGGameState::UpdatePlayerLocationInfo() {
}

void AGGGameState::UpdateFactsEnablingGearIfTrue() {
}

void AGGGameState::SkipIntro_Implementation() {
}

bool AGGGameState::ShouldClientsPlayIntro() const {
    return false;
}

void AGGGameState::OnRep_WorldStats() {
}

void AGGGameState::OnRep_SavedServerPlaytime() {
}

void AGGGameState::OnRep_ReplicatedStretchGoalStates() {
}

void AGGGameState::OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState) {
}

void AGGGameState::OnLoggedInAndCheckedOwnership() {
}

void AGGGameState::OnDemoTimerExpire() {
}

void AGGGameState::MulticastOnDisabledGearsUpdated_Implementation(bool bGearsEnabled, UGGGoatGearList* GearList) {
}

bool AGGGameState::IsPlayerColorAvailable(int32 Index, AGGPlayerState* PlayerState, int32& SetIndex) {
    return false;
}

bool AGGGameState::IsAnyGearDisabled(const UObject* WorldContext) {
    return false;
}

void AGGGameState::InitPlayerLocationInfoTimer() {
}

bool AGGGameState::HasMultiplePlayers() const {
    return false;
}

TArray<int32> AGGGameState::GetTakenColorIndices(AGGPlayerState* InPlayerState) {
    return TArray<int32>();
}

float AGGGameState::GetServerWorldTimeSecondsDelta() const {
    return 0.0f;
}

int32 AGGGameState::GetRandomAvailiableColor() {
    return 0;
}

FString AGGGameState::GetPlayerName(AActor* Player) {
    return TEXT("");
}

FLinearColor AGGGameState::GetPlayerColor(AActor* Player) const {
    return FLinearColor{};
}

bool AGGGameState::GetIsDemoPressMode() {
    return false;
}

TArray<AGGPlayerState*> AGGGameState::GetGGPlayerStates() {
    return TArray<AGGPlayerState*>();
}

FLinearColor AGGGameState::GetDefaultPlayerColor(int32 Index, bool bWithColorBlindness) const {
    return FLinearColor{};
}

float AGGGameState::GetAccurateServerWorldTimeSecondsDelta() const {
    return 0.0f;
}

float AGGGameState::GetAccurateServerWorldTimeSeconds() const {
    return 0.0f;
}

void AGGGameState::DisableClientPlayIntro() {
}

FLinearColor AGGGameState::ApplyColorBlindness_Implementation(FLinearColor InColor) const {
    return FLinearColor{};
}

void AGGGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGameState, PlayerGameManager);
    DOREPLIFETIME(AGGGameState, FactsDatabase);
    DOREPLIFETIME(AGGGameState, WorldStats);
    DOREPLIFETIME(AGGGameState, SavedServerPlaytime);
    DOREPLIFETIME(AGGGameState, CurrentWorldIdentifier);
    DOREPLIFETIME(AGGGameState, bShouldClientsPlayIntro);
    DOREPLIFETIME(AGGGameState, EnableGearAfterEventCompletion);
    DOREPLIFETIME(AGGGameState, CurrentlyActiveStretchGoal);
    DOREPLIFETIME(AGGGameState, ReplicatedStretchGoalStates);
    DOREPLIFETIME(AGGGameState, ClientCurrentGatherEvents);
    DOREPLIFETIME(AGGGameState, ClientUsedInviteTags);
}


