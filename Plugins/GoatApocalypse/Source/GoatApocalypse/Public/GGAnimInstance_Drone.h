#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EDroneState.h"
#include "GGAnimInstance_Drone.generated.h"

class AGGCameraDrone;

UCLASS(Blueprintable, NonTransient)
class GOATAPOCALYPSE_API UGGAnimInstance_Drone : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDroneState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCameraDrone* Drone;
    
public:
    UGGAnimInstance_Drone();

};

