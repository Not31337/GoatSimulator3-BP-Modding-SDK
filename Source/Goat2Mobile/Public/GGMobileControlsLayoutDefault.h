#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "MenuNavigationContext.h"
#include "RagdollStateChangeSettings.h"
#include "Styling/SlateTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "GGMobileControlsLayoutBase.h"
#include "Templates/SubclassOf.h"
#include "GGMobileControlsLayoutDefault.generated.h"

class AActor;
class ACharacter;
class AGGCharacter;
class AGGGoat;
class AGGIntro;
class AGGVehicle;
class UButton;
class UGGIntroComponent;
class UGGMobileControlsUserWidget;
class UGGVirtualJoystickWidget;
class UImage;
class ULSCharacterMovementComponent;
class UObject;
class UScaleBox;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileControlsLayoutDefault : public UGGMobileControlsLayoutBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBoxContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* JumpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* HeadbuttButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* RagdollButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* AbilityButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* LickButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* TrickToggleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* PassengerSeatButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* InteractButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGVirtualJoystickWidget* VirtualJoystickWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* SkipIntroButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* JumpTutorialOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LickTutorialOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HeadbuttTutorialOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GrindButtonEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle InteractDefaultStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle InteractVehicleStyle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle JumpButtonDefaultStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle JumpButtonGrindStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle TrickToggleButtonDisabledStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle TrickToggleButtonEnabledStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle BikeInteractButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle PassengerButtonDefaultStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle BikePassengerButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DamItCannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGGoat* ControlledGoat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGIntroComponent* PCIntroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGMobileControlsUserWidget* BaseUserWidget;
    
public:
    UGGMobileControlsLayoutDefault();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTargetInteractable(UObject* Interactable);
    
private:
    UFUNCTION(BlueprintCallable)
    void TrickTogglePressed();
    
    UFUNCTION(BlueprintCallable)
    void ToggleGoatEggVisibility(bool bEnteredEgg);
    
    UFUNCTION(BlueprintCallable)
    void PassengerSeatPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleCinematicUIVisibility(bool bVisibility);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSkipButtonTriggered();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRagdollEnabled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnMenuAboutToBeOpened(FGameplayTag InMenuTag, FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable)
    void OnIntroFinished(AGGIntro* Intro);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractButtonUpdatedVisibility(ESlateVisibility NewVisibility) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGoatReleased(AActor* CatchedActor, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatGearChanged(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterVehicle(const AGGVehicle* Vehicle, bool IsDriver, const AGGCharacter* Driver);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterTeleported(AGGCharacter* Character, const FTransform& OldTransform);
    
    UFUNCTION(BlueprintCallable)
    void JumpReleased();
    
protected:
    UFUNCTION(BlueprintCallable)
    void JumpPressed();
    
private:
    UFUNCTION(BlueprintCallable)
    void InteractReleased();
    
    UFUNCTION(BlueprintCallable)
    void InteractPressed();
    
    UFUNCTION(BlueprintCallable)
    void HeadbuttUp();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Headbutt();
    
    UFUNCTION(BlueprintCallable)
    void AbilityDown();
    
};

