#include "BTService_GGScanForActors.h"

UBTService_GGScanForActors::UBTService_GGScanForActors() {
    this->NodeName = TEXT("Scan For Actors");
    this->ChanceToScan = 100;
    this->bOnlyLookWhenEmpty = true;
    this->ActorsToScanFor = EActorScanTypes::AST_None;
    this->bPreferNearestActor = false;
    this->CollisionChannels.AddDefaulted(4);
    this->bRequireValidPath = false;
    this->FilterClass = NULL;
    this->bProjectToNavMesh = false;
    this->bDrawScan = false;
    this->bUseBBScanRadius = false;
    this->ScanRadius = 500.00f;
}


