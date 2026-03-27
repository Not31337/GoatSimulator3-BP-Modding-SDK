#include "GGRockRamp.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGRockRamp::AGGRockRamp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->RampMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ramp Mesh"));
    this->TravelParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Travel Particle Comp"));
    this->TravelAudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Travel Audio Comp"));
    this->RampRiseParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ramp Rise Particle Comp"));
    this->RampRiseAudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Ramp Rise Audio Comp"));
    this->VehicleOverlap = CreateDefaultSubobject<UBoxComponent>(TEXT("Vehicle Overlap"));
    this->GroundParticleTravelSpeed = 1000.00f;
    this->GroundDownTraceLength = 20000.00f;
    this->TraceStartUpwardAdjust = 20000.00f;
    this->MeshStartUnderDist = 1000.00f;
    this->RampRiseSped = 100.00f;
    this->DespawnAfter = 180.00f;
    this->AirborneTimeForInstinct = 7.00f;
    this->ForceFeedbackComponent = NULL;
    this->RampMeshComp->SetupAttachment(RootComponent);
    this->RampRiseAudioComp->SetupAttachment(RootComponent);
    this->RampRiseParticleComp->SetupAttachment(RootComponent);
    this->TravelAudioComp->SetupAttachment(RootComponent);
    this->TravelParticleComp->SetupAttachment(RootComponent);
    this->VehicleOverlap->SetupAttachment(RootComponent);
}

void AGGRockRamp::OnRep_RampValues() {
}

void AGGRockRamp::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGRockRamp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGRockRamp, RampValues);
}


