#include "GGPActorStaticMeshComponent.h"

UGGPActorStaticMeshComponent::UGGPActorStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisableNavMeshThreshold = 100.00f;
    this->bHasCachedNavBounds = false;
    this->CachedNavArea = NULL;
}


