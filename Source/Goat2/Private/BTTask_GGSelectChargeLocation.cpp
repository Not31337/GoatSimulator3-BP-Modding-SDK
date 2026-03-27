#include "BTTask_GGSelectChargeLocation.h"

UBTTask_GGSelectChargeLocation::UBTTask_GGSelectChargeLocation() {
    this->NodeName = TEXT("Select Charge Location");
    this->DistancePastTarget = 800.00f;
    this->OwnerBT = NULL;
    this->NPC = NULL;
}


