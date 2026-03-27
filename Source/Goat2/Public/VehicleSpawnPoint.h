#pragma once
#include "CoreMinimal.h"
#include "VehicleSpawnPoint.generated.h"

class UGGRoadSplineComponent;

USTRUCT(BlueprintType)
struct FVehicleSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRoadSplineComponent* Spline;
    
    GOAT2_API FVehicleSpawnPoint();
};

