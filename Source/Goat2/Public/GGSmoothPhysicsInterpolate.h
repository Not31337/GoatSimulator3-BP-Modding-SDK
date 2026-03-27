#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGSmoothPhysicsInterpolate.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGSmoothPhysicsInterpolate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ServerAngularVelocity;
    
    FGGSmoothPhysicsInterpolate();
};

