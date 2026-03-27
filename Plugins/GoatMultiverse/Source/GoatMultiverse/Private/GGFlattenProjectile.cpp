#include "GGFlattenProjectile.h"
#include "EGGProjectileHitResponse.h"
#include "Templates/SubclassOf.h"

AGGFlattenProjectile::AGGFlattenProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseSpecialTarget = EGGProjectileHitResponse::BecomePhysicsActor;
    this->SpecialTargets.AddDefaulted(2);
    this->FlattenStatusEffectClass = NULL;
    this->ProjectileSpeed = 2000.00f;
    this->PhysicsActorLifeSpan = 0.00f;
    this->TargetActor = NULL;
}

AGGFlattenProjectile* AGGFlattenProjectile::SpawnFlattenProjectile(TSubclassOf<AGGFlattenProjectile> ProjectileClass, const FTransform& SpawnTransform, AActor* Target, AActor* ProjectileOwner) {
    return NULL;
}


