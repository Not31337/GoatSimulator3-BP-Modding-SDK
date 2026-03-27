#include "GGRadarPointActor.h"

AGGRadarPointActor::AGGRadarPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bAddRadarPointInBlueprint = false;
    this->RadarSystem = NULL;
}


