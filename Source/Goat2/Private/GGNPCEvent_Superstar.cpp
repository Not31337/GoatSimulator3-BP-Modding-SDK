#include "GGNPCEvent_Superstar.h"
#include "Components/SphereComponent.h"
#include "EEventType.h"

AGGNPCEvent_Superstar::AGGNPCEvent_Superstar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventType = EEventType::ET_Dynamic;
    this->ChanceToTrigger = 100;
    this->SuperstarNPC = NULL;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    this->OverlapSphere->SetupAttachment(RootComponent);
}

void AGGNPCEvent_Superstar::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AGGNPC* AGGNPCEvent_Superstar::GetSuperstar() const {
    return NULL;
}


