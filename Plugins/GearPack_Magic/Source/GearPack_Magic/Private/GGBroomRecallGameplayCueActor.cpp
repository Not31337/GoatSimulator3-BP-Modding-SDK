#include "GGBroomRecallGameplayCueActor.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"

AGGBroomRecallGameplayCueActor::AGGBroomRecallGameplayCueActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->Particles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles"));
    this->Sound = CreateDefaultSubobject<UAudioComponent>(TEXT("Sound"));
    this->Particles->SetupAttachment(RootComponent);
    this->Sound->SetupAttachment(RootComponent);
}


