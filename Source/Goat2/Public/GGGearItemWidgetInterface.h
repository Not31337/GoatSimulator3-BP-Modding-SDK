#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EGearSlot.h"
#include "GGGearItemWidgetInterface.generated.h"

class UGGGoatGearInfoDataAsset;
class UGGGoatGearStyleDataAsset;

UINTERFACE(Blueprintable)
class GOAT2_API UGGGearItemWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGGearItemWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearData(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAbilityActive(bool Active);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectGearStyle(UGGGoatGearInfoDataAsset* DataAsset, UGGGoatGearStyleDataAsset* StyleAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshGearData(bool bRebuild);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreviewGearStyle(UGGGoatGearInfoDataAsset* DataAsset, UGGGoatGearStyleDataAsset* StyleAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreviewedGearData(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGearSlot GetGearSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGGGoatGearInfoDataAsset* GetCurrentGearData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CommitedGearData(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearGearData(EGearSlot Slot);
    
};

