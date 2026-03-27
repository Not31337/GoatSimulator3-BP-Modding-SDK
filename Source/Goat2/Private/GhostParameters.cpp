#include "GhostParameters.h"

FGhostParameters::FGhostParameters() {
    this->bInfiniteSearchRadius = false;
    this->bInfiniteSearchTime = false;
    this->GhostSearchRadius = 0.00f;
    this->GhostSearchFrequency = 0.00f;
    this->GhostLifeSpanBeforeVanishing = 0.00f;
    this->bInfinitePossessTime = false;
    this->GhostPossessTime = 0.00f;
    this->ThrusterForce = 0.00f;
}

