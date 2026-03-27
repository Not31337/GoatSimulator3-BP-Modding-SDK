#include "BTTask_GGScanForActors.h"

UBTTask_GGScanForActors::UBTTask_GGScanForActors() {
    this->NodeName = TEXT("Scan For Actors");
    this->ChanceToScan = 100;
    this->ActorsToScanFor = ETaskActorScanTypes::TAST_None;
    this->bPreferNearestActor = false;
    this->CollisionChannels.AddDefaulted(4);
    this->bRequireValidPath = false;
    this->FilterClass = NULL;
    this->bProjectToNavMesh = false;
    this->bDrawScan = false;
    this->bUseBBScanRadius = false;
    this->ScanRadius = 500.00f;
}


