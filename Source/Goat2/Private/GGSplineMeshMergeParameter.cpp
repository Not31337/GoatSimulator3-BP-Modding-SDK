#include "GGSplineMeshMergeParameter.h"

FGGSplineMeshMergeParameter::FGGSplineMeshMergeParameter() {
    this->MaxMergedMeshLength = 0.00f;
    this->CollisionHullCount = 0;
    this->CollisionMaxHullVerts = 0;
    this->CollisionHullPrecision = 0;
    this->bUseComplexCollision = false;
}

