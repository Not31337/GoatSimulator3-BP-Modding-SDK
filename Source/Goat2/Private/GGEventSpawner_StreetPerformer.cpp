#include "GGEventSpawner_StreetPerformer.h"
#include "Components/SceneComponent.h"

AGGEventSpawner_StreetPerformer::AGGEventSpawner_StreetPerformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerformerLocationComp = CreateDefaultSubobject<USceneComponent>(TEXT("Performer Location Comp"));
    this->PerformerLocationComp->SetupAttachment(RootComponent);
}


