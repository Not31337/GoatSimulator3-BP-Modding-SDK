#include "GGGearAbility_KrimsonMask.h"

UGGGearAbility_KrimsonMask::UGGGearAbility_KrimsonMask() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->KrimsonHandClass = NULL;
    this->OutwardsInterpSpeed = 300.00f;
    this->OutwardsRotationInterpSpeed = 2.00f;
    this->MaxDistanceFromGoat = 1000.00f;
    this->HandUpwardInterpDirection = 0.35f;
    this->HandScaleIncrease = 2.00f;
    this->KrimsonHand = NULL;
}

void UGGGearAbility_KrimsonMask::OnMenuOpened(FGameplayTag InMenuTag, FMenuNavigationContext Context) {
}

void UGGGearAbility_KrimsonMask::OnEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGearAbility_KrimsonMask::OnEnteringBroom(AGGGoat* Goat, APawn* FlyingBroom) {
}


