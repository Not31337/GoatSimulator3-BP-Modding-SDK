#include "GGTrinket.h"

AGGTrinket::AGGTrinket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = false;
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->QuestProgressTiers.AddDefaulted(1);
    this->PickupPraticle = NULL;
    this->KarmaParticleComp = NULL;
}

void AGGTrinket::SetupTrinket() {
}

void AGGTrinket::PlayEffectsOnGoat(AGGGoat* Goat) {
}


