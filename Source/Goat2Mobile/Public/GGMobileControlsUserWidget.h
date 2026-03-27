#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ELoadingScreenType.h"
#include "ERemovalReason.h"
#include "Notification.h"
#include "Blueprint/UserWidget.h"
#include "GGMobileControlsUserWidget.generated.h"

class AGGCharacter;
class AGGGoat;
class AGGIntro;
class AGGPlayerController;
class AGGVehicle;
class UButton;
class UGGIntroComponent;
class UGGMobileContextualTouchWidget;
class UGGMobileControlsLayoutBike;
class UGGMobileControlsLayoutBrowsing;
class UGGMobileControlsLayoutDefault;
class UGGMobileControlsLayoutUFO;
class UGGMobileControlsLayoutVehicle;
class UGGMobileQuickCommandsUI;
class UGGNotificationUserWidget;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileControlsUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CheatMenuButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMobileControlsLayoutDefault* DefaultControlsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMobileControlsLayoutVehicle* VehicleControlsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMobileControlsLayoutUFO* UFOControlsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMobileControlsLayoutBike* BikeControlsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMobileContextualTouchWidget* ContextualTouchWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMobileControlsLayoutBrowsing* BrowsingControlsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMobileQuickCommandsUI* QuickCommandsWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGIntroComponent* PCIntroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NotificationTutorialButtonsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CheatMenuRequestTag;
    
public:
    UGGMobileControlsUserWidget();

private:
    UFUNCTION(BlueprintCallable)
    void ResetUI(AGGGoat* OldGoat, AGGGoat* NewGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnStoppedBrowsing();
    
    UFUNCTION(BlueprintCallable)
    void OnStartedBrowsing(const FText BrowsingText);
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationRemovedFromWidget(const FNotification& Notification, UGGNotificationUserWidget* NotificationWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMenuExited(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMenuEntered(UUserWidget* Widget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenRemoved(AGGPlayerController* Controller, ELoadingScreenType Type, ERemovalReason RemovalReason);
    
    UFUNCTION(BlueprintCallable)
    void OnIntroFinished(AGGIntro* Intro);
    
    UFUNCTION(BlueprintCallable)
    void OnExitVehicle() const;
    
    UFUNCTION(BlueprintCallable)
    void OnExitUFO();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterVehicle(const AGGVehicle* Vehicle, bool IsDriver, const AGGCharacter* Driver);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterUFO();
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicUpdated(bool bCinematicFinished);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UImage* GetImageMatchingActionInput(const FName& ActionInput) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CheatMenuButtonPressed();
    
};

