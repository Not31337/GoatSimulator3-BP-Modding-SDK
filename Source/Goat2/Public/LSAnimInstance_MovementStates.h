#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Engine/EngineTypes.h"
#include "LSAnimInstanceProxy_MovementStates.h"
#include "LSAnimationSpeeds.h"
#include "LSAnimInstance_MovementStates.generated.h"

class AGGCharacter;
class AGGGoat;
class AGGVehicle;
class APawn;
class UBlendSpace;
class ULSAnimationCollection;
class ULSCharacterMovementComponent;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API ULSAnimInstance_MovementStates : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULSAnimationCollection* MovementStatesAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConstantInterpSpeedForUnderWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderWaterPitchRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderWaterToHorizontalRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSAnimationSpeeds AnimSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VisualDebugStringOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor VisualDebugStringColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLSAnimInstanceProxy_MovementStates Proxy;
    
public:
    ULSAnimInstance_MovementStates();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMovementSpeedsChanged(ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMode, TEnumAsByte<EMovementMode> PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnExitVehicleIsh(AGGGoat* Goat, APawn* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnExitingVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterVehicleIsh(AGGGoat* Goat, APawn* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlendSpace* GetFlyingBlendSpace() const;
    
};

