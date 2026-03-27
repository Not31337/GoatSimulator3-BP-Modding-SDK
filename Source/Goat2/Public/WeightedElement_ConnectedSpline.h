#pragma once
#include "CoreMinimal.h"
#include "EConnectionSpline.h"
#include "WeightedElement.h"
#include "WeightedElement_ConnectedSpline.generated.h"

class AGGRoadPathSpline;

USTRUCT(BlueprintType)
struct FWeightedElement_ConnectedSpline : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGGRoadPathSpline> SplineActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConnectionSpline SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConnectingPointIndex;
    
    GOAT2_API FWeightedElement_ConnectedSpline();
};

