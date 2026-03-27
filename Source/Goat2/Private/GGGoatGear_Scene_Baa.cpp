#include "GGGoatGear_Scene_Baa.h"
#include "EGearSlot.h"
#include "EGoatSockets.h"

UGGGoatGear_Scene_Baa::UGGGoatGear_Scene_Baa(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GearSlot = EGearSlot::GS_Baa;
    this->GoatSocket = EGoatSockets::GS_HeadGearSocket;
    this->bCanChangeMaterial = false;
    this->bShowTutorialForGearAbility = false;
    this->bCanEditEnumSocket = false;
    this->bCanEditGearSlot = false;
    this->BaaSoundOverride = NULL;
}



void UGGGoatGear_Scene_Baa::ActivateBaaMulticast_Implementation(bool bIsPreview) {
}

void UGGGoatGear_Scene_Baa::ActivateBaaLocally(bool bIsPreview) {
}


