#include "BTTask_GGMatchSpeedWith.h"

UBTTask_GGMatchSpeedWith::UBTTask_GGMatchSpeedWith() {
    this->NodeName = TEXT("Match Speed With");
    this->DistanceAboveToMatchSpeed = 0.00f;
    this->bResetSpeedOnSucceeded = true;
    this->bAllowSprinting = true;
}


