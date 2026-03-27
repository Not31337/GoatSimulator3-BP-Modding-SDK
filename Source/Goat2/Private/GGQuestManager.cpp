#include "GGQuestManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGGQuestManager::UGGQuestManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowNewGoatTowerEventNotification = false;
    this->GlobalQuestTemplates.AddDefaulted(14);
    this->bShowChaosRewardInQuestList = true;
    this->GlobalInstinctCategoryOrder.AddDefaulted(3);
    this->GlobalInstinctCategoryPack.AddDefaulted(3);
    this->GlobalInstinctHeaderCategoryData.AddDefaulted(3);
    this->AchievementInstinctID = TEXT("AchievementInstinctID");
}

void UGGQuestManager::SortLocalQuests(TArray<AGGQuestBase*>& QuestsToSort, TArray<FGameplayTag> SortingPasses) {
}

void UGGQuestManager::SortLocalQuestObjects(TArray<UObject*>& QuestObjectsToSort, TArray<FGameplayTag> SortingPasses) {
}

void UGGQuestManager::OnRep_CompletedEventTags(FCompletedEventTags LastCompletedEventTags) {
}

void UGGQuestManager::OnNotificationUpdated(FNotification Notification) {
}

void UGGQuestManager::OnNotificationShown(FNotification Notification) {
}

void UGGQuestManager::OnNotificationCleared(FNotification Notification) {
}

void UGGQuestManager::OnInteractedEvent(AActor* SourceActor, AActor* TargetActor) {
}

void UGGQuestManager::OnInstinctTriggered(AGGGoat* Goat, FGameplayTag InstinctTag) {
}

void UGGQuestManager::OnGoatTowerSynchronised(AGGGoatTower* GoatTower, ETowerSynchronizationEvent SynchronizationEvent) {
}

void UGGQuestManager::OnGoatLickedActor(AGGGoat* Goat, AActor* LickedActor) {
}

void UGGQuestManager::OnGoatHeadbuttedActor(AGGGoat* Goat, AActor* HeadbuttedActor) {
}

void UGGQuestManager::OnGoatBaa(AGGGoat* Goat) {
}

void UGGQuestManager::OnCharacterJumped(AGGCharacter* Character) {
}

void UGGQuestManager::OnActorTookDamage(AActor* SourceActor, AActor* TargetActor, float DamageAmount, const UDamageType* DamageType) {
}

bool UGGQuestManager::IsInstinctsAvailable() {
    return false;
}

bool UGGQuestManager::IsInstinctCategoryUnlocked(FGameplayTag CategoryTag) const {
    return false;
}

bool UGGQuestManager::HasCompletedInstinctsInDLCLevel(EGoatDLC DLC) {
    return false;
}

bool UGGQuestManager::HasCompletedAllInstincts(bool bIncludeGloballyAddedInstincts) {
    return false;
}

AGGQuestBase* UGGQuestManager::GetQuestWithActorTag(const FName& ActorTag) {
    return NULL;
}

TArray<TSubclassOf<AGGQuestBase>> UGGQuestManager::GetQuestTemplates() const {
    return TArray<TSubclassOf<AGGQuestBase>>();
}

void UGGQuestManager::GetQuestsInCategory(FGameplayTagContainer QuestCategories, TArray<AGGQuestBase*>& OutQuests, const bool ExactMatch) {
}

void UGGQuestManager::GetQuestsFromFilter(TArray<FAdvancedRule> Rulesets, TArray<AGGQuestBase*>& OutQuests) {
}

AGGQuestSet* UGGQuestManager::GetQuestSetFromSetMemberID(const FString& ID) {
    return NULL;
}

AGGQuestBase* UGGQuestManager::GetQuestFromID(const FString& ID) {
    return NULL;
}

UGGInstinctPackDataAsset* UGGQuestManager::GetPackFromCategory(FGameplayTag CategoryTag) const {
    return NULL;
}

void UGGQuestManager::GetNumInstinctsCompleted(int32& OutNumTotal, int32& OutNumCompleted, bool bIncludeGloballyAddedInstincts) {
}

AGGQuestSet* UGGQuestManager::GetGlobalQuestSet(FGameplayTag SetCategory, bool& bOutSuccess) {
    return NULL;
}

AGGQuestBase* UGGQuestManager::GetClosestActiveQuest(const FVector& Location, float& OutDistance, bool& bOutWithinRadius, AGGQuestBase* EventToAlwaysConsider) {
    return NULL;
}

TArray<AGGQuestBase*> UGGQuestManager::GetAvailableQuestsSortedByDistanceToActor(AActor* Actor) {
    return TArray<AGGQuestBase*>();
}

TArray<AGGQuestBase*> UGGQuestManager::GetAvailableQuests() {
    return TArray<AGGQuestBase*>();
}

bool UGGQuestManager::GetActiveInstincts(TArray<AGGQuestBase*>& OutQuests, int32 Amount, AGGPlayerController* PC) {
    return false;
}

void UGGQuestManager::FindDuplicateQuestIDs() {
}

void UGGQuestManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGQuestManager, CompletedEventTags);
}


