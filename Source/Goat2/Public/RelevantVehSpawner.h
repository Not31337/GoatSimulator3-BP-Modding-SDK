#pragma once
#include "CoreMinimal.h"
#include "RelevantVehSpawner.generated.h"

class AGGVehicle;
class AGGVehicleSpawner;

USTRUCT(BlueprintType)
struct FRelevantVehSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicleSpawner* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGVehicle> VehicleClassSoft;
    
    GOAT2_API FRelevantVehSpawner();
};

