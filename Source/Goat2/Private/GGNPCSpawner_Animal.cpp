#include "GGNPCSpawner_Animal.h"
#include "ENPCType.h"

AGGNPCSpawner_Animal::AGGNPCSpawner_Animal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NPCType = ENPCType::NT_Animal;
    this->bAnimalSpawner = true;
    this->bCanProximityReact = true;
    this->AnimStartWait = 0.50f;
    this->AnimStartWaitDeviation = 0.50f;
    this->bIsImportantSpawner = false;
    this->bPreventSpawnUntilNextLoad = false;
    this->BehaviorOverride = NULL;
    this->RoamRadius = 500.00f;
    this->bDrawPreviewRadius = false;
    this->Duration = 5.00f;
    this->DurationDeviation = 0.00f;
    this->bCanEditActorA = false;
    this->bCanEditRadius = false;
    this->bCanEditDuration = false;
    this->ClaimedBy = NULL;
}

AGGNPC* AGGNPCSpawner_Animal::SpawnNPCElement(FWeightedElement_Animal Element) {
    return NULL;
}

AGGNPC* AGGNPCSpawner_Animal::GetClaimedBy(bool bEvenIfNotInitialized) const {
    return NULL;
}


