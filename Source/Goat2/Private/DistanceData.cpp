#include "DistanceData.h"

FDistanceData::FDistanceData() {
    this->TypeFlag = 0;
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->bStickToEdge = false;
    this->FadeCurveOverride = NULL;
}

