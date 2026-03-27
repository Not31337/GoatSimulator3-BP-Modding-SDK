#pragma once
#include "CoreMinimal.h"
#include "VehicleHandling.generated.h"

USTRUCT(BlueprintType)
struct FVehicleHandling {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMaxRPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNPCControlled;
    
    GOAT2_API FVehicleHandling();
};

