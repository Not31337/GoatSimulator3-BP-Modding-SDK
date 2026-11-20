#include "GGNPCEvent_GiantMountainDude.h"
#include "Components/SphereComponent.h"
#include "EEventType.h"

AGGNPCEvent_GiantMountainDude::AGGNPCEvent_GiantMountainDude(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventType = EEventType::ET_Dynamic;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    this->ChanceToTrigger = 100;
    this->GiantMountainDudeNPC = NULL;
    this->OverlapSphere->SetupAttachment(RootComponent);
}

void AGGNPCEvent_GiantMountainDude::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AGGNPC* AGGNPCEvent_GiantMountainDude::GetGiantMountainDude() const {
    return NULL;
}


