#include "GGInstinct_MotorcycleInventory.h"

AGGInstinct_MotorcycleInventory::AGGInstinct_MotorcycleInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_MotorcycleInventory::OnActorRemovedFromInventory(UGGVehicleInventory* Inventory, AActor* Actor) {
}

void AGGInstinct_MotorcycleInventory::OnActorAddedToInventory(UGGVehicleInventory* Inventory, AActor* Actor) {
}


