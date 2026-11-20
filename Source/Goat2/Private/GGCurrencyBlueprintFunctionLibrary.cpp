#include "GGCurrencyBlueprintFunctionLibrary.h"

UGGCurrencyBlueprintFunctionLibrary::UGGCurrencyBlueprintFunctionLibrary() {
}

bool UGGCurrencyBlueprintFunctionLibrary::SpendCurrency(const UObject* WorldContextObject, FName SourceID) {
    return false;
}

void UGGCurrencyBlueprintFunctionLibrary::SpawnCurrencySplitAmongPlayers(const UObject* WorldContextObject, FName SourceID, bool bIsImportant) {
}

void UGGCurrencyBlueprintFunctionLibrary::SpawnCurrencyFromAmount(const UObject* WorldContextObject, int32 Amount, FVector SpawnLocation, bool bIsImportant) {
}

void UGGCurrencyBlueprintFunctionLibrary::SpawnCurrency(const UObject* WorldContextObject, FName SourceID, FVector SpawnLocation, bool bIsImportant) {
}

int32 UGGCurrencyBlueprintFunctionLibrary::GetMissingChaosForSource(const UObject* WorldContextObject, FName SourceID) {
    return 0;
}

int32 UGGCurrencyBlueprintFunctionLibrary::GetCurrentChaos(const UObject* WorldContextObject) {
    return 0;
}

int32 UGGCurrencyBlueprintFunctionLibrary::GetCurrencyRewardFromSource(const UObject* WorldContextObject, FName SourceID) {
    return 0;
}

int32 UGGCurrencyBlueprintFunctionLibrary::GetCostOfSpendSource(const UObject* WorldContextObject, FName SourceID) {
    return 0;
}

void UGGCurrencyBlueprintFunctionLibrary::CanAffordSpendSourceCallable(const UObject* WorldContextObject, FName SourceID, TEnumAsByte<ECanAfford>& CanAfford) {
}

bool UGGCurrencyBlueprintFunctionLibrary::CanAffordSpendSource(const UObject* WorldContextObject, FName SourceID) {
    return false;
}


