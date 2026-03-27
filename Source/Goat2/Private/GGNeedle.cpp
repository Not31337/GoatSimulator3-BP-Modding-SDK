#include "GGNeedle.h"
#include "EGGProjectileHitResponse.h"

AGGNeedle::AGGNeedle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::StickToTarget;
    this->HitResponseSpecialTarget = EGGProjectileHitResponse::StickToTarget;
    this->SpecialTargets.AddDefaulted(1);
    this->HitStiffBonesComponent = NULL;
}

void AGGNeedle::OnAttachedNPCPooled(AGGNPC* NPC, bool bWasPooled) {
}

void AGGNeedle::OnAttachedGoatAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}


