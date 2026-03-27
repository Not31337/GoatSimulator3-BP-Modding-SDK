#pragma once
#include "CoreMinimal.h"
#include "LSGaitsFloat.generated.h"

USTRUCT(BlueprintType)
struct FLSGaitsFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Walking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Running;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sprinting;
    
    GOAT2_API FLSGaitsFloat();
};

