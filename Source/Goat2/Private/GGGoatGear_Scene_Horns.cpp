#include "GGGoatGear_Scene_Horns.h"
#include "EGearSlot.h"
#include "EGoatSockets.h"

UGGGoatGear_Scene_Horns::UGGGoatGear_Scene_Horns(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GearSlot = EGearSlot::GS_Horns;
    this->GoatSocket = EGoatSockets::GS_HornGearSocket;
    this->bCanEditEnumSocket = false;
    this->bCanEditGearSlot = false;
    this->Horns = NULL;
    this->bUseSkeletalHorns = false;
    this->SkeletalHorns = NULL;
    this->AnimBlueprint = NULL;
    this->MaterialOverride = NULL;
}

void UGGGoatGear_Scene_Horns::OnAltGoatChanged(AGGGoat* InGoat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}


