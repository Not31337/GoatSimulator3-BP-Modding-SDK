#include "GGGlobalEventHandler.h"

UGGGlobalEventHandler::UGGGlobalEventHandler() {
}

void UGGGlobalEventHandler::OnVehicleExploded(AGGVehicle* Vehicle) {
}

void UGGGlobalEventHandler::OnUpdateLastWorldCollectionLoaded() {
}

void UGGGlobalEventHandler::OnStretchGoalSequenceFinnished(AGGCastleStretchGoal* StretchGoal) {
}

void UGGGlobalEventHandler::OnShowGPUSettingWarning() {
}

void UGGGlobalEventHandler::OnResetGPUSettingWarning() {
}

void UGGGlobalEventHandler::OnReceiveKarma(AGGGoat* Goat, int32 Amount) {
}

void UGGGlobalEventHandler::OnReachedMaxRamSetting() {
}

void UGGGlobalEventHandler::OnPlayingCinematicUpdated(bool bCinematicFinished) {
}

void UGGGlobalEventHandler::OnPlayerWorldAreaExited(AGGGoat* Goat, FGameplayTag LeftArea) {
}

void UGGGlobalEventHandler::OnPlayerWorldAreaEntered(AGGGoat* Goat, FGameplayTag NewArea) {
}

void UGGGlobalEventHandler::OnPlayerInfoChanged(AGGGameState* GameState) {
}

void UGGGlobalEventHandler::OnPlayerGamePlayerInfoChanged(AGGPlayerGame_Base* PlayerGame) {
}

void UGGGlobalEventHandler::OnPlayerGamePhaseChanged(AGGPlayerGame_Base* PlayerGame, TEnumAsByte<EPlayerGamePhase::Type> NewPhase) {
}

void UGGGlobalEventHandler::OnNPCSpawnedIntoWorld(AGGNPC* NPC) {
}

void UGGGlobalEventHandler::OnNPCRagdollFromDamage(AGGNPC* NPC, const UDamageType* DamageType, AActor* DamageCauser, bool bWasAlreadyRagdolled) {
}

void UGGGlobalEventHandler::OnNotificationUpdated(FNotification Notification) {
}

void UGGGlobalEventHandler::OnNotificationShown(FNotification Notification) {
}

void UGGGlobalEventHandler::OnNotificationCleared(FNotification Notification) {
}

void UGGGlobalEventHandler::OnLoadingScreenRemoved(AGGPlayerController* Controller, ELoadingScreenType InType, ERemovalReason RemovalReason) {
}

void UGGGlobalEventHandler::OnInventoryInitialized(UGGInventory* Inventory) {
}

void UGGGlobalEventHandler::OnIntroSplashComplete() {
}

void UGGGlobalEventHandler::OnInteracted(AActor* SourceActor, AActor* TargetActor) {
}

void UGGGlobalEventHandler::OnInstinctTriggered(AGGGoat* Goat, FGameplayTag InstinctTag) {
}

void UGGGlobalEventHandler::OnGoatTowerSynchronised(AGGGoatTower* GoatTower, ETowerSynchronizationEvent SynchronizationEvent) {
}

void UGGGlobalEventHandler::OnGoatLickedActor(AGGGoat* Goat, AActor* LickedActor) {
}

void UGGGlobalEventHandler::OnGoatHeadbuttedActor(AGGGoat* Goat, AActor* HeadbuttedActor) {
}

void UGGGlobalEventHandler::OnGoatExitedThroneRoom(AGGGoat* Goat, AGGGoatTower* GoatTower) {
}

void UGGGlobalEventHandler::OnGoatEnteredThroneRoom(AGGGoat* Goat, AGGGoatTower* GoatTower) {
}

void UGGGlobalEventHandler::OnGoatBaa(AGGGoat* Goat) {
}

void UGGGlobalEventHandler::OnGameCurrentActiveGameChanged(AGGPlayerGame_Base* PlayerGame) {
}

void UGGGlobalEventHandler::OnFirstInstinctPackUnlocked(UGGInstinctPackDataAsset* Pack) {
}

void UGGGlobalEventHandler::OnEnterExitKidneyStoneUpdated(bool bEnteredKidneyStone) {
}

void UGGGlobalEventHandler::OnDecorateThroneRoomUpdate(AActor* DecorationActor) {
}

void UGGGlobalEventHandler::OnCompletedAchievement(const FString& AchievementID) {
}

void UGGGlobalEventHandler::OnCharacterJumped(AGGCharacter* Character) {
}

void UGGGlobalEventHandler::OnActorTookDamage(AActor* SourceActor, AActor* TargetActor, float DamageAmount, const UDamageType* DamageType) {
}


