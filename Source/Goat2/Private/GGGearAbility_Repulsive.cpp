#include "GGGearAbility_Repulsive.h"

UGGGearAbility_Repulsive::UGGGearAbility_Repulsive() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AuraTriggerDelay = 0.50f;
    this->AuraRange = 300.00f;
}

void UGGGearAbility_Repulsive::RepulsiveAura(const FGameplayAbilitySpecHandle Handle, AGGGoat* Goat) {
}

void UGGGearAbility_Repulsive::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}


