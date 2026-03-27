#include "GGAbominanaGoo.h"
#include "EGGProjectileHitResponse.h"

AGGAbominanaGoo::AGGAbominanaGoo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::Destroy;
    this->ChargePercentageToHitRadius = NULL;
    this->bDebugProjectile = false;
    this->ProjectileScaleAtMaxCharge = 3.00f;
    this->ParticleScaleAtMaxCharge = 5.00f;
    this->DamageTypeClass = NULL;
    this->DamageAmount = 100.00f;
    this->ImpulseForce = 10.00f;
    this->BananaMeshRotationSocket = TEXT("Rotation Socket");
    this->BananaActor = NULL;
    this->AmountOfNPCsToHit = 3;
}


