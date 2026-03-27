#include "GGThorsHammerProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGThorsHammerProjectile::AGGThorsHammerProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HammerParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HammerParticle"));
    this->TrailParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailParticle"));
    this->RotationHammer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotationHammer"));
    this->ExplosionParticle = NULL;
    this->ExplosionSound = NULL;
    this->ExplosionRadius = 300.00f;
    this->ImpulseSize = 500.00f;
    this->MaxDistanceTravel = 5000.00f;
    this->CurrentState = EHammerState::HS_Thrown;
    this->HammerParticle->SetupAttachment(RootComponent);
    this->RotationHammer->SetupAttachment(RootComponent);
    this->TrailParticle->SetupAttachment(RootComponent);
}

void AGGThorsHammerProjectile::MulticastExplode_Implementation(FVector Location) {
}

void AGGThorsHammerProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGThorsHammerProjectile, CurrentState);
}


