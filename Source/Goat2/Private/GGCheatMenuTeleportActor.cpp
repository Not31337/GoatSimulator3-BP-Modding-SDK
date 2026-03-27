#include "GGCheatMenuTeleportActor.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "GGCheatMenuTeleportComponent.h"

AGGCheatMenuTeleportActor::AGGCheatMenuTeleportActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->TeleportComponent = CreateDefaultSubobject<UGGCheatMenuTeleportComponent>(TEXT("Teleport Component"));
    this->BillboardComponent = (UBillboardComponent*)RootComponent;
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ArrowComponent->SetupAttachment(RootComponent);
}


