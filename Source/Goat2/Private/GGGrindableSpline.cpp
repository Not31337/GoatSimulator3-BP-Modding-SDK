#include "GGGrindableSpline.h"
#include "Components/SceneComponent.h"

AGGGrindableSpline::AGGGrindableSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->bShouldUpdateSplineInConstruction = true;
    this->OverriddenSplineMeshMaterial = NULL;
    this->SplineScale = 1.00f;
    this->GrindSplineDrawDistance = -1.00f;
    this->bGrindSplineCastShadow = true;
    this->SplineMeshForwardAxis = ESplineMeshAxis::X;
    this->CurveTangent = 400.00f;
    this->bSpawnObstaclesOnAllConnections = false;
    this->NumberOfObstaclesToSpawn = 3;
}

void AGGGrindableSpline::SpawnObstacles() {
}

void AGGGrindableSpline::ClearObstacles() {
}


