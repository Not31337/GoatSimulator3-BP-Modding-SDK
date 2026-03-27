#include "StallSpawnElement.h"

FStallSpawnElement::FStallSpawnElement() {
    this->VendorNPCClass = NULL;
    this->StallActorClass = NULL;
    this->SphereRadius = 0.00f;
    this->AttractChance = 0.00f;
    this->ChanceToSetMood = 0;
    this->bOverrideSellItems = false;
}

