#include "GGGoatGear_Scene_Horns_Druid.h"

UGGGoatGear_Scene_Horns_Druid::UGGGoatGear_Scene_Horns_Druid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PigeonParticle = NULL;
}

void UGGGoatGear_Scene_Horns_Druid::OnHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}


