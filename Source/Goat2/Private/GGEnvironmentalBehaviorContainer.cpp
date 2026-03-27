#include "GGEnvironmentalBehaviorContainer.h"
#include "Components/SceneComponent.h"

AGGEnvironmentalBehaviorContainer::AGGEnvironmentalBehaviorContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->OwnerNPC = NULL;
    this->Radius = 0.00f;
    this->Duration = 0.00f;
    this->DurationDeviation = 0.00f;
    this->bInOrder = false;
    this->bSkipTakenWaypoint = false;
    this->ClaimedWaypoint = NULL;
}


