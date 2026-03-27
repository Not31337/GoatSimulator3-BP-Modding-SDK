#include "UBTService_GGAnnoyingActors.h"
#include "GGGoat.h"

UUBTService_GGAnnoyingActors::UUBTService_GGAnnoyingActors() {
    this->NodeName = TEXT("Annoying Actors");
    this->ClassToLookFor = AGGGoat::StaticClass();
    this->AnnoyanceDistance = 500.00f;
    this->CloseDistance = 100.00f;
    this->bRequireLineOfSight = true;
    this->MildlyAnnoyanceThresholdTime = 2.50f;
    this->SeriouslyAnnoyanceThresholdTime = 6.00f;
    this->bCanPlayAnnoyanceAnimations = true;
    this->ChanceToBecomeAngry = 25;
}


