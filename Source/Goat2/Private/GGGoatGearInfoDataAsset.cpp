#include "GGGoatGearInfoDataAsset.h"

UGGGoatGearInfoDataAsset::UGGGoatGearInfoDataAsset() {
    this->GearSlot = EGearSlot::GS_None;
    this->ItemType = EGearItemType::Gear;
    this->HasAbility = false;
    this->DLCFormat = FText::FromString(TEXT("<icon id=\"{Icon}\"/> <GoatGearDLCDescription>{DLC}</>"));
    this->UnlockPrice = 0;
    this->UnlockedByDefault = false;
    this->UnlocksWith = NULL;
    this->UnlockedByDefaultInDemo = false;
    this->ShowInStoreByDefault = true;
    this->HideInStore = false;
    this->bHasEquipRestrictions = false;
    this->DLCRestriction = EGoatDLCRestriction::None;
    this->RequiresDLC = EGoatDLC::Invalid;
    this->bIsConnectedToInstinct = false;
    this->EquipOverrideSound = NULL;
    this->IsTestGear = false;
    this->HideInInventory = false;
    this->bReEquipOnStartup = true;
    this->NoneDataAsset = NULL;
    this->SplitScreenStyleData.AddDefaulted(4);
    this->GearDLCInfo.AddDefaulted(14);
}

void UGGGoatGearInfoDataAsset::SetStyleAsCurrentGear(UGGGoatGearStyleDataAsset* StyleData, int32 ControllerId) {
}

void UGGGoatGearInfoDataAsset::LoadPickupMesh(FOnPickupAssetsLoaded OnPickupAssetsLoaded) {
}

bool UGGGoatGearInfoDataAsset::IsEquippingRestricted(const UWorld* InWorld) const {
    return false;
}

bool UGGGoatGearInfoDataAsset::HasStyles() {
    return false;
}

bool UGGGoatGearInfoDataAsset::HasDLCRestrictions() const {
    return false;
}

FText UGGGoatGearInfoDataAsset::GetTitleText() const {
    return FText::GetEmpty();
}

TSoftClassPtr<USceneComponent> UGGGoatGearInfoDataAsset::GetGoatGearOptionalStyle(UGGGoatGearStyleDataAsset* StyleData) {
    return NULL;
}

TSoftClassPtr<USceneComponent> UGGGoatGearInfoDataAsset::GetGoatGear(int32 ControllerId) {
    return NULL;
}

FText UGGGoatGearInfoDataAsset::GetDLCDescription() {
    return FText::GetEmpty();
}

FText UGGGoatGearInfoDataAsset::GetDescription() {
    return FText::GetEmpty();
}

UGGGoatGearStyleDataAsset* UGGGoatGearInfoDataAsset::GetCurrentStyleData(int32 ControllerId) {
    return NULL;
}

FText UGGGoatGearInfoDataAsset::GetAbilityDescription() {
    return FText::GetEmpty();
}

bool UGGGoatGearInfoDataAsset::CanGoatEquipThis_Tag(FGameplayTag InAltGoatTag) {
    return false;
}

bool UGGGoatGearInfoDataAsset::CanGoatEquipThis(UGGAlternativeGoatDataAsset* AltGoatAsset) {
    return false;
}


