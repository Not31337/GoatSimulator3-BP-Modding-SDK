#include "GGSplineSpawnerModifier_Grid.h"

UGGSplineSpawnerModifier_Grid::UGGSplineSpawnerModifier_Grid() {
    this->NumberOfRows = 1;
    this->MeshForwardAxis = EAxis::X;
    this->MeshRightAxis = EAxis::Y;
    this->SideOffset = 0.00f;
    this->StartOffset = 0.00f;
    this->RotationType = EGGSplineAlignment::FollowSpline;
}


