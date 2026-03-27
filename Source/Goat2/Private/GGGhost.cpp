#include "GGGhost.h"
#include "PhysicsEngine/PhysicsThrusterComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

AGGGhost::AGGGhost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionComponent"));
    this->AmountToPossesNPC = 5;
    this->SphereCollisionComponent = (USphereComponent*)RootComponent;
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    this->InitialVelocityMultiplier = 100.00f;
    this->ThrusterRotationRandomizationFrequency = 0.50f;
    this->MaxThrusterRotationChange = 179.00f;
    this->PossessedParticle = NULL;
    this->PossessedSound = NULL;
    this->ParticleComp = NULL;
    this->AudioComp = NULL;
    this->NpcPhysicsThruster = CreateDefaultSubobject<UPhysicsThrusterComponent>(TEXT("InitGhostThrusterComp"));
    this->OwnerGoat = NULL;
    this->TargetNPC = NULL;
}

void AGGGhost::ServerSetGhostParameters_Implementation(const FGhostParameters& Params) {
}
bool AGGGhost::ServerSetGhostParameters_Validate(const FGhostParameters& Params) {
    return true;
}

void AGGGhost::ServerRandomizeThrusterRotation_Implementation() {
}
bool AGGGhost::ServerRandomizeThrusterRotation_Validate() {
    return true;
}

void AGGGhost::OnTargetNpcDestroyed(AActor* NPC) {
}

void AGGGhost::OnNPCUnRagdolled(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* Character, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGGhost::OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled) {
}

void AGGGhost::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult) {
}

void AGGGhost::MulticastStopPossessEffects_Implementation() {
}

void AGGGhost::MulticastStartPossessEffects_Implementation(AGGNPC* NPC) {
}

void AGGGhost::MulticastStartHoming_Implementation(AGGNPC* NPC) {
}

void AGGGhost::MulticastHideGhost_Implementation() {
}

void AGGGhost::MulticastAttachThrusterToNpc_Implementation(USkeletalMeshSocket* Socket) {
}

void AGGGhost::ClientSetGhostParameters_Implementation(const FGhostParameters& Params) {
}

void AGGGhost::ClientAdjustThrusterRotation_Implementation(const FRotator& Rotator) {
}

void AGGGhost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGhost, ProjectileMovementComponent);
    DOREPLIFETIME(AGGGhost, NpcPhysicsThruster);
}


