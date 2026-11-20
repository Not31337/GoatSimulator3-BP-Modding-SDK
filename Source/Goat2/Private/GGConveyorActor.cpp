#include "GGConveyorActor.h"
#include "GGConveyorComponent.h"
#include "GGPhysicalConveyorComponent.h"
#include "GGPhysicalConveyorReverseComponent.h"

AGGConveyorActor::AGGConveyorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGGConveyorComponent>(TEXT("ConveyorComponent"));
    this->ConveyorComponent = (UGGConveyorComponent*)RootComponent;
    this->PhysicalConveyorComponent = CreateDefaultSubobject<UGGPhysicalConveyorComponent>(TEXT("Physical Conveyor Component"));
    this->ConveyorReverseComponent = CreateDefaultSubobject<UGGPhysicalConveyorReverseComponent>(TEXT("Physical Conveyor Reverse Component"));
    this->PhysicalConveyorComponent->SetupAttachment(RootComponent);
}


