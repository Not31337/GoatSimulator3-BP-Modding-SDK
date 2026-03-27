#include "BTService_GGManageRandomRoam.h"

UBTService_GGManageRandomRoam::UBTService_GGManageRandomRoam() {
    this->NodeName = TEXT("Manage Random Roaming");
    this->bDebugDrawAndPrint = false;
    this->DistanceUntilNewLocation = 300.00f;
    this->RandomLocationQuery = NULL;
    this->ManagedNPC = NULL;
    this->BlackboardComp = NULL;
}


