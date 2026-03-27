#pragma once
#include "CoreMinimal.h"
#include "GGWheelConfig.generated.h"

class UTireConfig;

USTRUCT(BlueprintType)
struct GOAT2_API FGGWheelConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTireConfig* TireConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LatStiffValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LatStiffMaxLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongStiffValue;
    
    FGGWheelConfig();
};

