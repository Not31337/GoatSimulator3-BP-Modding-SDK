#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActiveVehicleAreaContainer.generated.h"

class AGGVehicle;

USTRUCT(BlueprintType)
struct FActiveVehicleAreaContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGVehicle*> ActiveIdleVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGVehicle*> ActiveDrivenVehicles;
    
    GOAT2_API FActiveVehicleAreaContainer();
};

