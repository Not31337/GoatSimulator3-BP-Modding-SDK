#include "GGEventSpawner.h"
#include "Components/SceneComponent.h"

AGGEventSpawner::AGGEventSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->CanSpawn = true;
    this->EventActivation = EEventActivation::EA_AtStart;
    this->ChanceToSpawn = 100;
    this->ClaimedBy = NULL;
    this->SpawnMaxDistance = 7000.00f;
    this->SpawnMinDistance = 6000.00f;
}

void AGGEventSpawner::Spawn() {
}

void AGGEventSpawner::NPCEventCreateDelegate(AGGNPCEvent* NPCEvent) {
}


