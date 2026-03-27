#pragma once
#include "CoreMinimal.h"
#include "RecentVehicle.generated.h"

class AGGVehicle;

USTRUCT(BlueprintType)
struct FRecentVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    GOAT2_API FRecentVehicle();
};

