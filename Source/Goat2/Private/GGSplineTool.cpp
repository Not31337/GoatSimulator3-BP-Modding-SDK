#include "GGSplineTool.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AGGSplineTool::AGGSplineTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bAutomaticallyGenerateMeshes = true;
    this->bSnapToGround = true;
    this->TraceDistance = 200.00f;
    this->TraceChannel = ECC_Visibility;
    this->bTraceOnlyAgainstLandscape = false;
    this->SnapMode = EGGSplineMeshSnapMode::BoundsBottom;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->Spline->SetupAttachment(RootComponent);
}

void AGGSplineTool::SnapSplinePointsToGround() {
}

void AGGSplineTool::ReGenerateMeshes() {
}

void AGGSplineTool::ForceReGenerateMeshes() {
}

void AGGSplineTool::DestroySplineMeshes() {
}

void AGGSplineTool::AlignMeshesWithSpline() {
}


