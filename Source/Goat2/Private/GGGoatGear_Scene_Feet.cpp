#include "GGGoatGear_Scene_Feet.h"
#include "EGearSlot.h"
#include "EGoatSockets.h"

UGGGoatGear_Scene_Feet::UGGGoatGear_Scene_Feet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GearSlot = EGearSlot::GS_Feet;
    this->GoatSocket = EGoatSockets::GS_FeetGear_FrontRSocket;
    this->bCanEditOverrides = false;
    this->bCanEditChildMeshes = false;
    this->bCanEditTransform = false;
    this->bCanEditEnumSocket = false;
    this->bCanEditGearSlot = false;
    this->bIgnoreDataAssetIncrease = false;
}

TArray<UMeshComponent*> UGGGoatGear_Scene_Feet::GetFeetMeshComponents() const {
    return TArray<UMeshComponent*>();
}


