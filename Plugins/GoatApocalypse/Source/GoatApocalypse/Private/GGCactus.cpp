#include "GGCactus.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGCactus::AGGCactus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->RegrowingParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Regrowing Particle"));
    this->RegrowingSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Regrowing Sound"));
    this->OngoingGoldParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ongoing Gold Particle"));
    this->SignificanceRange = 4000.00f;
    this->CactusScoreValue = 1;
    this->GoldScoreMultiplier = 10;
    this->GoldMaterial = NULL;
    this->GoldOpuntiaMaterial = NULL;
    this->GoldBurstParticle = NULL;
    this->GoldBurstSound = NULL;
    this->GoldOngoingParticle = NULL;
    this->RegrowSound = NULL;
    this->RegrowTimeMin = 10.00f;
    this->RegrowTimeMax = 15.00f;
    this->RegrowingSpeed = 30.00f;
    this->RegrowingSpeedIncreasePerSecond = 2.00f;
    this->CurrentState = ECactusState::Idle;
    this->Mesh->SetupAttachment(RootComponent);
    this->OngoingGoldParticle->SetupAttachment(Mesh);
    this->RegrowingParticle->SetupAttachment(RootComponent);
    this->RegrowingSound->SetupAttachment(RootComponent);
}

void AGGCactus::ResetEditorMeshAndType(bool bMarkDirty) {
}

void AGGCactus::OnRep_MeshAndType() {
}

void AGGCactus::OnRep_CurrentState() {
}

void AGGCactus::MulticastPlayShatterEffects_Implementation(FVector_NetQuantize Impulse) {
}

void AGGCactus::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGCactus, CurrentState);
    DOREPLIFETIME(AGGCactus, MeshAndType);
}


