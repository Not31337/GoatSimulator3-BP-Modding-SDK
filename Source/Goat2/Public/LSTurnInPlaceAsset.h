#pragma once
#include "CoreMinimal.h"
#include "LSTurnInPlaceAsset.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FLSTurnInPlaceAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimatedAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanScaleTurnAngle;
    
    GOAT2_API FLSTurnInPlaceAsset();
};

