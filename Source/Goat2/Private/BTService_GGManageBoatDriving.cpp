#include "BTService_GGManageBoatDriving.h"

UBTService_GGManageBoatDriving::UBTService_GGManageBoatDriving() {
    this->NodeName = TEXT("Manage Boat Driving");
    this->bCallTickOnSearchStart = true;
    this->bAlwaysGetOnSplines = true;
    this->PointMinDistance = 300.00f;
    this->OffRoadDistance = 1500.00f;
    this->TooFarAwayDistance = 4000.00f;
    this->NearestSplineMaxDistance = 3000.00f;
    this->Vehicle = NULL;
    this->BlackboardComp = NULL;
    this->CurrentSplineComp = NULL;
    this->NextSplineComp = NULL;
    this->NextSplineEnterIndex = 0;
    this->PreviousSplineComp = NULL;
}


