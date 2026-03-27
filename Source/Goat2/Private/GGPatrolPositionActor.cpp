#include "GGPatrolPositionActor.h"
#include "Components/SceneComponent.h"

AGGPatrolPositionActor::AGGPatrolPositionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
}


