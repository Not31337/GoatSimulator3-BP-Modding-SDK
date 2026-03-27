#pragma once
#include "CoreMinimal.h"
#include "GGFlyingCollisionAvoidance.generated.h"

USTRUCT(BlueprintType)
struct GEARPACK_MAGIC_API FGGFlyingCollisionAvoidance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    FGGFlyingCollisionAvoidance();
};

