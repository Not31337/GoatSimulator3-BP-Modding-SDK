#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GGGearConfigUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGGearConfigUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGGearConfigUtility();

    UFUNCTION(BlueprintCallable)
    static void SaveGearConfig(UObject* GearComponent);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSection(const FString& AssetID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConfigCurrent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConfigCheckedOut();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetWhoCannotEquipThis(const FString& AssetID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetWhoCanEquipThis(const FString& AssetID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetConfigState(bool& bOutCheckedOut, bool& bOutIsCurrent, bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesSectionExist(const FString& AssetID);
    
    UFUNCTION(BlueprintCallable)
    static void CheckoutGearConfig();
    
};

