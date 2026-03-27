#include "GGSoundAndParticleGameplayCueActor.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

AGGSoundAndParticleGameplayCueActor::AGGSoundAndParticleGameplayCueActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bAutoDestroyOnRemove = true;
    this->bAutoAttachToOwner = true;
    this->Root = (USceneComponent*)RootComponent;
    this->Particles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles"));
    this->Sound = CreateDefaultSubobject<UAudioComponent>(TEXT("Sound"));
    this->Particles->SetupAttachment(RootComponent);
    this->Sound->SetupAttachment(RootComponent);
}


