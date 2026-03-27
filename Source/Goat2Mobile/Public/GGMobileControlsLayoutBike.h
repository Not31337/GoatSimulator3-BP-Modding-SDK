#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MenuNavigationContext.h"
#include "GGMobileControlsLayoutBase.h"
#include "GGMobileControlsLayoutBike.generated.h"

class AGGCharacter;
class AGGVehicle;
class UButton;
class UGGVirtualJoystickWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileControlsLayoutBike : public UGGMobileControlsLayoutBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* JumpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ExitButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGVirtualJoystickWidget* VirtualJoystickWidget;
    
    UGGMobileControlsLayoutBike();

private:
    UFUNCTION(BlueprintCallable)
    void OnMenuAboutToBeOpened(FGameplayTag InMenuTag, FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable)
    void OnExitVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterVehicle(const AGGVehicle* Vehicle, bool IsDriver, const AGGCharacter* Driver);
    
    UFUNCTION(BlueprintCallable)
    void JumpReleased();
    
    UFUNCTION(BlueprintCallable)
    void JumpPressed();
    
    UFUNCTION(BlueprintCallable)
    void ExitPressed();
    
};

