#pragma once
#include "CoreMinimal.h"
#include "GGMobileControlsLayoutBase.h"
#include "GGMobileControlsLayoutUFO.generated.h"

class UButton;
class UGGVirtualJoystickWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileControlsLayoutUFO : public UGGMobileControlsLayoutBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* UFOEjectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* UFOUpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* UFODownButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* UFOShootButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* UFOBeamButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGVirtualJoystickWidget* VirtualJoystickWidget;
    
    UGGMobileControlsLayoutUFO();

private:
    UFUNCTION(BlueprintCallable)
    void UpButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void ShootButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void MovementButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void EjectButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void DownButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void BeamButtonPressed();
    
};

