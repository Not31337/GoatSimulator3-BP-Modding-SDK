#pragma once
#include "CoreMinimal.h"
#include "GGPIDConfig.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGPIDConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProportionalTuning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntegralTuning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DerivativeTuning;
    
    FGGPIDConfig();
};

