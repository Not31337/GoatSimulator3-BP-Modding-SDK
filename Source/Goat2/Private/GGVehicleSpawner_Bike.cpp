#include "GGVehicleSpawner_Bike.h"

AGGVehicleSpawner_Bike::AGGVehicleSpawner_Bike(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanUseVehicleSpawnPool = false;
    this->bCanEditVehicleSpawnPool = false;
    this->ValidDriverTypes.AddDefaulted(1);
    this->bCanEditDriverTypes = false;
    this->bCanExplode = false;
}


