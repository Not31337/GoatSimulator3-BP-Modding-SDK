#include "GGVehicle_Car_PoliceCar.h"

AGGVehicle_Car_PoliceCar::AGGVehicle_Car_PoliceCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ValidDriverTypes.AddDefaulted(3);
    this->ValidDamageTypes.AddDefaulted(6);
    this->PoliceClass = NULL;
    this->CurrentTargetActor = NULL;
}

void AGGVehicle_Car_PoliceCar::EjectPassenger() {
}

void AGGVehicle_Car_PoliceCar::EjectDriver() {
}


