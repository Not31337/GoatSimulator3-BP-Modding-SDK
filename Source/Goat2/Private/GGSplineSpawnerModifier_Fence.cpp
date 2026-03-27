#include "GGSplineSpawnerModifier_Fence.h"

UGGSplineSpawnerModifier_Fence::UGGSplineSpawnerModifier_Fence() {
    this->Spacing = EGGFenceSpacing::FillSpline;
    this->MeshForwardAxis = EAxis::X;
    this->RotationType = EGGSplineAlignment::FollowSpline;
    this->SideOffset = 0.00f;
    this->StartOffset = 0.00f;
}


