#include "GGGearAbility_PigSlide.h"

UGGGearAbility_PigSlide::UGGGearAbility_PigSlide() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->GreasyStatusEffect = NULL;
    this->InitialSlideImpulse = 1000.00f;
    this->SlideImpulsePush = 900.00f;
    this->bApplyVelocityLimit = true;
    this->SlideVelocityLimit = 10000.00f;
    this->BonusRagdollOnLandedThreshold = 1500.00f;
    this->PigTurnRateWhileSliding = 2.00f;
    this->ForceCompClass = NULL;
    this->ForceCompSlideVelocityThreshold = 500.00f;
    this->ForceCompMinActiveTime = 1.00f;
    this->CachedGreasyStatusEffect = NULL;
    this->ForceComp = NULL;
}

void UGGGearAbility_PigSlide::OnSlideKickFinished(AGGCharacter* Goat, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}

void UGGGearAbility_PigSlide::OnPlayerRespawn(AGGCharacter* Character) {
}

void UGGGearAbility_PigSlide::OnPlayerJump(AGGCharacter* Character) {
}

void UGGGearAbility_PigSlide::OnPlayerHeadbutt(AGGGoat* GoatHeadbutting) {
}

void UGGGearAbility_PigSlide::OnPlayerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGearAbility_PigSlide::OnPlayerBackkick(AGGGoat* GoatKicking, bool bHitSomething, const TArray<AActor*>& KickedActors) {
}


