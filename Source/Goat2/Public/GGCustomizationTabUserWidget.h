#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "ECustomizationMode.h"
#include "EEquipResult.h"
#include "EGearSlot.h"
#include "GGGearItemWidgetInterface.h"
#include "GGMenuTabUserWidget.h"
#include "GearSorting.h"
#include "OnCustomizationModeChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGCustomizationTabUserWidget.generated.h"

class AGGCharacter;
class AGGGearCustomizationCamera;
class AGGGoat;
class UCanvasPanel;
class UGGButtonUserWidget;
class UGGDLCShopPageUserWidget;
class UGGFeaturedPageUserWidget;
class UGGGearItemButtonUserWidget;
class UGGGearListUserWidget;
class UGGGearPresetListUserWidget;
class UGGGoatGearInfoDataAsset;
class UGGGoatGearManager;
class UGGGoatGearPreviewManager;
class UGGGoatGearStyleDataAsset;
class UGGMenuComponentUserWidget;
class UGGMultipleOptionsOptionUserWidget;
class UGGSidebarListButtonUserWidget;
class UGGUserWidget;
class UNamedSlot;
class UScaleBox;
class USceneComponent;
class UTexture2D;
class UUserWidget;
class UVerticalBox;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGCustomizationTabUserWidget : public UGGMenuTabUserWidget, public IGGGearItemWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGUserWidget> StyleChoiceWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBoughtGearShouldBeRemovedImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipGearImmediatelyAfterBuying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightClickUnequipsGearInList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnequipOnLeftClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StyleSelectGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDefaultBaaAsEmptySlotOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcherCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ItemCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ContentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGearListUserWidget* GoatGearListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BottomNotificationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGSidebarListButtonUserWidget* GearSetsButtonCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* StoreButtonNamedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* FeaturedButtonNamedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGSidebarListButtonUserWidget* StoreButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* GearListContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBoxCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* SelectedGearDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGearSlot SelectedGearSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGearSlot CachedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* CachedOptionalGearFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedIsSorting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGGearItemButtonUserWidget> GearButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* SortingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMultipleOptionsOptionUserWidget* SortingOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGearSorting> Sorting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGearSorting CurrentSorting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGearPresetListUserWidget* GearSetsTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGUserWidget> GearPresetTileViewWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMenuComponentUserWidget* FeaturedTabWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGFeaturedPageUserWidget> FeaturedTabWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGDLCShopPageUserWidget> DLCShopTabWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomizationModeChanged OnCustomizationModeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> BottomNotificationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGSidebarListButtonUserWidget> SidebarListButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FeaturedTabIcon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwningGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGearManager* GearManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGearPreviewManager* GearPreviewManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* PreUdderGearRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMenuComponentUserWidget* DLCShopTabWidget;
    
public:
    UGGCustomizationTabUserWidget();

    UFUNCTION(BlueprintCallable)
    bool UnequipPreviewGear(EGearSlot GearSlot);
    
    UFUNCTION(BlueprintCallable)
    bool UnequipAllPreviewGear();
    
    UFUNCTION(BlueprintCallable)
    bool UncommitPreviewGearSlot(EGearSlot GearSlot, bool bRemovePreview);
    
    UFUNCTION(BlueprintCallable)
    void ToggleGearAsFavorite(UGGGoatGearInfoDataAsset* DataAsset, bool& bOutNewFavorite);
    
    UFUNCTION(BlueprintCallable)
    void SwitchToSlotCanvas(EGearSlot InSlot, UGGGoatGearInfoDataAsset* OptionalGearFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetStoreMode();
    
    UFUNCTION(BlueprintCallable)
    void SetSidebarButtonActive(UGGUserWidget* SidebarButton);
    
    UFUNCTION(BlueprintCallable)
    void SetPresetsMode();
    
    UFUNCTION(BlueprintCallable)
    void SetOverviewMode();
    
    UFUNCTION(BlueprintCallable)
    void SetGearAsFavorite(UGGGoatGearInfoDataAsset* DataAsset, bool bFavorite);
    
    UFUNCTION(BlueprintCallable)
    void SetFeaturedMode();
    
    UFUNCTION(BlueprintCallable)
    void SetDLCShopMode();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizationMode();
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityEnabledForCommitedSlot(EGearSlot GearSlot, bool bAbilityEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SaveCurrentSortingIndexForMode(ECustomizationMode InMode, const FString& InSortingID);
    
    UFUNCTION(BlueprintCallable)
    void RevertPreviewToLastCommited(EGearSlot GearSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshOverviewButtons();
    
    UFUNCTION(BlueprintCallable)
    void RefreshGearPresets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshGearMenuButtons();
    
    UFUNCTION(BlueprintCallable)
    EEquipResult PerformGearAction(UGGGoatGearInfoDataAsset* DataAsset, UGGGearItemButtonUserWidget* GearWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUncommitedPreviewGearSlot(EGearSlot InSlot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSortingOptionIndexChanged(int32 NewIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetStoreMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSorting(FGearSorting NewSorting, int32 NewIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPresetsMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetOverviewMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFeaturedMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDLCShopMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCustomizationMode();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwningGoatRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnGearWasUpdated(AGGGoat* Goat, const TArray<USceneComponent*>& CurrentGoatGear);
    
    UFUNCTION(BlueprintCallable)
    void OnGearUnEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearUnequipped);
    
    UFUNCTION(BlueprintCallable)
    void OnGearEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearEquipped);
    
    UFUNCTION(BlueprintCallable)
    void OnFeaturedButtonWidgetInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnDLCShopButtonWidgetInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizationModeChangedInternal(ECustomizationMode CustomizationMode);
    
    UFUNCTION(BlueprintCallable)
    void OnCommittedPreviewGear(UGGGoatGearInfoDataAsset* DataAsset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoreButtonAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoneButtonAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInStoreMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearSlotTabAvailable(EGearSlot InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearCommited(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityEnabledForCommitedGearForSlot(EGearSlot GearSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlySpawnedChoiceWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlySelectedStyle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGSidebarListButtonUserWidget* GetStoreButtonPanelButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UGGButtonUserWidget* GetSidebarButtonForSlot(EGearSlot InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UScaleBox* GetGearInfoPanelContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AGGGearCustomizationCamera* GetGearCustomizationCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentSortingPasses(TArray<FGameplayTag>& SortingPasses);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentFiltersForSorting(FGameplayTagContainer& Filters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECustomizationMode GetCurrentCustomizationMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGGoatGearInfoDataAsset* GetCommitedGearForSlot(EGearSlot GearSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBottomNotificationWidgetText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindSavedSortingIndexForMode(ECustomizationMode InMode);
    
    UFUNCTION(BlueprintCallable)
    bool EquipPreviewGear(UGGGoatGearInfoDataAsset* DataAsset, bool bEquip, UGGGoatGearStyleDataAsset* StyleAsset);
    
    UFUNCTION(BlueprintCallable)
    void CreateStyleChoiceWidget(UGGGoatGearInfoDataAsset* DataAsset, UGGUserWidget* FromWidget);
    
    UFUNCTION(BlueprintCallable)
    void CreateBottomNotificationWidget(TSoftClassPtr<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    EEquipResult CommitPreviewGear(UGGGoatGearInfoDataAsset* DataAsset, bool bGiveAbility, bool bPreview, bool bWasUnlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGearBePreviewed(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable)
    EEquipResult BuyGear(UGGGoatGearInfoDataAsset* DataAsset, bool bShouldPreview);
    

    // Fix for true pure virtual functions not being implemented
};

