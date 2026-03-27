#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateTypes.h"
#include "GGMenuWidgetInterface.h"
#include "GGUserWidget.h"
#include "OnMenuNavActionDelegate.h"
#include "OnWidgetInteractedDelegate.h"
#include "GGButtonUserWidget.generated.h"

class UButton;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGButtonUserWidget : public UGGUserWidget, public IGGMenuWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldToInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldInteractDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HoldAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ActiveMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* UnreadBadge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticHoverStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveMarkerIsFocusMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveOverridesFocusMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveFocusMarkerOnPress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle ButtonDefaultStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ButtonDefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ButtonDefaultBackgroundColor;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetInteracted OnWidgetStartedInteracting;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetInteracted OnWidgetStoppedInteracting;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuNavAction OnMenuNavFilterPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuNavAction OnMenuNavActionPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuNavAction OnMenuNavSelectPressed;
    
    UGGButtonUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasLastActive();
    
    UFUNCTION(BlueprintCallable)
    void SetIsActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetHovered(bool bHovered);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldToInteract(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool RequestButtonInteraction();
    
    UFUNCTION(BlueprintCallable)
    void RemoveUnreadStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetLabel(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetHovered(bool bHovered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetermineUnreadStatus(bool bUnread);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHoldToInteract();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DetermineUnreadStatus();
    

    // Fix for true pure virtual functions not being implemented
};

