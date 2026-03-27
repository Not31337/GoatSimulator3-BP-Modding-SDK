#include "GGWheelerDealerProjectile.h"
#include "EGGProjectileHitResponse.h"

AGGWheelerDealerProjectile::AGGWheelerDealerProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::Destroy;
    this->MinYawRotation = 0.00f;
    this->MaxYawRotation = 360.00f;
    this->ImpulseForce = 200.00f;
    this->DamageAmount = 10.00f;
    this->DamageRadius = 32.00f;
    this->SuccessParticles = NULL;
    this->FailParticles = NULL;
    this->SuccessSound = NULL;
    this->FailSound = NULL;
    this->OwningGoat = NULL;
}


