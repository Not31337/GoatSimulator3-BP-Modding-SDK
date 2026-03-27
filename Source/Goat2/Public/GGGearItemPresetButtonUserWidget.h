#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGearSlot.h"
#include "GGListEntryUserWidget.h"
#include "OnAddPresetDelegate.h"
#include "OnDeletePresetDelegate.h"
#include "OnEquipPresetDelegate.h"
#include "OnFavoritePresetDelegate.h"
#include "OnPreviewPresetDelegate.h"
#include "OnUnequipPresetDelegate.h"
#include "OnUpdatePresetDelegate.h"
#include "GGGearItemPresetButtonUserWidget.generated.h"

class UAudioComponent;
class UBorder;
class UButton;
class UCheckBox;
class UGGGoatGearInfoDataAsset;
class UGGPersonalGearPresetHandle;
class UImage;
class UMaterialInterface;
class UOverlay;
class USizeBox;
class UTextBlock;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGGearItemPresetButtonUserWidget : public UGGListEntryUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGPersonalGearPresetHandle* PresetHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGGoatGearInfoDataAsset*> GearDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldToDeletePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGearSlot> SlotOrderBigIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmallIconsHasDesignatedSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGearSlot> SmallIconsDesignatedSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGearSlot> SlotOrderSmallIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDisabledGearAsGrayedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGearTierColorsInIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAGTierColorForAllSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAGTierAsBorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GearImageBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GearImageSmall1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GearImageSmall2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GearImageSmall3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GearImageSmall4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* EquippedOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* FavoriteOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* DeleteButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DeleteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* RefreshButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PresetNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* FavoriteCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FavoriteDropShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* PresetBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundSmall1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundSmall2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundSmall3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundSmall4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GearEquippedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GearSelectedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ErrorAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GearAddedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PresetDeletedAnim;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeletePreset OnDeletePreset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFavoritePreset OnFavoritePreset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviewPreset OnPreviewPreset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipPreset OnEquipPreset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnequipPreset OnUnequipPreset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdatePreset OnUpdatePreset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddPreset OnAddPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> BorderTierColorMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BorderDefaultTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> BigIconTierColorMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BigIconDefaultTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> SmallIconsTierColorMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SmallIconDefaultTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HoldToDeleteSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HoldToDeleteEndSoundTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* HoldToDeleteAudioComponent;
    
public:
    UGGGearItemPresetButtonUserWidget();

    UFUNCTION(BlueprintCallable)
    void ToggleDelete();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopHoldToDelete();
    
    UFUNCTION(BlueprintCallable)
    void StartHoldToDelete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetName();
    
    UFUNCTION(BlueprintCallable)
    void SetFavorite();
    
    UFUNCTION(BlueprintCallable)
    void SetEquipped();
    
    UFUNCTION(BlueprintCallable)
    void PlayError();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopHoldToDelete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartHoldToDelete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetGearSlotIcon(UGGGoatGearInfoDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFavorite(bool IsFavorite);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetEquipped(bool bIsEquipped, bool bWasEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPresetDeleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPresetAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayError();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewSetModeActive(bool bNewSetMode);
    
    UFUNCTION(BlueprintCallable)
    void OnGearButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnGearButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnGearButtonHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFavoriteToggled(bool bNewFavoriteState);
    
    UFUNCTION(BlueprintCallable)
    void OnFavoriteCheckStateChange(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPresetEquipped();
    
};

