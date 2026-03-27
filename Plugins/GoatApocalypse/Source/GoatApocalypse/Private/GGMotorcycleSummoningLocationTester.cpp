#include "GGMotorcycleSummoningLocationTester.h"

UGGMotorcycleSummoningLocationTester::UGGMotorcycleSummoningLocationTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceToReCalculatePaths = 150.00f;
    this->PendingSummoningPath = NULL;
}


