#include "GGAutoFenceAssetUserData.h"

UGGAutoFenceAssetUserData::UGGAutoFenceAssetUserData() {
    this->bShouldForceSpawnAutoFence = false;
    this->bSnapToGround = true;
    this->bAddGrindSpline = false;
    this->FenceComponentSpacing = 0.00f;
    this->FenceMeshForwardAxis = EAxis::X;
}


