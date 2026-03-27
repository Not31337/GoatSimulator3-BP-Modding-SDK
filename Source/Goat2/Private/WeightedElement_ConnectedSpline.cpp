#include "WeightedElement_ConnectedSpline.h"

FWeightedElement_ConnectedSpline::FWeightedElement_ConnectedSpline() {
    this->SplineComponent = EConnectionSpline::CS_SingleLaneSpline;
    this->ConnectingPointIndex = 0;
}

