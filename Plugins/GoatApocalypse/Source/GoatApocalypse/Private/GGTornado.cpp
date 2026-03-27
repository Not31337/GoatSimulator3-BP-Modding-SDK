#include "GGTornado.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

AGGTornado::AGGTornado(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->TornadoParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Tornado Particle"));
    this->OverlapComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Overlap Component"));
    this->TornadoHeight = 800.00f;
    this->CharacterAcceleration = 50.00f;
    this->CharacterMaxSpeed = 300.00f;
    this->MaxDistanceFromSpawn = 2000.00f;
    this->TornadoSpeed = 200.00f;
    this->OverlapComponent->SetupAttachment(RootComponent);
    this->TornadoParticle->SetupAttachment(RootComponent);
}

void AGGTornado::OverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGTornado::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



