#include "BTTask_GGDecideFishLocation.h"

UBTTask_GGDecideFishLocation::UBTTask_GGDecideFishLocation() {
    this->NodeName = TEXT("Decide Fish Location");
    this->DistanceInFront = 600.00f;
    this->CastAreaSize = 700.00f;
    this->MaxTraceAttempts = 20;
    this->bDebug = false;
}


