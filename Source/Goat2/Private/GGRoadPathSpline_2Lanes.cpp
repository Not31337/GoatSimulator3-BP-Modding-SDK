#include "GGRoadPathSpline_2Lanes.h"
#include "GGRoadSplineComponent.h"

AGGRoadPathSpline_2Lanes::AGGRoadPathSpline_2Lanes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGGRoadSplineComponent>(TEXT("Lane Manager Spline"));
    this->RoadSplines.AddDefaulted(2);
    this->RoadSplinesIncludingManager.AddDefaulted(3);
    this->LaneManagerSpline = (UGGRoadSplineComponent*)RootComponent;
    this->RightLaneSpline = CreateDefaultSubobject<UGGRoadSplineComponent>(TEXT("Right Lane Spline"));
    this->LeftLaneSpline = CreateDefaultSubobject<UGGRoadSplineComponent>(TEXT("Left Lane Spline"));
    this->SplineBillboard = NULL;
    this->DefaultRoadWidth = 400.00f;
    this->LeftLaneSpline->SetupAttachment(RootComponent);
    this->RightLaneSpline->SetupAttachment(RootComponent);
}


