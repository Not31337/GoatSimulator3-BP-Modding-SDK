#include "LSAnimInstance_MovementStates.h"

ULSAnimInstance_MovementStates::ULSAnimInstance_MovementStates() {
    this->MovementStatesAnimation = NULL;
    this->bUseConstantInterpSpeedForUnderWater = true;
    this->UnderWaterPitchRotationSpeed = 120.00f;
    this->UnderWaterToHorizontalRotationSpeed = 90.00f;
    this->MaxPlayRate = 1.50f;
}

void ULSAnimInstance_MovementStates::OnMovementSpeedsChanged(ULSCharacterMovementComponent* MovementComp) {
}

void ULSAnimInstance_MovementStates::OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMode, TEnumAsByte<EMovementMode> PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, ULSCharacterMovementComponent* MovementComp) {
}

void ULSAnimInstance_MovementStates::OnExitVehicleIsh(AGGGoat* Goat, APawn* Vehicle) {
}

void ULSAnimInstance_MovementStates::OnExitingVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void ULSAnimInstance_MovementStates::OnEnterVehicleIsh(AGGGoat* Goat, APawn* Vehicle) {
}

void ULSAnimInstance_MovementStates::OnEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

UBlendSpace* ULSAnimInstance_MovementStates::GetFlyingBlendSpace() const {
    return NULL;
}


