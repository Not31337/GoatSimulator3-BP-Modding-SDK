#include "GGNPCEvent_WorldInteraction.h"
#include "Components/SphereComponent.h"
#include "GGCrowdSystemComponent.h"

AGGNPCEvent_WorldInteraction::AGGNPCEvent_WorldInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRemovePanickedNPCs = true;
    this->bRemoveRagdolledNPCs = true;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    this->GGCrowdSystem = CreateDefaultSubobject<UGGCrowdSystemComponent>(TEXT("GGCrowdSystem"));
    this->bAutoAddCreatedWaypoints = true;
    this->ChanceToTrigger = 30;
    this->bSkipTakenWaypoint = true;
    this->bCanEditWaypointA = true;
    this->bCanEditWaypointArrayA = true;
    this->bForceEnvironmentalsIntoCivilians = true;
    this->bHasQueue = false;
    this->QueueLength = 2;
    this->SpaceBetweenSpots = 115.00f;
    this->LengthUntilFirstSpot = 175.00f;
    this->bDebugDrawQueue = false;
    this->WaypointClass = NULL;
    this->OverlapSphere->SetupAttachment(RootComponent);
}

void AGGNPCEvent_WorldInteraction::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AGGNPCEvent_WorldInteraction::NewWaypoint() {
}



