#include "GGInstinct_LightningStrikeNpcs.h"

AGGInstinct_LightningStrikeNpcs::AGGInstinct_LightningStrikeNpcs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_LightningStrikeNpcs::OnLightningBoltsGearActivated(const UGGGearAbility_LightningBolts* Ability, AGGExplosiveActor* Explosive) {
}

void AGGInstinct_LightningStrikeNpcs::OnLightningBoltExploded(AGGExplosiveActor* ExplosiveActor, const TArray<AActor*>& HitActors) {
}

void AGGInstinct_LightningStrikeNpcs::OnInstinctTriggered(AGGGoat* Goat, FGameplayTag InstinctTag) {
}


