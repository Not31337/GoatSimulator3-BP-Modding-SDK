#include "GGSpline_SplineMeshSpawner.h"

UGGSpline_SplineMeshSpawner::UGGSpline_SplineMeshSpawner() {
    this->Mesh = NULL;
    this->MeshForwardAxis = ESplineMeshAxis::X;
    this->SpawnMode = EGGSplineMeshSpawnMode::OneMeshBetweenSplinePoints;
}


