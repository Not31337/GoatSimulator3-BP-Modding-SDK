#include "GGElfHat_Snowball.h"
#include "EGGProjectileHitResponse.h"

AGGElfHat_Snowball::AGGElfHat_Snowball(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::StickToTarget;
    this->HitResponseSpecialTarget = EGGProjectileHitResponse::StickToTarget;
    this->SpecialTargets.AddDefaulted(4);
    this->SnowmanHeadClass = NULL;
    this->SnowmanClass = NULL;
    this->MinFloorDot = 0.50f;
    this->PlayerImpactForce = 0.00f;
    this->PActorImpactForce = 0.00f;
    this->DefaultDamage = 50.00f;
}

void AGGElfHat_Snowball::OnStickToTarget_Implementation(AActor* OtherActor, const FVector& SurfaceNormal) {
}


