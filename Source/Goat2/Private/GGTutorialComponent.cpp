#include "GGTutorialComponent.h"
#include "Templates/SubclassOf.h"

UGGTutorialComponent::UGGTutorialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GlobalTutorialDataTablePaths.AddDefaulted(4);
    this->bShouldCreateDefaultTutorials = false;
}

void UGGTutorialComponent::SpawnVehicleTutorials(AGGCharacter* Character, AGGVehicle* Vehicle, bool bForcePassenger) {
}

void UGGTutorialComponent::OnTutorialDataTablesLoaded() {
}

void UGGTutorialComponent::OnSlowMotionToggled(bool bEnabled) {
}

void UGGTutorialComponent::OnRepDriverChanged(AGGCharacter* NewDriver) {
}

void UGGTutorialComponent::OnRepAttachmentReplication(const FRepAttachment& Attachment) {
}

void UGGTutorialComponent::OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState) {
}

void UGGTutorialComponent::OnMovementModeChanged(TEnumAsByte<EMovementMode> CurrentMovement, uint8 CustomMovement, TEnumAsByte<EMovementMode> PrevMovement, uint8 PrevCustomMovement) {
}

void UGGTutorialComponent::OnMiniGameUnlocked(UGGPlayerGameDataAsset* UnlockedGame) {
}

void UGGTutorialComponent::OnInventoryUnlockedStore(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC) {
}

void UGGTutorialComponent::OnInventoryUnlocked(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC) {
}

void UGGTutorialComponent::OnGoatExitedVehicleIsh(AGGGoat* Goat, APawn* FlyingBroom) {
}

void UGGTutorialComponent::OnGoatEnteredVehicleIsh(AGGGoat* Goat, APawn* FlyingBroom) {
}

void UGGTutorialComponent::OnGearUnEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearUnequipped) {
}

void UGGTutorialComponent::OnGearEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearEquipped) {
}

void UGGTutorialComponent::OnGamepadChanged(bool bUsingGamepad) {
}

void UGGTutorialComponent::OnCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter) {
}

void UGGTutorialComponent::OnCharacterExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGTutorialComponent::OnCharacterEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

AGGTutorial* UGGTutorialComponent::GetSpawnedTutorialFromID(const FString& TutorialID, UObject* TutorialObject) {
    return NULL;
}

void UGGTutorialComponent::BindInventory(UGGInventory* Inventory) {
}

void UGGTutorialComponent::BindGoat(AGGGoat* Goat) {
}


