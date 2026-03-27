#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EGearSlot.h"
#include "GGMenuComponentUserWidget.h"
#include "GGGearListUserWidget.generated.h"

class UGGGoatGearInfoDataAsset;
class UGGGoatGearListRulesDataAsset;
class UGGTileView;

UCLASS(Blueprintable, DefaultConfig, EditInlineNew, Config=Game)
class GOAT2_API UGGGearListUserWidget : public UGGMenuComponentUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGTileView* ListWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGGGoatGearListRulesDataAsset>> RulesDataAssets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGGoatGearListRulesDataAsset*> CachedRules;
    
public:
    UGGGearListUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateGearWidgetGrid(EGearSlot InFilter, bool bShowNone, bool bShowStore, TArray<FGameplayTag> InSorting, bool bForceRefresh, UGGGoatGearInfoDataAsset* OptionalFocus, bool bSetFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateListFilters(FGameplayTagContainer OutActiveFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateGearWidgetGrid(EGearSlot InFilter, bool bShowNone, bool bShowStore, const TArray<FGameplayTag>& InSorting, bool bForceRefresh, UGGGoatGearInfoDataAsset* OptionalFocus, bool bSetFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDataAssetAvailibleInList(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FilterGear(UGGGoatGearInfoDataAsset* DataAsset, FGameplayTagContainer Filters);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FilterAltGoatRestriction(UGGGoatGearInfoDataAsset* DataAsset);
    
};

