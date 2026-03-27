#include "GGVehicle_Car.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GGVehicleTrailParticles.h"
#include "GGWheeledVehicleMovementComp4W.h"
#include "Net/UnrealNetwork.h"

AGGVehicle_Car::AGGVehicle_Car(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ValidDriverTypes.AddDefaulted(3);
    this->ValidDamageTypes.AddDefaulted(6);
    this->GGVehicleMovementComponent = CreateDefaultSubobject<UGGWheeledVehicleMovementComp4W>(TEXT("GG Vehicle Movement 4W"));
    this->ExhaustParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Exhaust Particle"));
    this->BackRightDriftParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Back Right Drift Particle"));
    this->BackLeftDriftParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Back Left Drift Particle"));
    this->AntiPActorBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Anti PActor Box"));
    this->TrailParticles = CreateDefaultSubobject<UGGVehicleTrailParticles>(TEXT("Trail Particles"));
    this->DebugDrawLines = false;
    this->BoostStartSound = NULL;
    this->BoostLoopSound = NULL;
    this->BoostEndSound = NULL;
    this->bHasABrakeLight = true;
    this->bAdjustCOMBasedOnSpeed = true;
    this->VelocityConsideredFast = 2000.00f;
    this->COMZOffset = -50.00f;
    this->AntiPActorBox->SetupAttachment(RootComponent);
}

UGGWheeledVehicleMovementComp4W* AGGVehicle_Car::GetWheeledVehicleMovement() const {
    return NULL;
}

void AGGVehicle_Car::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGVehicle_Car, GGVehicleMovementComponent);
}


