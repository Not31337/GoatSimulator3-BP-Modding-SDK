#include "GGGearAbility_Shovel.h"

UGGGearAbility_Shovel::UGGGearAbility_Shovel() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->MinDistanceInFront = 200.00f;
    this->GroundTraceDistance = 200.00f;
    this->MoundClass = NULL;
}


