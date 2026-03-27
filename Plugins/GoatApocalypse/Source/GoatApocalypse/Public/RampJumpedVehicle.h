#pragma once
#include "CoreMinimal.h"
#include "RampJumpedVehicle.generated.h"

class AGGVehicle;

USTRUCT(BlueprintType)
struct FRampJumpedVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RampTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWentAirborne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirborneTimestamp;
    
    GOATAPOCALYPSE_API FRampJumpedVehicle();
};

