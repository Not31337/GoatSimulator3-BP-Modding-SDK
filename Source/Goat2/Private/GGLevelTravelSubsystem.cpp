#include "GGLevelTravelSubsystem.h"

UGGLevelTravelSubsystem::UGGLevelTravelSubsystem() {
    this->LevelStartLoadScreenWidgetRef = NULL;
}

void UGGLevelTravelSubsystem::TravelTo_World(TSoftObjectPtr<UWorld> Destination, const FString& Options, FTravelSettings TravelSettings) {
}

void UGGLevelTravelSubsystem::TravelTo_String(const FString& Destination, const FString& Options, FTravelSettings TravelSettings) {
}

void UGGLevelTravelSubsystem::RestartLevel(FTravelSettings TravelSettings) {
}

void UGGLevelTravelSubsystem::PreLoadMap(const FString& MapName) {
}

void UGGLevelTravelSubsystem::PreClientTravel(const FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamless) {
}

void UGGLevelTravelSubsystem::PostLoadMapWithWorld(UWorld* World) {
}

void UGGLevelTravelSubsystem::OpenLevel_World(TSoftObjectPtr<UWorld> Destination, const FString& Options, FTravelSettings TravelSettings) {
}

void UGGLevelTravelSubsystem::OpenLevel_String(const FString& Destination, const FString& Options, FTravelSettings TravelSettings) {
}

bool UGGLevelTravelSubsystem::IsTraveling() const {
    return false;
}

bool UGGLevelTravelSubsystem::HasEveryoneFinishedLoading(bool bIncludeTravelingPlayers) {
    return false;
}

void UGGLevelTravelSubsystem::HandleDisconnect(UWorld* InWorld, UNetDriver* NetDriver) {
}

FTravelSettings UGGLevelTravelSubsystem::GetCurrentLevelTravelSettings() const {
    return FTravelSettings{};
}

bool UGGLevelTravelSubsystem::CanInitiateRestart() const {
    return false;
}


