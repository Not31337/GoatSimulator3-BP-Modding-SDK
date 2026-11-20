#include "GGCupidProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "EGGProjectileHitResponse.h"
#include "Net/UnrealNetwork.h"

AGGCupidProjectile::AGGCupidProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::Destroy;
    this->SpecialTargets.AddDefaulted(4);
    this->AttachedMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Attached Mesh"));
    this->IgnoredHomingActors.AddDefaulted(1);
    this->HomeTargetRadius = 500.00f;
    this->HomeTargetDistance = 1500.00f;
    this->RagdollHitDelay = 3.00f;
    this->ImpulseRadius = 300.00f;
    this->ImpulsePower = 1000.00f;
    this->VehiclePowerScalar = 15.00f;
    this->CharacterPushPower = 800.00f;
    this->CameraShake = NULL;
    this->CameraShakeRadius = 500.00f;
    this->StaticDecalMaterial = NULL;
    this->DecalLifeSpan = 5.00f;
    this->InLoveEffectComponentClass = NULL;
    this->bCollideWithRagdolls = false;
    this->AttachedMesh->SetupAttachment(RootComponent);
}

void AGGCupidProjectile::OnRep_CollideWithRagdolls() {
}

void AGGCupidProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGCupidProjectile, bCollideWithRagdolls);
}


