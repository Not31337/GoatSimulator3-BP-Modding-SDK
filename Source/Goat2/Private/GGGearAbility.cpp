#include "GGGearAbility.h"

UGGGearAbility::UGGGearAbility() {
    this->ActivationInput = EAbilityInput::VehicleAbility;
    this->bCanActivateWhileRagdoll = true;
    this->bCanActivateWhileInsideAVehicle = false;
    this->bCanActivateWhileCatched = false;
    this->bUseHeadbuttForAbility = false;
    this->bManuallyCompleteGearTutorial = false;
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

void UGGGearAbility::OnOwnerStopRagdolling_Implementation(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGearAbility::OnOwnerReleased_Implementation(AActor* CatchedActor, AActor* Catched) {
}

void UGGGearAbility::OnOwnerRagdolling_Implementation(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGearAbility::OnOwnerExitedVehicleIsh(AGGGoat* Goat, APawn* Vehicle) {
}

void UGGGearAbility::OnOwnerExitedVehicle(AGGCharacter* CharacterGoat, AGGVehicle* Vehicle) {
}

void UGGGearAbility::OnOwnerEnteredVehicleIsh(AGGGoat* Goat, APawn* Vehicle) {
}

void UGGGearAbility::OnOwnerEnteredVehicle(AGGCharacter* CharacterGoat, AGGVehicle* Vehicle) {
}

void UGGGearAbility::OnOwnerCatched_Implementation(AActor* CatchedActor, AActor* Catcher) {
}

void UGGGearAbility::OnHeadbuttButtonPressed_Implementation(AGGPlayerController* PlayerController) {
}

void UGGGearAbility::OnGoatExitedVehicle_Implementation(AGGGoat* Goat, APawn* Vehicle) {
}

void UGGGearAbility::OnGoatEnteredVehicle_Implementation(AGGGoat* Goat, APawn* Vehicle) {
}

void UGGGearAbility::OnGoatControllingObjectStarted_Implementation(UObject* ControlledObject) {
}

void UGGGearAbility::OnGoatControllingObjectEnded_Implementation(UObject* ControlledObject) {
}



AGGGoat* UGGGearAbility::GetGoatOwner() const {
    return NULL;
}

void UGGGearAbility::CompleteGearTutorial() const {
}


