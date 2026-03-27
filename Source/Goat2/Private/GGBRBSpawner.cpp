#include "GGBRBSpawner.h"
#include "Components/BoxComponent.h"

AGGBRBSpawner::AGGBRBSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnArea"));
    this->SpawnArea = (UBoxComponent*)RootComponent;
}


