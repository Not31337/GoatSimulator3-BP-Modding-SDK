#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECanAfford.h"
#include "GGApocalypseBPFunctionLibrary.generated.h"

class AGGGameState_Apocalypse;
class AGGVehicle_Motorcycle;
class UObject;
class UPrimitiveComponent;
class UTexture2D;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGApocalypseBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGApocalypseBPFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SpendCurrency(const UObject* WorldContextObject, FName SourceID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnCurrencySplitAmongPlayers(const UObject* WorldContextObject, FName SourceID, bool bIsImportant);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnCurrencyFromAmount(const UObject* WorldContextObject, int32 Amount, FVector SpawnLocation, bool bIsImportant);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnCurrency(const UObject* WorldContextObject, FName SourceID, FVector SpawnLocation, bool bIsImportant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGVehicle_Motorcycle* IsCompMotorcycle(UPrimitiveComponent* Comp, bool& IsMotorcycle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMissingChaosForSource(const UObject* WorldContextObject, FName SourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrentChaos(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrencyRewardFromSource(const UObject* WorldContextObject, FName SourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCostOfSpendSource(const UObject* WorldContextObject, FName SourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetCampUpgradeTextureFromGatherID(const UObject* WorldContextObject, const FString& inString, bool bUnframed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGGameState_Apocalypse* GetApocalypseGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CanAffordSpendSourceCallable(const UObject* WorldContextObject, FName SourceID, TEnumAsByte<ECanAfford>& CanAfford);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanAffordSpendSource(const UObject* WorldContextObject, FName SourceID);
    
};

