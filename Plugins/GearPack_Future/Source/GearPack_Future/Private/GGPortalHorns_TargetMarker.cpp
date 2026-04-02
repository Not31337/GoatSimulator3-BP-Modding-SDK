#include "GGPortalHorns_TargetMarker.h"
#include "Particles/ParticleSystemComponent.h"

AGGPortalHorns_TargetMarker::AGGPortalHorns_TargetMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles"));
    this->Particles = (UParticleSystemComponent*)RootComponent;
}


