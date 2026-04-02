#include "GGGearAbility_StasisBeam.h"

UGGGearAbility_StasisBeam::UGGGearAbility_StasisBeam() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ObjectTypes.AddDefaulted(2);
    this->TraceRadius = 150.00f;
    this->TraceDistance = 300.00f;
    this->TraceStartInFrontDistance = 200.00f;
    this->TraceDistanceAGSizeScalar = 2.00f;
    this->TracePitchOffset = 15.00f;
    this->HoldTimeToDrop = 1.00f;
    this->TargetParticle = NULL;
    this->bScaleTargetWithActor = true;
    this->TargetScaleFactor = 0.20f;
    this->StasisBeamGear = NULL;
    this->TargetParticleComp = NULL;
}

void UGGGearAbility_StasisBeam::OnEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGearAbility_StasisBeam::OnEnteredVehicleIsh(AGGGoat* Goat, APawn* Vehicle) {
}


