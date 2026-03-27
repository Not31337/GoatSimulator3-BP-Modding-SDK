#pragma once
#include "CoreMinimal.h"
#include "EConnectionSpline.h"
#include "HardStartRoadSpline.generated.h"

class AGGRoadPathSpline;

USTRUCT(BlueprintType)
struct FHardStartRoadSpline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGRoadPathSpline* SplineActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConnectionSpline SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartPointIndex;
    
    GOAT2_API FHardStartRoadSpline();
};

