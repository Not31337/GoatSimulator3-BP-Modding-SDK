#include "GGFlyingCollisionAvoidance.h"

FGGFlyingCollisionAvoidance::FGGFlyingCollisionAvoidance() {
    this->PredictionTime = 0.00f;
    this->MinTraceDistance = 0.00f;
    this->CollisionScale = 0.00f;
    this->bIsEnabled = false;
}

