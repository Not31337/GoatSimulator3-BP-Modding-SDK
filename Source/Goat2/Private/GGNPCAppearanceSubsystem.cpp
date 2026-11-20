#include "GGNPCAppearanceSubsystem.h"

UGGNPCAppearanceSubsystem::UGGNPCAppearanceSubsystem() {
    this->AdditionalHeadTables.AddDefaulted(3);
    this->AdditionalHairTables.AddDefaulted(3);
    this->AdditionalUpperBodyTables.AddDefaulted(3);
    this->AdditionalLowerBodyTables.AddDefaulted(3);
    this->AdditionalAccessoriesTables.AddDefaulted(3);
    this->AdditionalSetTables.AddDefaulted(3);
    this->AdditionalNameDataTables.AddDefaulted(3);
}

TArray<FString> UGGNPCAppearanceSubsystem::ShouldUseHatFriendlyHair(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, TArray<FString> NPCAppearanceArray) {
    return TArray<FString>();
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

TArray<FString> UGGNPCAppearanceSubsystem::GenerateRandomAppearance(UObject* WorldContext, EGender Gender, FGameplayTag AreaTag, TArray<FString> PredeterminedElements, bool bForceAreaTag, bool bHandleHatFriendlyHair) {
    return TArray<FString>();
}


