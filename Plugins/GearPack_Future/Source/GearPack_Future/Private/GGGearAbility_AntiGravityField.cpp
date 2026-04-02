#include "GGGearAbility_AntiGravityField.h"

UGGGearAbility_AntiGravityField::UGGGearAbility_AntiGravityField() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->GravityFieldVisualActorClass = NULL;
    this->BoxZOffset = 100.00f;
    this->bDidDeleteFieldActor = false;
    this->VisualActor = NULL;
}


