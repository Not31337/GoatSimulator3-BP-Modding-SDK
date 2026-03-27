#include "GGVehicleSpawner_Boat.h"

AGGVehicleSpawner_Boat::AGGVehicleSpawner_Boat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanUseVehicleSpawnPool = false;
    this->bCanEditVehicleSpawnPool = false;
    this->ValidDriverTypes.AddDefaulted(3);
}


