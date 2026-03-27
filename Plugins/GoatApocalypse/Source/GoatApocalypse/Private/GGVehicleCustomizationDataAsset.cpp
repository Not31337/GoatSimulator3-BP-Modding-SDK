#include "GGVehicleCustomizationDataAsset.h"

UGGVehicleCustomizationDataAsset::UGGVehicleCustomizationDataAsset() {
    this->Type = EGGVehicleCustomizationType::None;
    this->Mesh = NULL;
    this->MeshScale = 1.00f;
    this->HighlightMaterial = NULL;
    this->bResetToDefault = false;
    this->HighlightMaterialResetToDefault = NULL;
    this->WheelClassFront = NULL;
    this->WheelClassBack = NULL;
    this->TireConfigDrifting = NULL;
    this->bFitWheelMeshToPhysicsWheel = true;
}


