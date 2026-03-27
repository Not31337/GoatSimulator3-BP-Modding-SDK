#include "GGVehicleWheelMesh.h"

UGGVehicleWheelMesh::UGGVehicleWheelMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentMesh = NULL;
    this->AttachDistanceSphere = NULL;
}


