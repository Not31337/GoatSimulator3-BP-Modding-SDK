#include "GGVehicleAbility_TowCable.h"

UGGVehicleAbility_TowCable::UGGVehicleAbility_TowCable() {
    this->bReplicateInputDirectly = true;
    this->TowCableActorClass = NULL;
    this->HookImpulsePower = 6500.00f;
    this->TowCableActor = NULL;
}


