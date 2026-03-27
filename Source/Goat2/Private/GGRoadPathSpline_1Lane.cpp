#include "GGRoadPathSpline_1Lane.h"
#include "GGRoadSplineComponent.h"

AGGRoadPathSpline_1Lane::AGGRoadPathSpline_1Lane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGGRoadSplineComponent>(TEXT("Single Lane Spline"));
    this->RoadSplines.AddDefaulted(1);
    this->RoadSplinesIncludingManager.AddDefaulted(1);
    this->SingleLaneSpline = (UGGRoadSplineComponent*)RootComponent;
    this->SplineBillboard = NULL;
}


