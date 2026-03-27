#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Blueprint/UserWidget.h"
#include "OnWidgetAddedToFocusPathDelegate.h"
#include "OnWidgetDoubleClickedDelegate.h"
#include "OnWidgetHoveredDelegate.h"
#include "OnWidgetInteractedDelegate.h"
#include "OnWidgetRemovedFromFocusPathDelegate.h"
#include "OnWidgetToggledDelegate.h"
#include "GGUserWidget.generated.h"

class AGGGoat;
class AGGPlayerController;
class UGGLocalPlayer;
class UGGMenuComponent;
class UGGMenuUserWidget;
class UGGRichTextBlock;
class UGGUserWidget;
class UTextBlock;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WidgetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFocusMarkerOnHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFocusMarkerOnFocusMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusOnHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileScaleMultiplierNative;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetInteracted OnWidgetInteracted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetHovered OnWidgetHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetHovered OnWidgetUnhovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetDoubleClicked OnWidgetDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetToggled OnWidgetToggled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetAddedToFocusPath OnWidgetAddedToFocusPath;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetRemovedFromFocusPath OnWidgetRemovedFromFocusPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReturnActionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExitActionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InteractActionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* FocusMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* RichLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeShowAnimInTotalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SuppressedValidations;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawningContainerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawningNotificationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> NotificationWidgetParent;
    
public:
    UGGUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetLabelText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFocusToWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEffectSource(FGameplayTag InEffectTag, FGameplayTag InSourceTag, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void PreConstructMobile(bool IsDesignTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIsEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusMarkerEnabled(bool bEnabled, bool bPrevious);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuPathInteractable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGMenuUserWidget* GetTopMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoat* GetOwningGGPlayerPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerController* GetOwningGGPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGLocalPlayer* GetOwningGGLocalPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGMenuUserWidget* GetNearestMenuParent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UWidget* GetInitialWidgetFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGMenuComponent* GetGGMenuComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnWidgetInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
};

