#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VehicleAreaSpawners.generated.h"

class AGGVehicleSpawner;

USTRUCT(BlueprintType)
struct FVehicleAreaSpawners {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGVehicleSpawner*> IdleVehicleSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGVehicleSpawner*> ImportantIdleVehicleSpawners;
    
    GOAT2_API FVehicleAreaSpawners();
};

