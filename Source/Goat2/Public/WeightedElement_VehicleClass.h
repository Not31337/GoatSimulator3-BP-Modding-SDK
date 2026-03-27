#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_VehicleClass.generated.h"

class AGGVehicle;

USTRUCT(BlueprintType)
struct FWeightedElement_VehicleClass : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGVehicle> VehicleClass;
    
    GOAT2_API FWeightedElement_VehicleClass();
};

