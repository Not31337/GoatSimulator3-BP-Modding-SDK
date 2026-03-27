#pragma once
#include "CoreMinimal.h"
#include "PendingVehicleLocation.generated.h"

class AGGVehicle;

USTRUCT(BlueprintType)
struct FPendingVehicleLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* Vehicle;
    
    GOAT2_API FPendingVehicleLocation();
};

