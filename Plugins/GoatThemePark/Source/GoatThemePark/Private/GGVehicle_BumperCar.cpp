#include "GGVehicle_BumperCar.h"

AGGVehicle_BumperCar::AGGVehicle_BumperCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ValidDriverTypes.AddDefaulted(3);
    this->bCanExplode = false;
    this->ValidDamageTypes.AddDefaulted(6);
    this->ImpulsePower = 1000.00f;
    this->VehicleImpulsePower = 1000.00f;
    this->CharacterImpulsePower = 1000.00f;
}


