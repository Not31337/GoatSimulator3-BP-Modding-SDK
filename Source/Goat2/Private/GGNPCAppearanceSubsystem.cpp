#include "GGNPCAppearanceSubsystem.h"

UGGNPCAppearanceSubsystem::UGGNPCAppearanceSubsystem() {
    this->AdditionalHeadTables.AddDefaulted(2);
    this->AdditionalHairTables.AddDefaulted(2);
    this->AdditionalUpperBodyTables.AddDefaulted(2);
    this->AdditionalLowerBodyTables.AddDefaulted(2);
    this->AdditionalAccessoriesTables.AddDefaulted(2);
    this->AdditionalSetTables.AddDefaulted(2);
    this->AdditionalNameDataTables.AddDefaulted(2);
}

TArray<UDataTable*> UGGNPCAppearanceSubsystem::GetSetTables(UObject* WorldContext) {
    return TArray<UDataTable*>();
}

FString UGGNPCAppearanceSubsystem::GetRandomUpperBody(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, TArray<FString> CurrentAppearance, bool bForceAreaTag, bool bExcludeCurrent) {
    return TEXT("");
}

FString UGGNPCAppearanceSubsystem::GetRandomLowerBody(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, TArray<FString> CurrentAppearance, bool bForceAreaTag, bool bExcludeCurrent) {
    return TEXT("");
}

FString UGGNPCAppearanceSubsystem::GetRandomHead(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, TArray<FString> CurrentAppearance, bool bForceAreaTag, bool bExcludeCurrent) {
    return TEXT("");
}

FString UGGNPCAppearanceSubsystem::GetRandomHair(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, TArray<FString> CurrentAppearance, bool bForceAreaTag, bool bExcludeCurrent, bool bFindHatFriendly) {
    return TEXT("");
}

FString UGGNPCAppearanceSubsystem::GetRandomAccessory(UObject* WorldContext, EGender Gender, FGameplayTag AccessoryType, FGameplayTag AreaTag, const TArray<FAccessoryElement>& CurrentAccessories, bool bForceAreaTag, bool bExcludeCurrent) {
    return TEXT("");
}

TArray<FString> UGGNPCAppearanceSubsystem::GetRandomAccessories(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, const TArray<FAccessoryElement>& CurrentAccessories, int32 AccessoryAmount, bool bForceAreaTag, bool bExcludeCurrent) {
    return TArray<FString>();
}

TArray<FText> UGGNPCAppearanceSubsystem::GetNPCNamesForRow(UObject* WorldContext, const FName& RowName) {
    return TArray<FText>();
}


