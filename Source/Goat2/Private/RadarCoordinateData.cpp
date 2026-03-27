#include "RadarCoordinateData.h"

FRadarCoordinateData::FRadarCoordinateData() {
    this->Actor = NULL;
    this->bStatic = false;
    this->VisibleDistance = 0.00f;
    this->Relevancy = 0;
    this->bAlwaysTreatAsWaypoint = false;
}

