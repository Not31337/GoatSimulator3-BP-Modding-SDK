#include "GGSplineSpawnerModifier_PreventOverlap.h"

UGGSplineSpawnerModifier_PreventOverlap::UGGSplineSpawnerModifier_PreventOverlap() {
    this->Iterations = 15;
    this->BoundsOffset = 0.00f;
    this->bRemoveOverlapsAtTheEnd = false;
    this->BoundsOffsetForRemovingOverlaps = 0.00f;
}


