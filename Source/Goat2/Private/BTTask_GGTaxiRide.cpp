#include "BTTask_GGTaxiRide.h"

UBTTask_GGTaxiRide::UBTTask_GGTaxiRide() {
    this->NodeName = TEXT("Taxi Ride");
    this->bRemoveCurrentBackGear = true;
    this->bResetTargetActor = true;
    this->NPC = NULL;
    this->TaxiGoat = NULL;
    this->OwnerBT = NULL;
    this->SaddleComp = NULL;
}


