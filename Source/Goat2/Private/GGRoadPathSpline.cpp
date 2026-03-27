#include "GGRoadPathSpline.h"

AGGRoadPathSpline::AGGRoadPathSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayText = false;
    this->DisplayConnectionText = true;
    this->RefreshText = false;
    this->TextSize = 68.00f;
    this->TextMat = NULL;
    this->CreateTextLogErrors = true;
    this->RoadVehicleType = ERoadVehicleType::RVT_Car;
    this->bRelevantForRoadSpawnManager = true;
    this->bOverrideDefaultVehicles = false;
}


