#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoadPathQueryResult.generated.h"

class AGGRoadPathSpline;
class UGGRoadSplineComponent;

USTRUCT(BlueprintType)
struct GOAT2_API FRoadPathQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClosestPointOnSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRoadSplineComponent* ClosestSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGRoadPathSpline* RoadPathSpline;
    
    FRoadPathQueryResult();
};

