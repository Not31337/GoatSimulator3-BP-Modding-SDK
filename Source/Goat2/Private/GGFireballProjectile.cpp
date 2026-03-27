#include "GGFireballProjectile.h"
#include "EGGProjectileHitResponse.h"

AGGFireballProjectile::AGGFireballProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::Destroy;
    this->ExplosionParticle = NULL;
    this->TrailParticle = NULL;
    this->ExplosionParticleScale = 0.50f;
    this->ExplosionSound = NULL;
    this->ExplosionSoundVolume = 0.30f;
    this->ExplosionRadius = 150.00f;
    this->ExplosionForce = 20000.00f;
    this->CharacterExplosionForce = 1000.00f;
    this->ExplosionCameraShake = NULL;
    this->CameraShakeRadius = 0.00f;
    this->TrailParticleComp = NULL;
}

void AGGFireballProjectile::MulticastOnFireballExploded_Implementation() {
}


