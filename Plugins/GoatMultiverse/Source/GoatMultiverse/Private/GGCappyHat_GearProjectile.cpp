#include "GGCappyHat_GearProjectile.h"
#include "Components/SphereComponent.h"
#include "EGGProjectileHitResponse.h"
#include "Net/UnrealNetwork.h"

AGGCappyHat_GearProjectile::AGGCappyHat_GearProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USphereComponent>(TEXT("Collision Sphere"))) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::StickToTarget;
    this->bResolveNormalHitResponseInChildClass = true;
    this->SpecialTargets.AddDefaulted(2);
    this->GearPart = NULL;
    this->ReturnSpeed = 2500.00f;
    this->MaxDistanceFromOwner = 1000.00f;
    this->bIsReturningToOwner = false;
    this->CollisionSphere = (USphereComponent*)RootComponent;
}

void AGGCappyHat_GearProjectile::OnRep_bIsReturnToOwner() {
}

void AGGCappyHat_GearProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGCappyHat_GearProjectile, GearPart);
    DOREPLIFETIME(AGGCappyHat_GearProjectile, bIsReturningToOwner);
}


