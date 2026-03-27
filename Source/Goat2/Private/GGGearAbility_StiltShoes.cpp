#include "GGGearAbility_StiltShoes.h"

UGGGearAbility_StiltShoes::UGGGearAbility_StiltShoes() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->MaxExtension = 100.00f;
    this->ChangeInterval = 0.50f;
    this->ChangePerInterval = 5.00f;
    this->InterpSpeed = 5.00f;
    this->StiltShoe = NULL;
}


