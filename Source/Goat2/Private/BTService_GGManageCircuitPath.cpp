#include "BTService_GGManageCircuitPath.h"

UBTService_GGManageCircuitPath::UBTService_GGManageCircuitPath() {
    this->NodeName = TEXT("Manage Circuit Path");
    this->bCallTickOnSearchStart = true;
    this->DebugPrint = false;
    this->DebugDrawPath = false;
    this->NavFilter = NULL;
    this->PointMinDistance = 300.00f;
    this->ReachedPathDistance = 500.00f;
    this->bCanDirectSteer = true;
    this->MinDistanceToSpeedUp = 1000.00f;
    this->MaxAngleConsideredStraight = 30.00f;
    this->PassedCheckpointThreshold = 1000.00f;
    this->Vehicle = NULL;
    this->BlackboardComp = NULL;
    this->CurrentCircuitPoint = -1;
    this->GoatKartComp = NULL;
}


