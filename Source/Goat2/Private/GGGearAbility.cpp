#include "GGGearAbility.h"

UGGGearAbility::UGGGearAbility() {
    this->ActivationInput = EAbilityInput::VehicleAbility;
    this->GearPart = NULL;
    this->OwnerMovementComponent = NULL;
    this->GoatOwnerInternal = NULL;
}

void UGGGearAbility::Unequipped() {
}

void UGGGearAbility::TickAbility(float DeltaTime, AGGGoat* Goat) {
}

void UGGGearAbility::StopForceFeedbackIfOwner(const FGameplayTag& ForceFeedbackEffect) const {
}

void UGGGearAbility::StopForceFeedbackForOwner(const FGameplayTag& ForceFeedbackEffect) const {
}

void UGGGearAbility::PlayForceFeedbackIfOwner(const FGameplayTag& ForceFeedbackEffect, bool bLoop) const {
}

void UGGGearAbility::PlayForceFeedbackForOwner(const FGameplayTag& ForceFeedbackEffect, bool bLoop) const {
}

void UGGGearAbility::OnOwnerStopRagdolling(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGearAbility::OnOwnerRagdolling(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}



AGGGoat* UGGGearAbility::GetGoatOwner() const {
    return NULL;
}


