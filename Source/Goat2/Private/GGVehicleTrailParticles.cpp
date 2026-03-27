#include "GGVehicleTrailParticles.h"

UGGVehicleTrailParticles::UGGVehicleTrailParticles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceVFX = NULL;
    this->VehicleTrailParticlesCullDistance = 10000.00f;
    this->MinimalSpeed = 5.00f;
    this->ParticlesVerticalOffset = 0.00f;
    this->FrontWheels.AddDefaulted(2);
    this->BackWheels.AddDefaulted(2);
    this->SpawnRateParameter = TEXT("SpawnRate");
    this->SpawnRateForSpeed = NULL;
    this->TraceEndOffset = 5.00f;
    this->MinSpeedForTurnParticles = 1000.00f;
    this->MinAngleForTurnParticles = 30.00f;
    this->MinSpeedForBrakeParticles = 200.00f;
    this->OwnerRoot = NULL;
    this->OwningVehicle = NULL;
}

void UGGVehicleTrailParticles::OnParticleAssetLoaded() {
}


