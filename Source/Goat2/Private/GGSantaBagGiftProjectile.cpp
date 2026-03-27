#include "GGSantaBagGiftProjectile.h"
#include "EGGProjectileHitResponse.h"

AGGSantaBagGiftProjectile::AGGSantaBagGiftProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::Destroy;
    this->bResolveSpecialHitResponseInChildClass = true;
    this->SpecialTargets.AddDefaulted(3);
    this->GiftPActorClass = NULL;
    this->DelayBeforePActorSpawn = 1.00f;
    this->WrapParticles = NULL;
    this->WrapSound = NULL;
    this->SpawnedParticle = NULL;
    this->SpawnedSound = NULL;
}

void AGGSantaBagGiftProjectile::SpawnWrapEffects_Implementation(AActor* OtherActor) {
}


