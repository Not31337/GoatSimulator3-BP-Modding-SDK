#include "GGNPCTargetLocation.h"
#include "Components/SceneComponent.h"

AGGNPCTargetLocation::AGGNPCTargetLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->LocationWeight = 1;
}


