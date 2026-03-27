#pragma once
#include "CoreMinimal.h"
#include "LSAnimationSpeeds.generated.h"

USTRUCT(BlueprintType)
struct FLSAnimationSpeeds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Walking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Running;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Crouching;
    
    GOAT2_API FLSAnimationSpeeds();
};

