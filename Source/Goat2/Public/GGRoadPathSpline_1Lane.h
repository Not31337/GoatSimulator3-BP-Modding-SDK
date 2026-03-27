#pragma once
#include "CoreMinimal.h"
#include "GGRoadPathSpline.h"
#include "GGRoadPathSpline_1Lane.generated.h"

class UBillboardComponent;
class UGGRoadSplineComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGRoadPathSpline_1Lane : public AGGRoadPathSpline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRoadSplineComponent* SingleLaneSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SplineBillboard;
    
public:
    AGGRoadPathSpline_1Lane(const FObjectInitializer& ObjectInitializer);

};

