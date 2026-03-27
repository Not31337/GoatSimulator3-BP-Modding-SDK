#include "GGEventSpawner_StreetStall.h"

AGGEventSpawner_StreetStall::AGGEventSpawner_StreetStall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QueueDirection = EQueueDirections::QD_Forward;
    this->QueueSpots = 4;
    this->LengthUntilFirstSpot = 200.00f;
    this->SpaceBetweenSpots = 150.00f;
}


