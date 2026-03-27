#include "GGCommanderTargeter.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

AGGCommanderTargeter::AGGCommanderTargeter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->OverlapCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Overlap Capsule"));
    this->TargeterParticleVisualizer = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Targeter Particle Visualizer"));
    this->TargeterAreaParticleVisualizer = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Targeter Area Particle Visualizer"));
    this->OverlapCapsule->SetupAttachment(RootComponent);
    this->TargeterAreaParticleVisualizer->SetupAttachment(RootComponent);
    this->TargeterParticleVisualizer->SetupAttachment(RootComponent);
}


