#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateTypes.h"
#include "DLCLevelData.h"
#include "ECustomizationMode.h"
#include "EEquipResult.h"
#include "EGearSlot.h"
#include "EGoatDLCRestriction.h"
#include "GGGearItemWidgetInterface.h"
#include "GGListEntryUserWidget.h"
#include "GearPreviewRequestDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGGearItemButtonUserWidget.generated.h"

class AGGGoat;
class UCameraShakeBase;
class UCheckBox;
class UGGGoatGearInfoDataAsset;
class UGGUserWidget;
class UImage;
class UMaterial;
class UOverlay;
class USceneComponent;
class USizeBox;
class UTextBlock;
class UTexture2D;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGGearItemButtonUserWidget : public UGGListEntryUserWidget, public IGGGearItemWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomizationMode CustomizationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGearSlot StaticGearSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BuyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HoldBuyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotYetUnlockedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoTokensText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* EquippedOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* NewOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PriceOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BuyingOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* NotEnoughTokensOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* FavoriteOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ErrorOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* LoadingOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* AdditionalBackgroundOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* AdditionalBackgroundSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* TestGearOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* GearNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* GearPriceLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GearImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BaaGearImageBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AbilityIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* AbilityIconContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* AbilityFXOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* FavoriteCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StyleIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DLCIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GearBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* NotEnoughTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GearSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> BuyCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeFallOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraShakeOrientTowardsEpicenter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGearPreviewRequest OnGearPreviewRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StyleSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NameLimitWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGearWasJustEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* IconRenderMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle BackgroundStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> AbilityEnabledIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AbilityEnabledColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> AbilityDisabledIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AbilityDisabledColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGGoatGearInfoDataAsset> Gators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGearSlot, FVector2D> SlotSelectionZoomParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsBuying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsEquipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsFavoriting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsRightClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsShowingAbilityIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsShowingAbilityStateInList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateThumbnailOnStylePreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevertStyleThumbnailOnUnequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GearIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentAGTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* LastIconDataAsset;
    
    UGGGearItemButtonUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateIconAsset(UGGGoatGearInfoDataAsset* GearAsset);
    
    UFUNCTION(BlueprintCallable)
    void ToggleError(bool bHasError);
    
    UFUNCTION(BlueprintCallable)
    void ToggleBuyMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsRightClick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsFavoriting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsEquipping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsBuying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUpdateIcon(UGGGoatGearInfoDataAsset* GearAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldUpdateAGTag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBackgrounds();
    
    UFUNCTION(BlueprintCallable)
    void SetUnread();
    
    UFUNCTION(BlueprintCallable)
    void SetTier();
    
    UFUNCTION(BlueprintCallable)
    void SetTestGear();
    
    UFUNCTION(BlueprintCallable)
    void SetStyles();
    
    UFUNCTION(BlueprintCallable)
    void SetPrice();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetName();
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetFavorite();
    
    UFUNCTION(BlueprintCallable)
    void SetEquipped();
    
    UFUNCTION(BlueprintCallable)
    void SetDLCRestricted();
    
    UFUNCTION(BlueprintCallable)
    void SetDLC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetVisuals();
    
    UFUNCTION(BlueprintCallable)
    void PreformGearAction(EEquipResult Action);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBump();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTier(int32 InTier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTestGear(bool bIsTestGear);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetStyles(bool bHasStyles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPrice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetOverviewMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIcon(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFeaturedMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFavorite(bool IsFavorite);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetError(bool bError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetEquipped(bool bIsEquipped, bool bWasEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDLCRestricted(bool bIsDLCRestricted, FDLCLevelData DLCLevelData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDLC(bool bIsDLC);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetAbility(bool bHasAbility, bool bAbilityEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreformedGearAction(EEquipResult Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGearWasUpdated(AGGGoat* Goat, const TArray<USceneComponent*>& CurrentGoatGear);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGearIsUnknown();
    
    UFUNCTION(BlueprintCallable)
    void OnFavoriteCheckStateChange(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnWidgetUnhovered(UGGUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnWidgetHovered(UGGUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void LoadIconTexture(TSoftObjectPtr<UTexture2D> InGearIcon);
    
    UFUNCTION(BlueprintCallable)
    void LoadAndSetIcon(UGGGoatGearInfoDataAsset* GearAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBuyMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearUnknown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearDLCRestricted(EGoatDLCRestriction& OutRestriction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDescriptor(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockTypeFromTag(FGameplayTag UnlockType, bool& Found);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRarityFromTag(FGameplayTag Rarity, bool& Found);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> DetermineIcon(UGGGoatGearInfoDataAsset* GearAsset);
    
    UFUNCTION(BlueprintCallable)
    void DetermineAdditionalBackgroundOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCurrentAGEquipThis(UGGGoatGearInfoDataAsset* GearAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordGear();
    

    // Fix for true pure virtual functions not being implemented
};

