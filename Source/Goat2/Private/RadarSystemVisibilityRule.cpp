#include "RadarSystemVisibilityRule.h"

FRadarSystemVisibilityRule::FRadarSystemVisibilityRule() {
    this->AffectedActor = NULL;
    this->Scope = 0;
    this->bVisible = false;
    this->bExactTagMatching = false;
    this->bVisibleIfWaypoint = false;
}

