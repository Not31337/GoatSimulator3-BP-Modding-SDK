#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ImpactParticleRange.h"
#include "VehicleCrashSound.h"
#include "PActorImpactSettings.generated.h"

USTRUCT(BlueprintType)
struct FPActorImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ValidPActorSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImpactParticleRange> ImpactParticleRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleCrashSound> VehicleCrashSounds;
    
    GOAT2_API FPActorImpactSettings();
};

