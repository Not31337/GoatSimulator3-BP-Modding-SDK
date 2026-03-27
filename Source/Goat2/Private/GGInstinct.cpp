#include "GGInstinct.h"
#include "Templates/SubclassOf.h"

AGGInstinct::AGGInstinct(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
    this->bSavePartialCompletion = false;
    this->InstinctType = EInstinctType::Area;
    this->bRequireGearUnlocked = false;
    this->RequiredUnlockedGearAsset = NULL;
    this->BasePriority = 0;
    this->AdditionalGearPriority = 100;
    this->AdditionalAreaPriority = 0;
    this->InstinctDifficultyType = EInstinctDifficultyType::Low;
    this->RequiredInstinctPack = NULL;
    this->bHasProgress = false;
    this->InstinctButtonID = TEXT("quests_instincts");
    this->InstinctCategoryDataAsset = NULL;
    this->bIsAvailableOnAllDLCs = false;
    this->bIsUnread = false;
    this->bOverrideProgressOnMobile = false;
    this->MobileProgressOverride = 0;
    this->bOverrideProgressOnGen8 = false;
    this->Gen8ProgressOverride = 0;
}

void AGGInstinct::SetPinningPlayerController(AGGPlayerController* PC) {
}

void AGGInstinct::SetAsPinned(bool ShouldBePinned, AGGPlayerController* PC) {
}

void AGGInstinct::RemovePinningPlayerController(AGGPlayerController* PC) {
}

void AGGInstinct::OnInventoryInitialized(UGGInventory* Inventory) {
}

void AGGInstinct::OnInstinctPackUnlocked(UGGInstinctPackDataAsset* InDataAsset, FGameplayTag Context) {
}

void AGGInstinct::OnGearEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearEquipped) {
}

bool AGGInstinct::IsPinned(AGGPlayerController* PC) {
    return false;
}

bool AGGInstinct::IsInstinctUnlocked() const {
    return false;
}

bool AGGInstinct::HasDescription() {
    return false;
}

int32 AGGInstinct::GetPriority(AGGPlayerController* PC) {
    return 0;
}

TArray<AGGPlayerController*> AGGInstinct::GetPinningPlayerControllers() {
    return TArray<AGGPlayerController*>();
}


