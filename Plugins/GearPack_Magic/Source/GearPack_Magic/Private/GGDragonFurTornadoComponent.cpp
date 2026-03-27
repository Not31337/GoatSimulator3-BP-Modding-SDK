#include "GGDragonFurTornadoComponent.h"

UGGDragonFurTornadoComponent::UGGDragonFurTornadoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRotationInLocalSpace = false;
    this->GearPart = NULL;
    this->TornadoActor = NULL;
    this->BaseDamageToApply = 100.00f;
    this->ImpulseForwardForce = 300.00f;
    this->ImpulseUpForce = 800.00f;
    this->ImpulseScalarVehicles = 10.00f;
    this->ImpulseScalarNPCs = 1.00f;
    this->ImpulseDelay = 2.00f;
    this->LifeTime = 3.00f;
    this->DamageTypeClass = NULL;
}

void UGGDragonFurTornadoComponent::OnAutoDestruct() {
}

void UGGDragonFurTornadoComponent::OnApplyImpulse() {
}


