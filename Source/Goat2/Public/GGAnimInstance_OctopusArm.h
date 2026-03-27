#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GGAnimInstance_OctopusArm.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGAnimInstance_OctopusArm : public UAnimInstance {
    GENERATED_BODY()
public:
    UGGAnimInstance_OctopusArm();

    UFUNCTION(BlueprintCallable)
    void SmashEnvironment();
    
};

