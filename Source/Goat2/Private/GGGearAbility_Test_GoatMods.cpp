#include "GGGearAbility_Test_GoatMods.h"

UGGGearAbility_Test_GoatMods::UGGGearAbility_Test_GoatMods() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->MSGameplayEffect = NULL;
    this->MSChangeMagnitude = 0.00f;
    this->SprintParticles = NULL;
    this->DoubleJumpVelocity = 750.00f;
    this->DoubleJumpParticle = NULL;
    this->ChillyBreathParticle = NULL;
    this->CurrentModType = EGoatModType::None;
    this->RunParticleComp = NULL;
}

void UGGGearAbility_Test_GoatMods::OnLanded(const FHitResult& Hit) {
}

void UGGGearAbility_Test_GoatMods::OnJumped(AGGCharacter* Character) {
}

void UGGGearAbility_Test_GoatMods::OnGoatHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}

void UGGGearAbility_Test_GoatMods::OnGoatBaa(AGGGoat* GoatBaaing) {
}


