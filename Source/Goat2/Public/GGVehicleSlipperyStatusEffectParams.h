#pragma once
#include "CoreMinimal.h"
#include "GGVehicleSlipperyStatusEffectParams.generated.h"

class UTireConfig;

USTRUCT(BlueprintType)
struct GOAT2_API FGGVehicleSlipperyStatusEffectParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipperyLatStiffValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipperyLatStiffMaxLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipperyLongStiffValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTireConfig* SlipperyTireConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipperyCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedForCheck;
    
    FGGVehicleSlipperyStatusEffectParams();
};

