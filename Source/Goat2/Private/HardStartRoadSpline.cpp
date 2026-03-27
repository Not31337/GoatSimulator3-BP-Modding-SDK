#include "HardStartRoadSpline.h"

FHardStartRoadSpline::FHardStartRoadSpline() {
    this->SplineActorPtr = NULL;
    this->SplineComponent = EConnectionSpline::CS_SingleLaneSpline;
    this->StartPointIndex = 0;
}

