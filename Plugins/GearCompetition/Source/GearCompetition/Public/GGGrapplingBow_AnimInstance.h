#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GGGrapplingBow_AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GEARCOMPETITION_API UGGGrapplingBow_AnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrapplingBowReeling;
    
    UGGGrapplingBow_AnimInstance();

};

