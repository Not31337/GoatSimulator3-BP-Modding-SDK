#include "GGNPCAnimInstance.h"

UGGNPCAnimInstance::UGGNPCAnimInstance() {
    this->OwnerNPC = NULL;
    this->FootIKAlpha = 1.00f;
}

void UGGNPCAnimInstance::OnCharacterOwnerExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGNPCAnimInstance::OnCharacterOwnerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}



