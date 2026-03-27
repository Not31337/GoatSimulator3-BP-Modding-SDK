#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VehicleAnimInstance.h"
#include "GGHelicopterAnimInstance.generated.h"

class AGGVehicle_Helicopter;

UCLASS(Blueprintable, NonTransient)
class GOATAPOCALYPSE_API UGGHelicopterAnimInstance : public UVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationPlaySpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleAnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator BladeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BladeRotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimationPlaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGVehicle_Helicopter* Helicopter;
    
    UGGHelicopterAnimInstance();

};

