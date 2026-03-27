#include "GGGearAbility_Bob.h"

UGGGearAbility_Bob::UGGGearAbility_Bob() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AngerOverlapInterval = 1.00f;
    this->AngerOverlapRadius = 500.00f;
}

void UGGGearAbility_Bob::TriggerAngerOverlap() {
}

void UGGGearAbility_Bob::OnOwnerTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}


