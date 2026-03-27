#include "GGGoatGear_Skel_Body.h"
#include "EGearSlot.h"
#include "EGoatSockets.h"

UGGGoatGear_Skel_Body::UGGGoatGear_Skel_Body(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GearSlot = EGearSlot::GS_Body;
    this->GoatSocket = EGoatSockets::GS_BodyGearSocket;
    this->bCanEditEnumSocket = false;
    this->bCanEditGearSlot = false;
    this->GFurSplinesOverride = NULL;
    this->AttachToPreview = NULL;
}


