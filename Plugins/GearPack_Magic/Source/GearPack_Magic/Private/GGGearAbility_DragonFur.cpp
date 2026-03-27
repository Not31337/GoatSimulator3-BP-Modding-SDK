#include "GGGearAbility_DragonFur.h"

UGGGearAbility_DragonFur::UGGGearAbility_DragonFur() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->DragonFurTornadoClass = NULL;
}

void UGGGearAbility_DragonFur::OnGoatBaa(AGGGoat* GoatBaaing) {
}


