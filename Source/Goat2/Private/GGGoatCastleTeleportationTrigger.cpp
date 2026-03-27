#include "GGGoatCastleTeleportationTrigger.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AGGGoatCastleTeleportationTrigger::AGGGoatCastleTeleportationTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->TeleportArea = NULL;
    this->FoundLockedSGWidgetDuration = 15.00f;
    this->FoundLockedSGTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Found Locked SG Trigger"));
    this->bDebug = false;
    this->FoundLockedSGTrigger->SetupAttachment(RootComponent);
}

void AGGGoatCastleTeleportationTrigger::HandleLockedSGOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIdex, bool bFromSweep, const FHitResult& SweepResult) {
}


