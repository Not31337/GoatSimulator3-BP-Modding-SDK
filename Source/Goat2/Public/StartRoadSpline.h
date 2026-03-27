#pragma once
#include "CoreMinimal.h"
#include "EConnectionSpline.h"
#include "StartRoadSpline.generated.h"

class AGGRoadPathSpline;

USTRUCT(BlueprintType)
struct FStartRoadSpline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGGRoadPathSpline> SplineActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConnectionSpline SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartPointIndex;
    
    GOAT2_API FStartRoadSpline();
};

