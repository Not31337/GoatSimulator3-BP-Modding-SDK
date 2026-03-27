#pragma once
#include "CoreMinimal.h"
#include "GGVehicleTorqueControlConfig.generated.h"

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGVehicleTorqueControlConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationDamping;
    
    FGGVehicleTorqueControlConfig();
};

