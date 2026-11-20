#include "GGGoatGear_Horns_StickyHorns.h"

UGGGoatGear_Horns_StickyHorns::UGGGoatGear_Horns_StickyHorns(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VerticalHeadbuttImpulse = 0.00f;
    this->StickyStatusEffectClass = NULL;
    this->StickyMeshMaterial = NULL;
}

void UGGGoatGear_Horns_StickyHorns::OnGoatHeadbutted(AGGGoat* GoatHeadbutting, AActor* HeadbuttedActor) {
}

void UGGGoatGear_Horns_StickyHorns::MulticastPlayHeadbuttVFX_Implementation() {
}


