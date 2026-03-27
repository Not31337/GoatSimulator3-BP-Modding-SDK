#include "GGSplineToolActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AGGSplineToolActor::AGGSplineToolActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->bShowBoundingBoxes = false;
    this->bReGenerateAfterMove = true;
    this->bReGenerateWhileDragging = false;
    this->Spline->SetupAttachment(RootComponent);
}

void AGGSplineToolActor::SetupBasicSpawner() {
}

void AGGSplineToolActor::ReGenerate() {
}

FBoxSphereBounds AGGSplineToolActor::GetSplineBounds() const {
    return FBoxSphereBounds{};
}

USplineComponent* AGGSplineToolActor::GetSpline() const {
    return NULL;
}


