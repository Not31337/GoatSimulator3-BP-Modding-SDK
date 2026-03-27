#pragma once
#include "CoreMinimal.h"
#include "TeleportData.generated.h"

class AGGVehicle;

USTRUCT(BlueprintType)
struct FTeleportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* Vehicle;
    
    GOAT2_API FTeleportData();
};

