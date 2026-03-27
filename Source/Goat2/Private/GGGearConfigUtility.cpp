#include "GGGearConfigUtility.h"

UGGGearConfigUtility::UGGGearConfigUtility() {
}

void UGGGearConfigUtility::SaveGearConfig(UObject* GearComponent) {
}

void UGGGearConfigUtility::RemoveSection(const FString& AssetID) {
}

bool UGGGearConfigUtility::IsConfigCurrent() {
    return false;
}

bool UGGGearConfigUtility::IsConfigCheckedOut() {
    return false;
}

TArray<FGameplayTag> UGGGearConfigUtility::GetWhoCannotEquipThis(const FString& AssetID) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UGGGearConfigUtility::GetWhoCanEquipThis(const FString& AssetID) {
    return TArray<FGameplayTag>();
}

bool UGGGearConfigUtility::GetConfigState(bool& bOutCheckedOut, bool& bOutIsCurrent, bool bForceUpdate) {
    return false;
}

bool UGGGearConfigUtility::DoesSectionExist(const FString& AssetID) {
    return false;
}

void UGGGearConfigUtility::CheckoutGearConfig() {
}


