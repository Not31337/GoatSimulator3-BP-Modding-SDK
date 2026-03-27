#include "GGDynamicAssetHoldingComponent.h"

UGGDynamicAssetHoldingComponent::UGGDynamicAssetHoldingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocationSceneComponent = NULL;
    this->bShouldHandleSignificance = true;
    this->bLoadOnSignificance = true;
    this->SignificanceDistance = 6000.00f;
    this->bIsLoaded = false;
}

void UGGDynamicAssetHoldingComponent::UnloadAssets() {
}

void UGGDynamicAssetHoldingComponent::StartLoadingAssets() {
}

UGGEffectsSpawnResult* UGGDynamicAssetHoldingComponent::SpawnEffectsHolder(const UObject* WorldContextObject, const FString& EffectsKey, FVector SpawnLocation, FRotator SpawnRotator, USceneComponent* AttachToComponent) {
    return NULL;
}

void UGGDynamicAssetHoldingComponent::LostSignificance_Implementation() {
}

float UGGDynamicAssetHoldingComponent::GetSignificanceRange() {
    return 0.0f;
}

FVector UGGDynamicAssetHoldingComponent::GetSignificanceLocation() {
    return FVector{};
}

TArray<UObject*> UGGDynamicAssetHoldingComponent::GetLoadedAssets() const {
    return TArray<UObject*>();
}

UObject* UGGDynamicAssetHoldingComponent::GetLoadedAsset(UClass* AssetClass, const FString& Key) {
    return NULL;
}

bool UGGDynamicAssetHoldingComponent::GetIsLoaded() const {
    return false;
}

void UGGDynamicAssetHoldingComponent::GainedSignificance_Implementation() {
}


