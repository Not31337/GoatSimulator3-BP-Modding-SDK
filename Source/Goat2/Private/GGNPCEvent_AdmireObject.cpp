#include "GGNPCEvent_AdmireObject.h"
#include "Components/SphereComponent.h"
#include "EEventDeactivation.h"

AGGNPCEvent_AdmireObject::AGGNPCEvent_AdmireObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventDeactivation = EEventDeactivation::ED_DisablePastRelevant;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    this->ChanceToTrigger = 30;
    this->OverlapSphere->SetupAttachment(RootComponent);
}

void AGGNPCEvent_AdmireObject::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


