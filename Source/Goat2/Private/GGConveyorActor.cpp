#include "GGConveyorActor.h"
#include "GGConveyorComponent.h"

AGGConveyorActor::AGGConveyorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGGConveyorComponent>(TEXT("ConveyorComponent"));
    this->ConveyorComponent = (UGGConveyorComponent*)RootComponent;
}


