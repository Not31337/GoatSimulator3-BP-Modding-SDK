#include "GGBeeHive_Swarm.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGBeeHive_Swarm::AGGBeeHive_Swarm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere of attack"));
    this->SphereOfAttack = (USphereComponent*)RootComponent;
    this->SwarmParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Swarm Particles"));
    this->PassiveSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Passive Sound"));
    this->HitParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Hit Particle Component"));
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
    this->bAttackPlayers = false;
    this->NumberOfAttacks = 10;
    this->FinalAttackImpulseFactor = 2.00f;
    this->AttackInterval = 0.30f;
    this->HiveSoundAttackParamName = TEXT("Attacking");
    this->HiveSoundAttackParamLerpSpeed = 1.00f;
    this->HitSound = NULL;
    this->CurrentState = EGGBeeSwarmStateType::None;
    this->Target = NULL;
    this->OwnerComponentOverride = NULL;
    this->HitParticleComponent->SetupAttachment(RootComponent);
    this->PassiveSound->SetupAttachment(RootComponent);
    this->SwarmParticles->SetupAttachment(RootComponent);
}

AGGBeeHive_Swarm* AGGBeeHive_Swarm::SpawnSwarmAttachedToOwner(AActor* InOwner, TSubclassOf<AGGBeeHive_Swarm> InClass) {
    return NULL;
}

AGGBeeHive_Swarm* AGGBeeHive_Swarm::SpawnSwarmAttachedToComponent(USceneComponent* InAttachComponent, TSubclassOf<AGGBeeHive_Swarm> InClass) {
    return NULL;
}

void AGGBeeHive_Swarm::SetAttackTarget_K2(const AGGCharacter* InTarget) {
}

void AGGBeeHive_Swarm::OnRep_Target() {
}

void AGGBeeHive_Swarm::OnRep_CurrentState() {
}

void AGGBeeHive_Swarm::MulticastStartAttackingTarget_Implementation() {
}

bool AGGBeeHive_Swarm::IsFollowingOwner() const {
    return false;
}

bool AGGBeeHive_Swarm::IsAttackingTarget() const {
    return false;
}

bool AGGBeeHive_Swarm::HasAttackTarget() const {
    return false;
}

AActor* AGGBeeHive_Swarm::GetAttackTarget() const {
    return NULL;
}

void AGGBeeHive_Swarm::FollowOwner() {
}

void AGGBeeHive_Swarm::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGBeeHive_Swarm, CurrentState);
    DOREPLIFETIME(AGGBeeHive_Swarm, Target);
    DOREPLIFETIME(AGGBeeHive_Swarm, OwnerComponentOverride);
}


