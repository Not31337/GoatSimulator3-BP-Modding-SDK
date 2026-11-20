#include "GGSplineMeshParams.h"

FGGSplineMeshParams::FGGSplineMeshParams() {
    this->Mesh = NULL;
    this->Material = NULL;
    this->MeshPlacement = EGGSplineMeshPlacement::PointToPoint;
    this->MeshForwardAxis = ESplineMeshAxis::X;
    this->CustomMeshLength = 0.00f;
    this->bEnableShadows = false;
    this->bAlignRoll = false;
    this->bEnableCollision = false;
    this->bUseComplexCollision = false;
    this->bIgnoreCameraCollision = false;
}

