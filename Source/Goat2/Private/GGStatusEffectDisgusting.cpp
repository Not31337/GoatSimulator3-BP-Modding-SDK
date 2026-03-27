#include "GGStatusEffectDisgusting.h"
#include "EStatusEffectTypes.h"

AGGStatusEffectDisgusting::AGGStatusEffectDisgusting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectType = EStatusEffectTypes::SET_Disgusting;
    this->ValidAffectedActorClasses.AddDefaulted(1);
    this->SpreadStatusEffectType = EStatusEffectTypes::SET_Disgusting;
    this->OverlapShapesScale = 1.75f;
    this->GoatOverlapShapesScale = 2.25f;
    this->PukeThrusterStrength = 30000.00f;
    this->BurstSound = NULL;
    this->BurpSound = NULL;
    this->CleanedByWaterSound = NULL;
    this->BurstParticle = NULL;
    this->EndBurstParticle = NULL;
    this->DisgustingObjectNotifyRadius = 0.00f;
    this->DisgustingObjectSpawnCooldown = 1.00f;
}

void AGGStatusEffectDisgusting::SpawnBaaObject(AGGGoat* OwnerGoat) {
}

void AGGStatusEffectDisgusting::OnGoatBaa(AGGGoat* GoatBaaing) {
}

void AGGStatusEffectDisgusting::MulticastPlayDisgustingInWaterEffect_Implementation(FVector Location) {
}

void AGGStatusEffectDisgusting::MulticastPlayBurst_Implementation(bool ForEnd) {
}


