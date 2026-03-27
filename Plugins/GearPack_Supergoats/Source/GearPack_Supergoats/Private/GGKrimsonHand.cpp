#include "GGKrimsonHand.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

AGGKrimsonHand::AGGKrimsonHand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root Sphere"));
    this->RootSphere = (USphereComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->HandChargeParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Hand Charge Particle"));
    this->WristEmbersParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Wrist Embers Particle"));
    this->HandChargeSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Hand Charge Sound"));
    this->SlamTrailSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Slam Trail Sound"));
    this->TargetingParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Targeting Particle"));
    this->SlamDownTraceDistance = 5000.00f;
    this->SlamDownTraceRadius = 50.00f;
    this->ClientScaleInterpSpeed = 3.00f;
    this->ClientLocationInterpSpeed = 3.00f;
    this->ClientRotationInterpSpeed = 3.00f;
    this->SlamInterpSpeedMulti = 2.00f;
    this->SpawnSound = NULL;
    this->DespawnParticle = NULL;
    this->DespawnSound = NULL;
    this->BeamParticleSystem = NULL;
    this->ChargeSoundFadeOut = 0.25f;
    this->BeamFadeoutSpeed = 2.00f;
    this->HandFadeoutSpeed = 2.00f;
    this->HandMaxScale = 100.00f;
    this->ImpulseRadiusMax = 8000.00f;
    this->OwnerGoat = NULL;
    this->CurrentState = EKrimsonHandState::KHS_TravelOutwards;
    this->TargetHandScale = 1.00f;
    this->BeamParticleComp = NULL;
    this->HandChargeParticle->SetupAttachment(Mesh);
    this->HandChargeSound->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->SlamTrailSound->SetupAttachment(Mesh);
    this->TargetingParticle->SetupAttachment(RootComponent);
    this->WristEmbersParticle->SetupAttachment(Mesh);
}


void AGGKrimsonHand::OnRep_OwnerGoat() {
}

void AGGKrimsonHand::OnRep_CurrentState() {
}

void AGGKrimsonHand::MulticastPlayAttackMontage_Implementation(const FKrimsonAttack& Attack) {
}

void AGGKrimsonHand::ClientSlammedOwner_Implementation(AGGGoat* Goat, FVector Impulse) {
}

void AGGKrimsonHand::ClientSlammedActors_Implementation(int32 VehiclesNum, int32 NPCsNum, int32 GoatsNum, int32 PActorsNum) {
}

void AGGKrimsonHand::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGKrimsonHand, OwnerGoat);
    DOREPLIFETIME(AGGKrimsonHand, CurrentState);
    DOREPLIFETIME(AGGKrimsonHand, CurrentAttack);
    DOREPLIFETIME(AGGKrimsonHand, TargetHandScale);
}


