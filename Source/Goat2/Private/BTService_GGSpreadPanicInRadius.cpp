#include "BTService_GGSpreadPanicInRadius.h"

UBTService_GGSpreadPanicInRadius::UBTService_GGSpreadPanicInRadius() {
    this->NodeName = TEXT("Spread panic in radius");
    this->Radius = 500.00f;
    this->PanicType = EPanicTypes::PT_Random;
    this->bCanScareClowns = true;
    this->bDrawSphere = false;
}


