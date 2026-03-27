#include "GGGoatGear_Scene_AltGoat_Human.h"

UGGGoatGear_Scene_AltGoat_Human::UGGGoatGear_Scene_AltGoat_Human(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeardMeshIndex = 3;
    this->DefaultHairMesh = NULL;
    this->DefaultUpperBodyMesh = NULL;
    this->DefaultLowerBodyMesh = NULL;
    this->DefaultHeadMesh = NULL;
}

void UGGGoatGear_Scene_AltGoat_Human::MulticastLoadNewAppearance_Implementation(const FGGAppearanceSet& Appearances, UGGGearAbility_HumanAltGoat* HumanAltGoat) {
}


