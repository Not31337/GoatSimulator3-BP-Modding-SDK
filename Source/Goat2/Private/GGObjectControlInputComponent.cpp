#include "GGObjectControlInputComponent.h"

UGGObjectControlInputComponent::UGGObjectControlInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerPlayer = NULL;
    this->OwnerPlayerGoat = NULL;
    this->ControlledObject = NULL;
    this->ViewTarget = NULL;
}

void UGGObjectControlInputComponent::ToRagdollEvent(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGObjectControlInputComponent::OnCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter) {
}

void UGGObjectControlInputComponent::OnCharacterExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGObjectControlInputComponent::OnCharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


