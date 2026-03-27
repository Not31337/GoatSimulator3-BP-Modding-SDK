#pragma once
#include "CoreMinimal.h"
#include "GGVehicleSlipperyStatusEffectState.generated.h"

class UTireConfig;

USTRUCT(BlueprintType)
struct GOAT2_API FGGVehicleSlipperyStatusEffectState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTireConfig*> NormalTireConfigs;
    
    FGGVehicleSlipperyStatusEffectState();
};

