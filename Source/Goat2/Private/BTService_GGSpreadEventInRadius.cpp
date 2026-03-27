#include "BTService_GGSpreadEventInRadius.h"

UBTService_GGSpreadEventInRadius::UBTService_GGSpreadEventInRadius() {
    this->NodeName = TEXT("Spread event in radius");
    this->bCallTickOnSearchStart = true;
    this->Radius = 500.00f;
    this->ChanceToSpread = 100.00f;
    this->DrawSphere = false;
}


