#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "DLCLevelData.h"
#include "DLCOffer.h"
#include "EGoatDLC.h"
#include "EPopupResponse.h"
#include "GGButtonUserWidget.h"
#include "OnOfferUpdatedDelegate.h"
#include "OverrideDLCIsValidDelegate.h"
#include "OverrideDLCOwnershipDelegate.h"
#include "PopupDataRow.h"
#include "UpdateNotificationData.h"
#include "GGDLCShopEntryUserWidget.generated.h"

class UGGButton;
class UGGDLCDataAsset;
class UGGDLCShopCategoryHeaderWidget;
class UGGDLCShopSettingsDataAsset;
class UGGPopupUserWidget;
class UGGUserWidget;
class UImage;
class UMaterial;
class UObject;
class UOverlay;
class UScaleBox;
class USizeBox;
class UTextBlock;
class UTexture2D;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGDLCShopEntryUserWidget : public UGGButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatDLC DLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGPopupUserWidget> DLCPurchasePopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DLCImageOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> DLCTitleImagePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* DLCImageMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DLCAlreadyOwnedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTextIfTitleImageIsMissing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideDLCTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopupDataRow OverridePopupDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideDLCAlreadyOwnedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideDLCPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverrideDLCOwnership OnOverrideDLCOwnershipEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverrideDLCIsValid OnOverrideDLCIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCLevelData OverrideDLCLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> OverrideNewsImage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOfferUpdated OnOfferUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGDLCDataAsset* DLCDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCOffer DLCOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCLevelData LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopupDataRow DLCPopupData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DLCImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* DLCTitleSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* DLCTitleScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DLCTitleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DLCTitleFallbackText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayDLCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DLCNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DLCPriceLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DLCAlreadyOwnedLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* DLCSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MainSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* OwnershipScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* RibbonOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ToggleAvailabilityOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButton* ToggleAvailabilityButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DLCSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGDLCShopSettingsDataAsset* Settings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDLCShopCategoryHeaderWidget* AssociatedHeader;
    
    UGGDLCShopEntryUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void PurchaseDLC();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleAvailabilityButton();
    
    UFUNCTION(BlueprintCallable)
    void OnOffersUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationPopupClosed(FUpdateNotificationData Data);
    
    UFUNCTION(BlueprintCallable)
    void OnDLCButtonPressed(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    UWidget* NavigateToOtherCategory(EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOfferValidOrOverwritten() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DLCPopupCallback(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
};

