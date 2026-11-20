#include "GGMovingActorSpline_Prototype.h"
#include "Components/SplineComponent.h"

AGGMovingActorSpline_Prototype::AGGMovingActorSpline_Prototype(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->Spline = (USplineComponent*)RootComponent;
    this->SplineMesh = NULL;
    this->MeshScale = 1.00f;
}

void AGGMovingActorSpline_Prototype::UpdateSplineMeshes() {
}


