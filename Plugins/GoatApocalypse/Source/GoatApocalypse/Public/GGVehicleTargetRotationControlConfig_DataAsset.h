#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGVehicleTargetRotationControlConfig.h"
#include "GGVehicleTargetRotationControlConfig_DataAsset.generated.h"

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGVehicleTargetRotationControlConfig_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGVehicleTargetRotationControlConfig Config;
    
    UGGVehicleTargetRotationControlConfig_DataAsset();

};

