#pragma once
#include "CoreMinimal.h"
#include "EVehicleCrashType.h"
#include "VehicleCrashSound.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FVehicleCrashSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleCrashType CrashType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinImpactSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound;
    
    GOAT2_API FVehicleCrashSound();
};

