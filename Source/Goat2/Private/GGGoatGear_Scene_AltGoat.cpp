#include "GGGoatGear_Scene_AltGoat.h"
#include "EGearSlot.h"
#include "EGoatSockets.h"

UGGGoatGear_Scene_AltGoat::UGGGoatGear_Scene_AltGoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GearSlot = EGearSlot::GS_AltGoat;
    this->GoatSocket = EGoatSockets::GS_BodyGearSocket;
    this->bCanEditEquipRestrictions = false;
    this->bCanEditEnumSocket = false;
    this->bCanEditGearSlot = false;
    this->AltGoat = NULL;
    this->PreviewIdleAnim = NULL;
}


