#include "GGNPCEvent_Mascot.h"
#include "Components/SphereComponent.h"
#include "EEventType.h"

AGGNPCEvent_Mascot::AGGNPCEvent_Mascot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventType = EEventType::ET_Dynamic;
    this->ChanceToTrigger = 100;
    this->MascotNPC = NULL;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    this->OverlapSphere->SetupAttachment(RootComponent);
}

void AGGNPCEvent_Mascot::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AGGNPC* AGGNPCEvent_Mascot::GetMascot() const {
    return NULL;
}


