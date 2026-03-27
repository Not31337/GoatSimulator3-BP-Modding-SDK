#include "GGInstinct_MedusaHairGear.h"

AGGInstinct_MedusaHairGear::AGGInstinct_MedusaHairGear(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_MedusaHairGear::OnMedusaGearAbiltiyActivated(AGGGoat* Goat, const TArray<UGGFreezeComponent*>& FrozenActors) {
}

void AGGInstinct_MedusaHairGear::OnInstinctTriggered(AGGGoat* Goat, FGameplayTag InstinctTag) {
}


