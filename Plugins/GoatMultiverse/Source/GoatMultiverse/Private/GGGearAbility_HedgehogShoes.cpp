#include "GGGearAbility_HedgehogShoes.h"

UGGGearAbility_HedgehogShoes::UGGGearAbility_HedgehogShoes() {
    this->bReplicateInputDirectly = true;
    this->TimeUntilChargeRelease = 1.00f;
    this->MaxCharges = 15;
    this->BaseAcceleration = 2.00f;
    this->BaseMaxSpeed = 800.00f;
    this->BaseDuration = 1.00f;
    this->AccelerationPerCharge = 0.00f;
    this->MaxSpeedPerCharge = 60.00f;
    this->BaseSpeedMulti = 1.50f;
    this->SpeedMultiPerCharge = 0.15f;
    this->DurationPerCharge = 0.50f;
    this->AdditionalInAirDownForce = -350.00f;
    this->HedgehogShoes = NULL;
}

void UGGGearAbility_HedgehogShoes::OnRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGearAbility_HedgehogShoes::OnCharacterStartEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


