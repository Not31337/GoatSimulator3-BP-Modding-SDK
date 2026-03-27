#include "GGTrinket.h"

AGGTrinket::AGGTrinket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
    this->PickupPraticle = NULL;
    this->KarmaParticleComp = NULL;
}

void AGGTrinket::SetupTrinket() {
}

void AGGTrinket::PlayEffectsOnGoat(AGGGoat* Goat) {
}


