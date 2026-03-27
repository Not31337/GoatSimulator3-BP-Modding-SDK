#include "BTService_GGManageRandomDriving.h"

UBTService_GGManageRandomDriving::UBTService_GGManageRandomDriving() {
    this->NodeName = TEXT("Manage Random Driving");
    this->bCallTickOnSearchStart = true;
    this->DebugDrawAndPrintSplinePath = false;
    this->DebugDrawAndPrintNavMeshPath = false;
    this->PrintRPMChanges = false;
    this->bAlwaysGetOnSplines = true;
    this->NavFilter = NULL;
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
    this->Path = NULL;
}

void UBTService_GGManageRandomDriving::PathUpdated(UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent::Type> PathEvent) {
}


