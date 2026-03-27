#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGVehicleTorqueControlConfig.h"
#include "GGVehicleTorqueControlConfig_DataAsset.generated.h"

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGVehicleTorqueControlConfig_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGVehicleTorqueControlConfig Config;
    
    UGGVehicleTorqueControlConfig_DataAsset();

};

