#include "GGSoapBubbleProjectile.h"
#include "EGGProjectileHitResponse.h"

AGGSoapBubbleProjectile::AGGSoapBubbleProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::Destroy;
    this->HitResponseSpecialTarget = EGGProjectileHitResponse::StickToTarget;
    this->SpecialTargets.AddDefaulted(3);
    this->ScaleWhileAttachedToCharacter = 2.00f;
    this->MaxScaleWhileAttachedToCharacter = 3.00f;
    this->BubbleGrowSpeed = 5.00f;
    this->LocationInterpolationSpeed = 5.00f;
    this->PopSound = NULL;
    this->PopParticles = NULL;
    this->FloatForce = 110000.00f;
    this->FloatForceVehicle = 1100000.00f;
    this->CharacterFloatingSpeed = 150.00f;
    this->MaxVerticalSpeed = 1500.00f;
    this->WindTorqueForce = 10000.00f;
}


