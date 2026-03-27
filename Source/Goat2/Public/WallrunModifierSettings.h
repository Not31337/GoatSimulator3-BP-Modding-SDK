#pragma once
#include "CoreMinimal.h"
#include "WallrunModifierSettings.generated.h"

USTRUCT(BlueprintType)
struct FWallrunModifierSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZeroGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelerationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedMultiplier;
    
    GOAT2_API FWallrunModifierSettings();
};

