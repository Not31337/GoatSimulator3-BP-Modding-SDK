#include "BTService_GGManageVehiclePath.h"

UBTService_GGManageVehiclePath::UBTService_GGManageVehiclePath() {
    this->NodeName = TEXT("Manage Vehicle Path");
    this->bCallTickOnSearchStart = true;
    this->DebugPrint = false;
    this->DebugDrawPath = false;
    this->NavFilter = NULL;
    this->PointMinDistance = 300.00f;
    this->ReachedPathDistance = 500.00f;
    this->bLookForNearbyNavMesh = true;
    this->NearbyNavMeshRadius = 500.00f;
    this->bCanDirectSteer = true;
    this->bCanEverReachTarget = true;
    this->Vehicle = NULL;
    this->BlackboardComp = NULL;
    this->Path = NULL;
}

void UBTService_GGManageVehiclePath::PathUpdated(UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent::Type> PathEvent) {
}


