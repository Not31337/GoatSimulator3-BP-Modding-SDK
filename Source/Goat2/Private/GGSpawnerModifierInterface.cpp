#include "GGSpawnerModifierInterface.h"

UGGSpawnerModifierInterface::UGGSpawnerModifierInterface() {
    this->bDisplayDebug = false;
    this->bIsModifierEnabled = true;
    this->CachedSplineWidth = 0.00f;
}

void UGGSpawnerModifierInterface::SetModifierEnabled(bool bShouldBeEnabled) {
}

void UGGSpawnerModifierInterface::ModifySpawnTransforms_Implementation(TArray<FGGSpawnTransform>& SpawnTransforms, const USplineComponent* Spline) const {
}

void UGGSpawnerModifierInterface::ModifySingleSpawnTransform_Implementation(FGGSpawnTransform& InTransform, const USplineComponent* Spline) const {
}

bool UGGSpawnerModifierInterface::IsModifierEnabled() const {
    return false;
}

bool UGGSpawnerModifierInterface::IsGlobalModifier() const {
    return false;
}

void UGGSpawnerModifierInterface::InitModifier_Implementation() {
}

float UGGSpawnerModifierInterface::GetSplineWidth() const {
    return 0.0f;
}

AGGSplineToolActor* UGGSpawnerModifierInterface::GetSplineOwner() const {
    return NULL;
}

UGGSpawnerInterface* UGGSpawnerModifierInterface::GetOwningSpawner_K2() const {
    return NULL;
}

void UGGSpawnerModifierInterface::DisplayDebug_Implementation(AGGSplineToolActor* WorldContext) {
}


