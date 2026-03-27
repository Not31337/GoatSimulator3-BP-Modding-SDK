#include "GGNPCEvent_SocializingPoint.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "EEventDeactivation.h"

AGGNPCEvent_SocializingPoint::AGGNPCEvent_SocializingPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventDeactivation = EEventDeactivation::ED_DisablePastRelevant;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    this->QueueStartLoc = CreateDefaultSubobject<USceneComponent>(TEXT("Queue Start Location"));
    this->QueueEndLookLoc = CreateDefaultSubobject<USceneComponent>(TEXT("Queue End Look Location"));
    this->ChanceToTrigger = 30;
    this->QueueSpotAmount = 3;
    this->SpaceBetweenSpots = 100.00f;
    this->LengthUntilFirstSpot = 100.00f;
    this->QueueDirection = ESocialQueueDirections::SQD_Forward;
    this->DrawQueueInGame = false;
    this->OverlapSphere->SetupAttachment(RootComponent);
    this->QueueEndLookLoc->SetupAttachment(RootComponent);
    this->QueueStartLoc->SetupAttachment(RootComponent);
}

void AGGNPCEvent_SocializingPoint::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



