#include "GGPaperboyDropOffPoint.h"
#include "Components/SceneComponent.h"

AGGPaperboyDropOffPoint::AGGPaperboyDropOffPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root Component"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->PaperboyPointCooldown = 30.00f;
}

void AGGPaperboyDropOffPoint::WasUsedByPaperboy(AGGNPC* UsedByNPC) {
}

bool AGGPaperboyDropOffPoint::Interact_Implementation(AActor* SourceActor, float HeldFor) {
    return false;
}

bool AGGPaperboyDropOffPoint::CanPointBeUsedBy(AGGNPC* NPC) {
    return false;
}

bool AGGPaperboyDropOffPoint::CanBeInteractedWith_Implementation(AActor* SourceActor) {
    return false;
}


