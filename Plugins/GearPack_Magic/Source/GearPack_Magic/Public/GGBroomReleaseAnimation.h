#pragma once
#include "CoreMinimal.h"
#include "GGBroomReleaseAnimation.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct GEARPACK_MAGIC_API FGGBroomReleaseAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* LocationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RotationOffset;
    
    FGGBroomReleaseAnimation();
};

