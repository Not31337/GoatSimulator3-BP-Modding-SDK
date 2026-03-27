#include "GGGearAbility_PlanterTools.h"

UGGGearAbility_PlanterTools::UGGGearAbility_PlanterTools() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->PatchActor = NULL;
    this->PatchDistanceSqrd = 20000.00f;
}


