#include "GGPlayerGame_Race_Checkpoint.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

AGGPlayerGame_Race_Checkpoint::AGGPlayerGame_Race_Checkpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle System"));
    this->ParticleSystem->SetupAttachment(RootComponent);
}


