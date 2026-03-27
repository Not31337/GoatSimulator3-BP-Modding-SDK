#include "GGCompanion_Owl.h"
#include "Components/AudioComponent.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "GGFlyingMovementComponent.h"
#include "Net/UnrealNetwork.h"

AGGCompanion_Owl::AGGCompanion_Owl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->CollisionSphere = (USphereComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("Physics Handle"));
    this->MovementComponent = CreateDefaultSubobject<UGGFlyingMovementComponent>(TEXT("Movement Component"));
    this->TrailParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Trail Particles"));
    this->BurstParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Burst Particles"));
    this->AttackSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Attack Sound"));
    this->IdleSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Idle Sound"));
    this->IdleCirclingDistance = 200.00f;
    this->CircleTargetRotationSpeed = 20.00f;
    this->MaxGoatOwnerSpeedForSeekingTargetsToGrab = 200.00f;
    this->MinTimeToWaitWhenGoatOwnerIsMovingSlowly = 2.00f;
    this->HeightToDropTargetFrom = 1000.00f;
    this->DelayBetweenGrabbingTheSameActor = 60.00f;
    this->PhysicsHandleAttachSocket = TEXT("foot_r");
    this->DropOffDistance = 150.00f;
    this->ChanceToSitDownAfterBringingSomethingBack = 0.25f;
    this->TagForGrabbedActors = TEXT("IsGrabbedByOwl");
    this->TagForTargetedActors = TEXT("IsTargetedByOwl");
    this->FlyingTrickMontage = NULL;
    this->bDoIdleTricks = true;
    this->IdleLocationInterpSpeed = 1.00f;
    this->IdleRotationInterpSpeed = 1.00f;
    this->DistanceFromPlayerToTeleportBackInM = 100.00f;
    this->TeleportAwayParticles = NULL;
    this->TeleportAwaySound = NULL;
    this->TeleportArriveParticles = NULL;
    this->TeleportArriveSound = NULL;
    this->TakeoffDelay = 0.50f;
    this->DistanceToInitiateLanding = 400.00f;
    this->LandingDuration = 3.00f;
    this->CircleTarget = NULL;
    this->Target = NULL;
    this->bIsTargetGrabbed = false;
    this->AttackSound->SetupAttachment(RootComponent);
    this->BurstParticles->SetupAttachment(RootComponent);
    this->IdleSound->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->TrailParticles->SetupAttachment(RootComponent);
}

void AGGCompanion_Owl::OnStartEnteringTeleportArea(AGGPlayerState* Player, UGGTeleportAreaDataAsset* AreaAsset) {
}


void AGGCompanion_Owl::OnRep_IsTargetGrabbed() {
}

void AGGCompanion_Owl::OnRep_Companion() {
}

void AGGCompanion_Owl::OnGoatOwnerTeleported(AGGCharacter* Character, const FTransform& OldTransform) {
}

void AGGCompanion_Owl::OnGoatOwnerHeadbutted(UObject* HeadbuttedObject, AGGGoat* HeadbuttingGoat) {
}

void AGGCompanion_Owl::OnGoatOwnerExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void AGGCompanion_Owl::OnGoatOwnerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void AGGCompanion_Owl::OnEnteredTeleportArea(AGGPlayerState* Player, UGGTeleportAreaDataAsset* AreaAsset) {
}

void AGGCompanion_Owl::OnCompanionStateChanged(EGGCompanionState OldState) {
}

void AGGCompanion_Owl::MulticastOnGoatOwnerTeleported_Implementation(const FVector& OldLocation) {
}

void AGGCompanion_Owl::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGCompanion_Owl, Companion);
    DOREPLIFETIME(AGGCompanion_Owl, Target);
    DOREPLIFETIME(AGGCompanion_Owl, bIsTargetGrabbed);
    DOREPLIFETIME(AGGCompanion_Owl, ReplicatedMesh);
}


void AGGCompanion_Owl::ServerUpdateRagdollOnTarget_Implementation(const TScriptInterface<ILSReplicatedMeshRPCs>& NewTarget, FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize NewActorLocation) {}

void AGGCompanion_Owl::ServerUpdateRagdoll_Implementation(FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize NewActorLocation) {}

void AGGCompanion_Owl::ServerUpdateFloatingRagdollOnTarget_Implementation(const TScriptInterface<ILSReplicatedMeshRPCs>& NewTarget, FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize100 NewRagdollAngularVelocity, FVector_NetQuantize NewActorLocation) {}

void AGGCompanion_Owl::ServerUpdateFloatingRagdoll_Implementation(FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize100 NewRagdollAngularVelocity, FVector_NetQuantize NewActorLocation) {}

void AGGCompanion_Owl::ServerTeleportRagdollFinished_Implementation() {}

void AGGCompanion_Owl::ServerTeleportRagdoll_Implementation(FVector TeleportLocation) {}

void AGGCompanion_Owl::MulticastTeleportRagdoll_Implementation(FVector TeleportLocation, bool bFromServer) {}