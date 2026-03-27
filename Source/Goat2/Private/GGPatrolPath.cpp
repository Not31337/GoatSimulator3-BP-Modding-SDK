#include "GGPatrolPath.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AGGPatrolPath::AGGPatrolPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->Spline->SetupAttachment(RootComponent);
}


