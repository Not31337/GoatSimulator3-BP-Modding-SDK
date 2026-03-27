#include "GGTantGearProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GGMobileProjectileMovementComp.h"
#include "GGStaticMeshComponent.h"

AGGTantGearProjectile::AGGTantGearProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGGStaticMeshComponent>(TEXT("Mesh Component"));
    this->ProjectilMesh = (UGGStaticMeshComponent*)RootComponent;
    this->ProjectileComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Component"));
    this->MobileProjectileMovementComponent = CreateDefaultSubobject<UGGMobileProjectileMovementComp>(TEXT("Mobile Projectile Component"));
    this->DamageAmount = 100.00f;
    this->ImpulseForce = 1000.00f;
    this->bCanTripOnIt = true;
    this->bCanChangeMood = true;
    this->bCanTriggerRagdoll = true;
    this->ImpulseForceFromGround = 200.00f;
    this->AchievementID = TEXT("AchievementTantID");
}

void AGGTantGearProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


