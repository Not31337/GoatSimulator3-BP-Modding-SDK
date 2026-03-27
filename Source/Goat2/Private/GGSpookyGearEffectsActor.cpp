#include "GGSpookyGearEffectsActor.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

AGGSpookyGearEffectsActor::AGGSpookyGearEffectsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->FollowedActor = NULL;
    this->AmbientParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AmbientParticle"));
    this->FogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("FogComponent"));
    this->AmbientParticle->SetupAttachment(RootComponent);
    this->FogComponent->SetupAttachment(RootComponent);
}


