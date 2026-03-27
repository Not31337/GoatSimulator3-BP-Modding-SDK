#include "GGProgression.h"

UGGProgression::UGGProgression() {
    this->CachedSaveGame = NULL;
    this->CachedWorldCollectionsSave = NULL;
    this->CachedWorldSave = NULL;
    this->bWasInitialized = false;
}

void UGGProgression::UploadToCloud() {
}

bool UGGProgression::UpdateLastLoadedLevel(int32 SlotIndex, const FString& LevelDataID) {
    return false;
}

bool UGGProgression::SelectNewWorldCollection(int32 SlotIndex) {
    return false;
}

bool UGGProgression::RemoveWorldCollection(int32 SlotIndex) {
    return false;
}

void UGGProgression::PostLoadMapWithWorld(UWorld* World) {
}

void UGGProgression::OnSnapShotLoaded(const FString& Filename, TArray<uint8> SaveData) {
}

FSavedQuestData UGGProgression::LoadQuestProgress(const FString& QuestID, ESaveGameType SaveGameType) {
    return FSavedQuestData{};
}

bool UGGProgression::IsSlotADefaultSlot(int32 SlotIndex) const {
    return false;
}

bool UGGProgression::IsQuestStepCompleted(const FString& QuestID, const FString& StepID, ESaveGameType QuestType) {
    return false;
}

bool UGGProgression::IsEventCompleted(const FString& EventID) {
    return false;
}

bool UGGProgression::HasAnyWorldCollections() {
    return false;
}

FWorldStats UGGProgression::GetWorldStatsForWorld(int32 SlotIndex, const FString& WorldName) {
    return FWorldStats{};
}

FGuid UGGProgression::GetWorldSaveGuid(AActor* WorldContextActor) {
    return FGuid{};
}

UGGWorldSave* UGGProgression::GetWorldSave() {
    return NULL;
}

TArray<FWorldCollection> UGGProgression::GetWorldCollections() {
    return TArray<FWorldCollection>();
}

FWorldCollection UGGProgression::GetWorldCollection(int32 SlotIndex) {
    return FWorldCollection{};
}

TArray<int32> UGGProgression::GetUnlockedStretchGoals(UGGStretchGoalGroup* GoalGroup) {
    return TArray<int32>();
}

int32 UGGProgression::GetUnlockedStretchGoalNum() {
    return 0;
}

int32 UGGProgression::GetTotalWorldChaosAcquired() {
    return 0;
}

TArray<int32> UGGProgression::GetSlotsClaimedByProvider(ESaveSlotProvider Provider) const {
    return TArray<int32>();
}

int32 UGGProgression::GetSelectedWorldCollectionSlot() {
    return 0;
}

FWorldCollection UGGProgression::GetSelectedWorldCollection() {
    return FWorldCollection{};
}

bool UGGProgression::GetProviderClaimingSlot(int32 SlotIndex, ESaveSlotProvider& ClaimedBy) const {
    return false;
}

bool UGGProgression::GetLastLoadedLevelByProvider(ESaveSlotProvider Provider, int32& SlotIndex, FString& LevelDataID) {
    return false;
}

bool UGGProgression::GetLastLoadedLevel(int32& SlotIndex, FString& LevelDataID) {
    return false;
}

FVector UGGProgression::GetGameStartLocation() {
    return FVector{};
}

int32 UGGProgression::GetFirstEmptyWorldCollectionSlot() {
    return 0;
}

FWorldStats UGGProgression::GetCurrentWorldStats() {
    return FWorldStats{};
}

FTimecode UGGProgression::GetCurrentPlaytime(bool bGetSavedPlaytime) {
    return FTimecode{};
}

TSet<FString> UGGProgression::GetCompletedLocalEvents() {
    return TSet<FString>();
}

int32 UGGProgression::GetCollectedTrinketNum() {
    return 0;
}

TArray<FString> UGGProgression::GetCollectedChaosSources() {
    return TArray<FString>();
}

void UGGProgression::DownloadFromCloud() {
}

bool UGGProgression::DoesWorldCollectionExist(int32 SlotIndex) {
    return false;
}

bool UGGProgression::CanCreateAdditionalWorldCollection() {
    return false;
}

bool UGGProgression::AddNewWorldCollection(int32 SlotIndex) {
    return false;
}

bool UGGProgression::AddAndSelectNewWorldCollection(int32 SlotIndex) {
    return false;
}


