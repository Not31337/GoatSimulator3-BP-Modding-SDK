#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGMobileControlsLayoutBase.h"
#include "GGMobileControlsLayoutVehicle.generated.h"

class AGGCharacter;
class AGGGoat;
class AGGVehicle;
class UButton;
class UGGMobileControlsUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileControlsLayoutVehicle : public UGGMobileControlsLayoutBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* GasButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ReverseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* BoostButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* AbilityButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ExitVehicleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PassengerBoostButtonLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* CurrentVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGMobileControlsUserWidget* BaseUserWidget;
    
public:
    UGGMobileControlsLayoutVehicle();

private:
    UFUNCTION(BlueprintCallable)
    void ReverseReleased();
    
    UFUNCTION(BlueprintCallable)
    void ReversePressed();
    
    UFUNCTION(BlueprintCallable)
    void ReBindEnterAndExitVehicleDelegates(AGGGoat* OldGoat, AGGGoat* NewGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleCinematicUIVisibility(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OnExitVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void GasReleased();
    
    UFUNCTION(BlueprintCallable)
    void GasPressed();
    
    UFUNCTION(BlueprintCallable)
    void ExitVehiclePressed();
    
};

