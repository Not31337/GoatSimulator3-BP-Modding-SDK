#include "GGTeleportAreaSubsystem.h"

UGGTeleportAreaSubsystem::UGGTeleportAreaSubsystem() {
}

void UGGTeleportAreaSubsystem::ToggleLightingLevels(UGGTeleportAreaDataAsset* AreaAsset, bool bShowAreaLighting) {
}

void UGGTeleportAreaSubsystem::TeleportStateUpdate(AGGPlayerController* Controller, AGGGoat* Goat, ELoadingScreenStage CurrentStage) {
}

void UGGTeleportAreaSubsystem::OnLevelUnloaded(ULevelStreaming* LevelStream) {
}

void UGGTeleportAreaSubsystem::OnLevelShown(ULevelStreaming* LevelStream) {
}

void UGGTeleportAreaSubsystem::OnLevelLoaded(ULevelStreaming* LevelStream) {
}

void UGGTeleportAreaSubsystem::OnLevelHidden(ULevelStreaming* LevelStream) {
}

bool UGGTeleportAreaSubsystem::IsSlotOccupied(int32 Slot) const {
    return false;
}

bool UGGTeleportAreaSubsystem::IsPlayerExitingATPArea(const AGGPlayerController* Player) const {
    return false;
}

bool UGGTeleportAreaSubsystem::IsPlayerEnteringATPArea(const AGGPlayerController* Player) const {
    return false;
}

bool UGGTeleportAreaSubsystem::IsLocationInsideAnyArea(FVector Location) {
    return false;
}

bool UGGTeleportAreaSubsystem::IsAreaUnloading(int32 Slot) const {
    return false;
}

bool UGGTeleportAreaSubsystem::IsAreaLoading(int32 Slot) const {
    return false;
}

bool UGGTeleportAreaSubsystem::IsAreaAssetBeingUsedOnSlot(const UGGTeleportAreaDataAsset* AreaAsset, int32 Slot, bool bAlsoCheckForReserved) {
    return false;
}

bool UGGTeleportAreaSubsystem::IsAreaAssetBeingUsed(const UGGTeleportAreaDataAsset* AreaAsset, bool bAlsoCheckForReserved) {
    return false;
}

bool UGGTeleportAreaSubsystem::IsAllPlayersReadyForLightingToggle() const {
    return false;
}

bool UGGTeleportAreaSubsystem::HasAreaThatRequiresFullParticipation() {
    return false;
}

bool UGGTeleportAreaSubsystem::HasAreaFinishedLoading(int32 Slot) const {
    return false;
}

int32 UGGTeleportAreaSubsystem::GetSlotOccupiedByAreaAsset(const UGGTeleportAreaDataAsset* AreaAsset) {
    return 0;
}

TArray<APlayerStart*> UGGTeleportAreaSubsystem::GetRespawnPlayerStarts(int32 Slot) {
    return TArray<APlayerStart*>();
}

FAreaAssetOnSlot UGGTeleportAreaSubsystem::GetAreaThatRequiresFullParticipation() const {
    return FAreaAssetOnSlot{};
}

FVector UGGTeleportAreaSubsystem::GetAreaSlotLocation(int32 Slot) const {
    return FVector{};
}

int32 UGGTeleportAreaSubsystem::GetAreaSlotForLocation(FVector Location) {
    return 0;
}

TArray<APlayerStart*> UGGTeleportAreaSubsystem::FindPlayerStartsInArea(int32 Slot) {
    return TArray<APlayerStart*>();
}

AGGTeleportAreaEntrance* UGGTeleportAreaSubsystem::FindMainEntranceInArea(int32 Slot) {
    return NULL;
}

AGGTeleportAreaEntrance* UGGTeleportAreaSubsystem::FindEntranceForArea(UGGTeleportAreaDataAsset* AreaAsset) const {
    return NULL;
}

AGGTeleportAreaLogic* UGGTeleportAreaSubsystem::FindAreaLogic(int32 Slot) {
    return NULL;
}

bool UGGTeleportAreaSubsystem::ExitTeleportAreaTogether(TArray<AGGPlayerController*> Players) {
    return false;
}

bool UGGTeleportAreaSubsystem::ExitTeleportArea(AGGPlayerController* Player) {
    return false;
}

bool UGGTeleportAreaSubsystem::EnterTeleportAreaTogether(UGGTeleportAreaDataAsset* AreaAsset, FAreaEnterParameters EnterParameters) {
    return false;
}

bool UGGTeleportAreaSubsystem::EnterTeleportArea(AGGPlayerController* Player, UGGTeleportAreaDataAsset* AreaAsset, FAreaEnterParameters EnterParameters) {
    return false;
}

void UGGTeleportAreaSubsystem::CloseTeleportArea(int32 Slot) {
}

bool UGGTeleportAreaSubsystem::CancelAreaTravel(AGGPlayerController* Player) {
    return false;
}

void UGGTeleportAreaSubsystem::AreaFinishedUnloading(int32 Slot) {
}

void UGGTeleportAreaSubsystem::AreaFinishedLoading(int32 Slot) {
}


