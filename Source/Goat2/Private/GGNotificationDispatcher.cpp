#include "GGNotificationDispatcher.h"

UGGNotificationDispatcher::UGGNotificationDispatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultNotificationWidgetClassesDataTable = NULL;
    this->OwningController = NULL;
}

void UGGNotificationDispatcher::TestNotificationWidget(TSoftClassPtr<UUserWidget> InWidget, FGameplayTag InPosition, FNotification InNotification) {
}

void UGGNotificationDispatcher::RemoveNotificationDelay(FGameplayTagContainer Tags) {
}

void UGGNotificationDispatcher::OnTokenAmountChanged(int32 Amount, const FString& AcquisitionID, const FString& AcquisitionSource) {
}

void UGGNotificationDispatcher::OnPlayerWorldAreaEntered(AGGGoat* Goat, FGameplayTag NewArea) {
}

void UGGNotificationDispatcher::OnMiniGameUnlocked(UGGPlayerGameDataAsset* DataAsset) {
}

void UGGNotificationDispatcher::OnInventoryUnlockedStore(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC) {
}

void UGGNotificationDispatcher::OnInventoryUnlocked(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC) {
}

void UGGNotificationDispatcher::OnInteracted(AActor* SourceActor, AActor* TargetActor) {
}

void UGGNotificationDispatcher::OnChaosAcquired(int32 Amount) {
}

bool UGGNotificationDispatcher::IsNotificationIDInQueue(const FString& InNotificationID, bool bIncludeCurrent) {
    return false;
}

bool UGGNotificationDispatcher::IsNotificationIDCurrentNotification(const FString& ID) {
    return false;
}

UUserWidget* UGGNotificationDispatcher::GetFirstActiveNotificationWidgetWithID(const FString& NotificationID) {
    return NULL;
}

void UGGNotificationDispatcher::CreateNotificationExplicitBlueprint(FNotification Notification) {
}

void UGGNotificationDispatcher::CreateNotificationBlueprint(FGameplayTag Tag, FText Title, FText Body, const FString& ID, FNotificationProperties Properties) {
}

void UGGNotificationDispatcher::ClientOnRemoteEventDiscovered_Implementation(const FString& GatherID, const FInviteNotificationParameters InviteNotificationParameters, const FGatherGoatParameters GatherGoatParameters, const AGGPlayerState* InvitingPlayer) {
}

void UGGNotificationDispatcher::ClearNotificationDelays() {
}

void UGGNotificationDispatcher::AddNotificationDelay(FGameplayTag Tag, float Delay) {
}


