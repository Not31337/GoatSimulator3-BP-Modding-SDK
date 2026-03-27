#include "GGGameInstance.h"

UGGGameInstance::UGGGameInstance() {
    this->MinLoadTime = 3.00f;
    this->TransitionMapLoadScreen = NULL;
    this->StartupLoadingScreenWidgetClass = NULL;
    this->MenuLoadingScreenWidgetClass = NULL;
    this->LoadingScreenWidgetClass = NULL;
    this->LevelStartLoadingScreenWidgetClass = NULL;
    this->bHasBeenInMainMenu = false;
    this->bInIntroSplash = false;
    this->LoadScreenWidgetRef = NULL;
    this->OnlineManager = NULL;
    this->DLCHandler = NULL;
}

bool UGGGameInstance::ShouldPlayStartupFlow() const {
    return false;
}

void UGGGameInstance::SendSessionInvite(const FString& DisplayName) {
}

void UGGGameInstance::PreLoadMap(const FString& MapName) {
}

void UGGGameInstance::PostLoadMapWithWorld(UWorld* World) {
}


void UGGGameInstance::OnWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources) {
}

void UGGGameInstance::LinkSteamToEOSAccount_BP() {
}

void UGGGameInstance::LinkAccount() {
}

bool UGGGameInstance::IsRestartingLevel(const UObject* WorldContextObject) {
    return false;
}

bool UGGGameInstance::IsInTransitionMap() const {
    return false;
}

bool UGGGameInstance::IsInPlayableMap() const {
    return false;
}

bool UGGGameInstance::IsInMobileStartup() const {
    return false;
}

bool UGGGameInstance::IsInMainMenuMap() const {
    return false;
}

bool UGGGameInstance::IsInIslandMap() const {
    return false;
}

bool UGGGameInstance::IsInBossFight() const {
    return false;
}

UGGOnlineManager* UGGGameInstance::GetOnlineManager() const {
    return NULL;
}

UGGDLCHandler* UGGGameInstance::GetDLCHandler() const {
    return NULL;
}

TArray<AGGNPC_Humanoid*> UGGGameInstance::GetCachedHumanoidNPCs() const {
    return TArray<AGGNPC_Humanoid*>();
}

TArray<AGGNPC_Animal*> UGGGameInstance::GetCachedAnimalNPCs() const {
    return TArray<AGGNPC_Animal*>();
}

void UGGGameInstance::DestroySteamSession() {
}

void UGGGameInstance::CreateSteamSession() {
}

void UGGGameInstance::BeginLoadingScreen(const FString& MapName) {
}


