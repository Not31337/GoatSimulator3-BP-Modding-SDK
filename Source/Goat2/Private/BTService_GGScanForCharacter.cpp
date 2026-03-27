#include "BTService_GGScanForCharacter.h"

UBTService_GGScanForCharacter::UBTService_GGScanForCharacter() {
    this->NodeName = TEXT("Scan For Characters");
    this->bOnlyLookWhenEmpty = true;
    this->bPickClosestCharacter = false;
    this->bLookForGoats = true;
    this->bLookForHumanoids = true;
    this->bLookForAnimals = true;
    this->bRequireCharacterInFront = false;
    this->bOnlyLookForPassedOutNPCs = false;
    this->bRequireNotHaveIdentifier = false;
    this->bDrawScan = false;
    this->bUseBBScanRadius = false;
    this->ScanRadius = 500.00f;
}


