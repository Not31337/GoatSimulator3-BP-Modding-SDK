#pragma once
#include "CoreMinimal.h"
#include "GGVehicleBodyKitMesh.h"
#include "GGVehicleBodyKit.generated.h"

class AGGVehicle;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGVehicleBodyKit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGVehicle> VehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGVehicleBodyKitMesh> Meshes;
    
    FGGVehicleBodyKit();
};

