#include "GGSpawnerInterface.h"

UGGSpawnerInterface::UGGSpawnerInterface() {
    this->InstancesToSpawn = 1;
    this->bApplyGlobalModifiers = true;
    this->UniformScale = 1.00f;
    this->bUseUniformScale = true;
}

void UGGSpawnerInterface::SpawnEntities_Implementation(const TArray<FGGSpawnTransform>& InTransforms) {
}

void UGGSpawnerInterface::InitSpawner_Implementation() {
}

TArray<UGGSpawnerModifierInterface*> UGGSpawnerInterface::GetValidModifiers() const {
    return TArray<UGGSpawnerModifierInterface*>();
}

AGGSplineToolActor* UGGSpawnerInterface::GetSplineOwner() const {
    return NULL;
}

USplineComponent* UGGSpawnerInterface::GetSplineComponent() const {
    return NULL;
}

FBoxSphereBounds UGGSpawnerInterface::GetLocalBounds_Implementation() const {
    return FBoxSphereBounds{};
}

TArray<FGGSpawnTransform> UGGSpawnerInterface::GetInitialSpawnTransforms() const {
    return TArray<FGGSpawnTransform>();
}

void UGGSpawnerInterface::ClearSpawnedEntities_Implementation() {
}

bool UGGSpawnerInterface::CanEditNumberOfSpawnedInstanced() const {
    return false;
}


