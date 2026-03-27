#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActionHintStruct.h"
#include "EGGGearPresetRefreshReason.h"
#include "EPopupResponse.h"
#include "GGMenuComponentUserWidget.h"
#include "GGGearPresetListUserWidget.generated.h"

class UGGGearItemPresetButtonUserWidget;
class UGGPersonalGearPresetHandle;
class UGGPopupUserWidget;
class UGGTileView;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGGearPresetListUserWidget : public UGGMenuComponentUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGTileView* GearSetsTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGPersonalGearPresetHandle*> PresetItems;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionHintStruct> ActionHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldToDeletePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfColumns;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGPersonalGearPresetHandle* LastAddedPresetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPopupUserWidget* PopupUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGPersonalGearPresetHandle* DeferredCreatedHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SortingPasses;
    
public:
    UGGGearPresetListUserWidget();

private:
    UFUNCTION(BlueprintCallable)
    void SpawnPresetNamingPopup(UGGPersonalGearPresetHandle* DeferredHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActiveSorting(const TArray<FGameplayTag>& InSortingPasses, bool bRefreshGearPresetsList);
    
    UFUNCTION(BlueprintCallable)
    void RefreshGearPresetsList(EGGGearPresetRefreshReason RefreshReason);
    
    UFUNCTION(BlueprintCallable)
    void QueryPresetNickname(UGGPersonalGearPresetHandle* DeferredHandle);
    
private:
    UFUNCTION(BlueprintCallable)
    void PresetNamingPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePreset(UGGGearItemPresetButtonUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnUnequipPreset(UGGGearItemPresetButtonUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnPreviewPreset(UGGGearItemPresetButtonUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnFavoritePreset(UGGGearItemPresetButtonUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipPreset(UGGGearItemPresetButtonUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnDeletePreset(UGGGearItemPresetButtonUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnAddPreset(UGGGearItemPresetButtonUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetActionHints(TArray<FActionHintStruct>& OutHints);
    
    UFUNCTION(BlueprintCallable)
    void DeletePreset(UGGPersonalGearPresetHandle* PresetHandle);
    
    UFUNCTION(BlueprintCallable)
    void AddPresetWithNickname(UGGPersonalGearPresetHandle* DeferredHandle, const FString& InSetNickname);
    
};

