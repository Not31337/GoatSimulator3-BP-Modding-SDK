#pragma once
#include "CoreMinimal.h"
#include "LSTurnAnims.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FLSTurnAnims {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TurnLeftAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TurnRightAnim;
    
    GOAT2_API FLSTurnAnims();
};

