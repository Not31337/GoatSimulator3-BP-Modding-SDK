#include "GGRideSeatSpawner.h"

UGGRideSeatSpawner::UGGRideSeatSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->SeatClass = NULL;
}


