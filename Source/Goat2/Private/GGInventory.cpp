#include "GGInventory.h"

UGGInventory::UGGInventory() {
    this->LocalProgression = NULL;
    this->InstinctObjectLibrary = NULL;
}

void UGGInventory::UpdateQuestUnreadStatus(AGGQuestBase* Quest) {
}

bool UGGInventory::UnlockStoreGearBlueprint(UGGGoatGearInfoDataAsset* DataAsset, FGameplayTag Context, AGGPlayerController* OptionalPC) {
    return false;
}

bool UGGInventory::UnlockMiniGame(UGGPlayerGameDataAsset* GameDataAsset) {
    return false;
}

bool UGGInventory::UnlockInstinctPack(UGGInstinctPackDataAsset* PackToUnlock, bool& bOutFirstPack, FGameplayTag Context) {
    return false;
}

bool UGGInventory::UnlockGear(UGGGoatGearInfoDataAsset* GearDataAsset, FGameplayTag GearUnlockContext, AGGPlayerController* OptionalPC) {
    return false;
}

bool UGGInventory::SpendTokens(int32 TokenAmount, EResourceSpendType SpendType, const FString& SpendActionID, const FString& SpendSource) {
    return false;
}

void UGGInventory::RemoveFromUnread(const FString& ID) {
}

void UGGInventory::OnQuestTierCompleted(AGGQuestBase* Quest, const FQuestTier& Tier) {
}

void UGGInventory::OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState) {
}

void UGGInventory::OnQuestCollectionMilestoneReached(AGGQuestBase* Quest, const FQuestTier& Milestone) {
}

bool UGGInventory::IsMiniGameUnlocked(UGGPlayerGameDataAsset* GameDataAsset) {
    return false;
}

bool UGGInventory::IsGearUnlockedInStoreDataAsset(UGGGoatGearInfoDataAsset* DataAsset) {
    return false;
}

bool UGGInventory::IsGearUnlockedDataAsset(UGGGoatGearInfoDataAsset* DataAsset) {
    return false;
}

bool UGGInventory::IsGearUnknown(UGGGoatGearInfoDataAsset* DataAsset) {
    return false;
}

bool UGGInventory::IsAnyGearWithDescriptorUnlocked(FGameplayTag DescriptorTag, bool bIgnoreUnlockedByDefault) {
    return false;
}

bool UGGInventory::IsAGGearUnlocked(FGameplayTag AGTag) {
    return false;
}

bool UGGInventory::HasUnlockedInstinctPack() {
    return false;
}

bool UGGInventory::HasGearInSlot(EGearSlot InSlot) {
    return false;
}

TArray<UGGGoatGearInfoDataAsset*> UGGInventory::GetUnlockedGear(EGearSlot Slot, bool bExcludeFur, bool bExcludeHorns, bool bExcludeAltGoat, bool bExcludeDefault) {
    return TArray<UGGGoatGearInfoDataAsset*>();
}

int32 UGGInventory::GetTokens() {
    return 0;
}

UGGGoatGearInfoDataAsset* UGGInventory::GetRandomGearFromSlot(EGearSlot InSlot, UGGAlternativeGoatDataAsset* AlternativeGoat, bool bRandomStyle, bool bIgnoreDLCRestriction) {
    return NULL;
}

UGGGoatGearInfoDataAsset* UGGInventory::GetRandomGearFromListStatic(UWorld* InWorld, TArray<UGGGoatGearInfoDataAsset*> GearList, bool bIgnoreDLCRestriction) {
    return NULL;
}

UGGGoatGearInfoDataAsset* UGGInventory::GetRandomGearFromList(TArray<UGGGoatGearInfoDataAsset*> GearList, UGGAlternativeGoatDataAsset* AlternativeGoat, bool bIgnoreDLCRestriction) {
    return NULL;
}

int32 UGGInventory::GetNumInstinctPacksUnlocked(bool bCountTutorial, bool bOnlyCurrentLevelData) {
    return 0;
}

void UGGInventory::GetNumInstinctPacks(int32& Total, int32& Unlocked, bool bCountTutorial, bool bOnlyCurrentLevelData, bool bIncludeGloballyAddedPacks) {
}

TArray<UGGGoatGearInfoDataAsset*> UGGInventory::GetLibrary() {
    return TArray<UGGGoatGearInfoDataAsset*>();
}

bool UGGInventory::GetIsUnreadObject(UObject* Object) {
    return false;
}

bool UGGInventory::GetIsUnread(const FString& ID) {
    return false;
}

UGGGoatGearInfoDataAsset* UGGInventory::GetGearAssetFromID(const FString& ID) {
    return NULL;
}

TArray<UGGGoatGearInfoDataAsset*> UGGInventory::GetAGGoatGearInfoDataAssets() {
    return TArray<UGGGoatGearInfoDataAsset*>();
}

bool UGGInventory::FilterCanAfford(UObject* Target, UGGGoatGearInfoDataAsset* Obj, bool bReverse) {
    return false;
}

bool UGGInventory::FilterByPurchasable(UObject* Target, UGGGoatGearInfoDataAsset* Obj, bool bReverse) {
    return false;
}

bool UGGInventory::CanSpendTokens(int32 Amount) {
    return false;
}

bool UGGInventory::BuyGear(UGGGoatGearInfoDataAsset* DataAsset) {
    return false;
}

void UGGInventory::AddToUnread(const FString& ID) {
}

bool UGGInventory::AcquireTokens(int32 TokenAmount, EResourceAcquisitionType AcquisitionType, const FString& AcquisitionActionID, const FString& AcquireSource) {
    return false;
}


