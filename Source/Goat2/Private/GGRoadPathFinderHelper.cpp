#include "GGRoadPathFinderHelper.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AGGRoadPathFinderHelper::AGGRoadPathFinderHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Start = CreateDefaultSubobject<USceneComponent>(TEXT("Start"));
    this->Target = CreateDefaultSubobject<USceneComponent>(TEXT("Target"));
    this->Route = CreateDefaultSubobject<USplineComponent>(TEXT("Route"));
    this->Route->SetupAttachment(RootComponent);
    this->Start->SetupAttachment(RootComponent);
    this->Target->SetupAttachment(RootComponent);
}

void AGGRoadPathFinderHelper::CalculateRoadPath() const {
}


