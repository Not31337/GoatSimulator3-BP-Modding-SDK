#include "GGVehicleSpawner.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"

AGGVehicleSpawner::AGGVehicleSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->Enabled = true;
    this->bIsSpawningVehicleAsync = false;
    this->bCanUseVehicleSpawnPool = true;
    this->bCanEditVehicleSpawnPool = true;
    this->ValidDriverTypes.AddDefaulted(3);
    this->bCanEditDriverTypes = true;
    this->bCanBeEntered = true;
    this->bCanExplode = true;
    this->CanRoamRandomly = true;
    this->ShouldSpawnAtGameStart = false;
    this->Driven = false;
    this->SpawnAsGhost = false;
    this->LastUsedTimestamp = 0.00f;
    this->bIsImportantSpawner = false;
    this->ClaimedBy = NULL;
}

AGGVehicle* AGGVehicleSpawner::SpawnVehicle(TSubclassOf<AGGVehicle> SpecificVehicleClass) {
    return NULL;
}

void AGGVehicleSpawner::SetClaimedBy(AGGVehicle* NewClaimedBy) {
}

bool AGGVehicleSpawner::InitializeResetVehicle(AGGVehicle* Vehicle) {
    return false;
}

AGGVehicle* AGGVehicleSpawner::GetClaimedBy(bool bEvenIfNotInitialized) const {
    return NULL;
}


