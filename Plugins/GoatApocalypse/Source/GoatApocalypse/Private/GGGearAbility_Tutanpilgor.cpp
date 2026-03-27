#include "GGGearAbility_Tutanpilgor.h"

UGGGearAbility_Tutanpilgor::UGGGearAbility_Tutanpilgor() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->CurrentNPCEvent = NULL;
}

void UGGGearAbility_Tutanpilgor::NPCEventCreateDelegate(AGGNPCEvent* NPCEvent) {
}


