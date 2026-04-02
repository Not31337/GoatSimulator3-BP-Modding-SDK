#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GGPunchyArmsAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GEARPACK_FUTURE_API UGGPunchyArmsAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPunching;
    
    UGGPunchyArmsAnimInstance();

};

