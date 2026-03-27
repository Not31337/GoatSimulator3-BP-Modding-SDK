#include "GGApocalypseBPFunctionLibrary.h"

UGGApocalypseBPFunctionLibrary::UGGApocalypseBPFunctionLibrary() {
}

bool UGGApocalypseBPFunctionLibrary::SpendCurrency(const UObject* WorldContextObject, FName SourceID) {
    return false;
}

void UGGApocalypseBPFunctionLibrary::SpawnCurrencySplitAmongPlayers(const UObject* WorldContextObject, FName SourceID, bool bIsImportant) {
}

void UGGApocalypseBPFunctionLibrary::SpawnCurrencyFromAmount(const UObject* WorldContextObject, int32 Amount, FVector SpawnLocation, bool bIsImportant) {
}

void UGGApocalypseBPFunctionLibrary::SpawnCurrency(const UObject* WorldContextObject, FName SourceID, FVector SpawnLocation, bool bIsImportant) {
}

AGGVehicle_Motorcycle* UGGApocalypseBPFunctionLibrary::IsCompMotorcycle(UPrimitiveComponent* Comp, bool& IsMotorcycle) {
    return NULL;
}

int32 UGGApocalypseBPFunctionLibrary::GetMissingChaosForSource(const UObject* WorldContextObject, FName SourceID) {
    return 0;
}

int32 UGGApocalypseBPFunctionLibrary::GetCurrentChaos(const UObject* WorldContextObject) {
    return 0;
}

int32 UGGApocalypseBPFunctionLibrary::GetCurrencyRewardFromSource(const UObject* WorldContextObject, FName SourceID) {
    return 0;
}

int32 UGGApocalypseBPFunctionLibrary::GetCostOfSpendSource(const UObject* WorldContextObject, FName SourceID) {
    return 0;
}

UTexture2D* UGGApocalypseBPFunctionLibrary::GetCampUpgradeTextureFromGatherID(const UObject* WorldContextObject, const FString& inString, bool bUnframed) {
    return NULL;
}

AGGGameState_Apocalypse* UGGApocalypseBPFunctionLibrary::GetApocalypseGameState(const UObject* WorldContextObject) {
    return NULL;
}

void UGGApocalypseBPFunctionLibrary::CanAffordSpendSourceCallable(const UObject* WorldContextObject, FName SourceID, TEnumAsByte<ECanAfford>& CanAfford) {
}

bool UGGApocalypseBPFunctionLibrary::CanAffordSpendSource(const UObject* WorldContextObject, FName SourceID) {
    return false;
}


