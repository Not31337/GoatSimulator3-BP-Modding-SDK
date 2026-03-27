#pragma once
#include "CoreMinimal.h"
#include "GGForwardSpline.generated.h"

class UGGGrindableSplineComponent;

USTRUCT(BlueprintType)
struct GOAT2_API FGGForwardSpline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGrindableSplineComponent* Spline;
    
    FGGForwardSpline();
};

