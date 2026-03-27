#include "GGSplineSpawnerModifier_SnapToGround.h"

UGGSplineSpawnerModifier_SnapToGround::UGGSplineSpawnerModifier_SnapToGround() {
    this->TraceDistance = 200.00f;
    this->TraceChannel = ECC_Visibility;
    this->Offset = 0.00f;
    this->SnapMode = EGGSnapMode::BoundsCenter;
}


