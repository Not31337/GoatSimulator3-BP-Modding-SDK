#include "GGSplineBlueprintSpawner.h"

UGGSplineBlueprintSpawner::UGGSplineBlueprintSpawner() {
    this->ClassToSpawn = NULL;
    this->bOnlyUseCollidingComponentsForBoundsCalculation = true;
    this->OwnerOverride = NULL;
    this->bNoOwnerForSpawnedActors = false;
}


