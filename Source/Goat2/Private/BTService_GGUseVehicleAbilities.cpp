#include "BTService_GGUseVehicleAbilities.h"

UBTService_GGUseVehicleAbilities::UBTService_GGUseVehicleAbilities() {
    this->NodeName = TEXT("Use Vehicle Abilities");
    this->bUseBoostWhenRelevant = false;
    this->bUseHonkWhileRelevant = false;
    this->Vehicle = NULL;
}


