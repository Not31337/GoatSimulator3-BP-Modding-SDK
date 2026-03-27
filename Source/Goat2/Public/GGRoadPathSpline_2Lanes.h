#pragma once
#include "CoreMinimal.h"
#include "GGRoadPathSpline.h"
#include "GGRoadPathSpline_2Lanes.generated.h"

class UBillboardComponent;
class UGGRoadSplineComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGRoadPathSpline_2Lanes : public AGGRoadPathSpline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRoadSplineComponent* LaneManagerSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRoadSplineComponent* RightLaneSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRoadSplineComponent* LeftLaneSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SplineBillboard;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRoadWidth;
    
    AGGRoadPathSpline_2Lanes(const FObjectInitializer& ObjectInitializer);

};

