#pragma once
#include "CoreMinimal.h"
#include "VehicleMaterialCollection.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FVehicleMaterialCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    
    GOAT2_API FVehicleMaterialCollection();
};

