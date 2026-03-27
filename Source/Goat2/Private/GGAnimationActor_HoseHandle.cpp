#include "GGAnimationActor_HoseHandle.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"

AGGAnimationActor_HoseHandle::AGGAnimationActor_HoseHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Water Particle Component"));
    this->WaterAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Water Audio Component"));
    this->HoseCableComponent = NULL;
    this->TraceLength = 200.00f;
    this->TraceWidth = 30.00f;
    this->ImpulseStrength = 3000.00f;
    this->CharacterImpulseStrength = 1000.00f;
    this->bDealDamageToGGMeshComps = true;
    this->ForceDamageDelay = 1.00f;
    this->bDrawOverlapCheck = false;
    this->FirefighterBackpackMesh = NULL;
    this->CableMaterial = NULL;
    this->CableLength = 90.00f;
    this->NumSegments = 9;
    this->bStiffness = true;
    this->bCollision = true;
    this->CableWidth = 5.00f;
    this->NumSides = 6;
    this->OwnerHumanoidNPC = NULL;
    this->FirefighterBackpack = NULL;
    this->WaterAudioComponent->SetupAttachment(RootComponent);
    this->WaterParticleComponent->SetupAttachment(RootComponent);
}


