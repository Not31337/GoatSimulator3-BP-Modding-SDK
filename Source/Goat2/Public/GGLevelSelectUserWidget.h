#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Input/Events.h"
#include "Layout/Margin.h"
#include "Input/Events.h"
#include "Blueprint/UserWidget.h"
#include "DLCLevelData.h"
#include "DLCOffer.h"
#include "EPopupResponse.h"
#include "GGButtonUserWidget.h"
#include "LevelSelectExpandedDelegate.h"
#include "LevelSelectFocusedDelegate.h"
#include "GGLevelSelectUserWidget.generated.h"

class UGGDLCMoreInfoButtonUserWidget;
class UGGLevelSelectMenuTabUserWidget;
class UGGLevelSelectSaveUserWidget;
class UGGUserWidget;
class UImage;
class UObject;
class UOverlay;
class UTextBlock;
class UVerticalBox;
class UWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGLevelSelectUserWidget : public UGGButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGLevelSelectMenuTabUserWidget* LevelSelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialStateAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TargetOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TargetOffsetsMore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCLevelData LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCOffer DLCOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGLevelSelectSaveUserWidget*> LevelSelectSaveButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LevelNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LevelBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LevelLockIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* LevelSelectPurchaseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDLCMoreInfoButtonUserWidget* LevelSelectMoreInfoButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcherOwning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBoxOwnedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_NotOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBoxNonOwnedOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayNotOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayAllShouldHaveDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AllShouldHaveDLCLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NewDLCLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGLevelSelectSaveUserWidget* LevelSelectSaveButton0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGLevelSelectSaveUserWidget* LevelSelectSaveButton1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGLevelSelectSaveUserWidget* LevelSelectSaveButton2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowNonOwnedOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ScaleDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ScaleDownMore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelSelectExpanded OnLevelSelectExpanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelSelectFocused OnLevelSelectFocused;
    
    UGGLevelSelectUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayScaleUpAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayScaleDownAnimation(float InStartTime, float InEndTime, TEnumAsByte<EUMGSequencePlayMode::Type> InPlayMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnsDLC();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOffersUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSelectPurchaseButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSelectMoreInfoButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSaveDeleteRequested(UGGLevelSelectSaveUserWidget* InLevelSelectSaveWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSaveButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelFocused(UGGButtonUserWidget* FocusedLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnDLCsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnDLCNotOwnedResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void OnDLCAvailabilityUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteSavePopupCallback(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelSelectAnimationPlaying();
    
    UFUNCTION(BlueprintCallable)
    void InitializeLevelWidget(FDLCLevelData InLevelData, UGGLevelSelectMenuTabUserWidget* InLevelSelectMenu);
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* HandleOwnedButtonsNavigation(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    UWidget* HandleNonOwnedButtonsNavigation(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMargin GetCurrentTargetOffsets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetAnimation* GetCurrentScalingAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetButtonsVisible();
    
    UFUNCTION(BlueprintCallable)
    void ForceExpand();
    
public:
    UFUNCTION(BlueprintCallable)
    void FocusLevelSelect();
    
    UFUNCTION(BlueprintCallable)
    void ExpandLevelSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesEveryoneOwnDLC();
    
    UFUNCTION(BlueprintCallable)
    void DeleteSelectedSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLocalOwnership();
    
};

