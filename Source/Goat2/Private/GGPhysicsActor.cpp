#include "GGPhysicsActor.h"
#include "GGPActorStaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGPhysicsActor::AGGPhysicsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<UGGPActorStaticMeshComponent>(TEXT("Mesh"));
    this->Tags.AddDefaulted(1);
    const FProperty* p_MeshComp = GetClass()->FindPropertyByName("MeshComp");
    (*p_MeshComp->ContainerPtrToValuePtr<UMeshComponent*>(this)) = (UMeshComponent*)RootComponent;
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->bDestructible = false;
    this->bForceNotDestructible = false;
    this->bOverrideDestructibleInfo = false;
    this->DelayedOptimizationFallbackTime = 10.00f;
    this->bChangesReplicateMovementInRuntime = false;
    this->CurrentStaticMesh = NULL;
    this->MinTimeBetweenCollisions = 1.00f;
    this->GoatHitGracePeriod = 1.50f;
    this->NPCHitGracePeriod = 2.00f;
}


void AGGPhysicsActor::ShatterActor_Implementation(FVector Impulse) {
}

void AGGPhysicsActor::SetNewMesh(UStaticMesh* NewStaticMesh) {
}

void AGGPhysicsActor::SetIsOptimizedDelayed() {
}

void AGGPhysicsActor::ReloadImpactEffect() {
}

void AGGPhysicsActor::OnRep_CurrentStaticMesh() {
}

void AGGPhysicsActor::OnDestructibleDestroyed_Implementation() {
}

void AGGPhysicsActor::AddImpulse(FVector Impulse, FName BoneName, bool bVelChange) {
}

void AGGPhysicsActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsActor, CurrentStaticMesh);
}


