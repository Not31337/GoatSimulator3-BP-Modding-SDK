#include "GGGoatGear_Scene_Fur.h"
#include "EGearSlot.h"
#include "EGoatSockets.h"

UGGGoatGear_Scene_Fur::UGGGoatGear_Scene_Fur(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GearSlot = EGearSlot::GS_Fur;
    this->GoatSocket = EGoatSockets::GS_BodyGearSocket;
    this->bCanEditEnumSocket = false;
    this->bCanEditGearSlot = false;
    this->bUseGFur = false;
    this->gFurMaterial = NULL;
    this->GFurGrowMesh = NULL;
    this->GFurSplinesOverride = NULL;
    this->bCanEditGFur = true;
    this->AttachToPreview = NULL;
}


