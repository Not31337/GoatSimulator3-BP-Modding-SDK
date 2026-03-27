#include "GGPie_Projectile.h"
#include "EGGProjectileHitResponse.h"

AGGPie_Projectile::AGGPie_Projectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::StickToTarget;
    this->HitResponseSpecialTarget = EGGProjectileHitResponse::StickToTarget;
    this->bResolveSpecialHitResponseInChildClass = true;
    this->SpecialTargets.AddDefaulted(1);
    this->ImpulseAgainstNPCs = 500.00f;
    this->ImpulseAgainstPlayers = 1000.00f;
    this->ImpactOffsetAgainstNPCs = -10.00f;
}


