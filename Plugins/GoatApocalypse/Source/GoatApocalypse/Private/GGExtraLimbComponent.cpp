#include "GGExtraLimbComponent.h"
#include "Net/UnrealNetwork.h"

UGGExtraLimbComponent::UGGExtraLimbComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TotalExtraLimbMax = 5;
    this->ExtraLimbLifetime = 120.00f;
    this->LimbSpawnParticle = NULL;
    this->LimbSpawnSound = NULL;
}

void UGGExtraLimbComponent::RemoveExtraLimb(UGGExtraLimbMeshComponent* LimbMesh) {
}

void UGGExtraLimbComponent::RemoveAllExtraLimbs(bool bDestroyComponent) {
}

void UGGExtraLimbComponent::OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled) {
}

void UGGExtraLimbComponent::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

void UGGExtraLimbComponent::MulticastPlayLimbSpawnEffects_Implementation(USceneComponent* AttachTo, FVector Location) const {
}

int32 UGGExtraLimbComponent::GetLimbCount() const {
    return 0;
}

UGGExtraLimbComponent* UGGExtraLimbComponent::GetExtraLimbComponent(AActor* Actor) {
    return NULL;
}

void UGGExtraLimbComponent::AddExtraLimbsToOwner() {
}

void UGGExtraLimbComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGExtraLimbComponent, Limbs);
}


