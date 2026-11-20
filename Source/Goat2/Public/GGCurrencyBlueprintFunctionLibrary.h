#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECanAfford.h"
#include "GGCurrencyBlueprintFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGCurrencyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGCurrencyBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SpendCurrency(const UObject* WorldContextObject, FName SourceID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnCurrencySplitAmongPlayers(const UObject* WorldContextObject, FName SourceID, bool bIsImportant);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnCurrencyFromAmount(const UObject* WorldContextObject, int32 Amount, FVector SpawnLocation, bool bIsImportant);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnCurrency(const UObject* WorldContextObject, FName SourceID, FVector SpawnLocation, bool bIsImportant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMissingChaosForSource(const UObject* WorldContextObject, FName SourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrentChaos(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrencyRewardFromSource(const UObject* WorldContextObject, FName SourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCostOfSpendSource(const UObject* WorldContextObject, FName SourceID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CanAffordSpendSourceCallable(const UObject* WorldContextObject, FName SourceID, TEnumAsByte<ECanAfford>& CanAfford);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanAffordSpendSource(const UObject* WorldContextObject, FName SourceID);
    
};

