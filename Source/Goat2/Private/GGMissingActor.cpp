#include "GGMissingActor.h"
#include "Components/BoxComponent.h"

AGGMissingActor::AGGMissingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
}


