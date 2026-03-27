#include "GGGearAbility_GasGoat.h"

UGGGearAbility_GasGoat::UGGGearAbility_GasGoat() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AimPitchOffset = 10.00f;
    this->MaxTeleportDistance = 3000.00f;
    this->GroundParticlesTraceDistance = 1000.00f;
    this->EdgeDetectionPullBackDistance = 100.00f;
    this->EdgeDetectionUpwardsDistance = 200.00f;
    this->EdgeDetectionForwardMultiplier = 3.50f;
    this->TransitionTime = 0.50f;
    this->HideGoatDelay = 0.10f;
    this->UnHideGoatDelay = 0.15f;
    this->CloudRadius = 300.00f;
    this->CloudImpulse = 500.00f;
    this->ImpulseDelay = 0.50f;
    this->ParticleSystemTargetLocationIndicator = NULL;
    this->ParticleSystemTargetGroundMarker = NULL;
    this->TargetGroundMarkerVerticalOffset = 1.00f;
    this->bScaleGroundParticlesWithGoatSize = false;
    this->TargetGroundMarkerRadius = 50.00f;
    this->SoundTargetLocationIndicator = NULL;
    this->SoundChargeUp = NULL;
    this->SoundTargetLocationSpawnDelay = 0.50f;
    this->TargetLocationIndicator = NULL;
}

void UGGGearAbility_GasGoat::TeleportToTarget() {
}

void UGGGearAbility_GasGoat::ServerOnTeleported_Implementation(FVector Location) {
}


void UGGGearAbility_GasGoat::OnLanded(const FHitResult& Hit) {
}

void UGGGearAbility_GasGoat::OnBounced(AGGCharacter* Character, UGGBouncyStaticMeshComponent* BouncyComponent) {
}


