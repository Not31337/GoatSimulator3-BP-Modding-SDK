#include "GGNeckRagdollComponent.h"

UGGNeckRagdollComponent::UGGNeckRagdollComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NeckRagdollBlendOutTime = 1.00f;
    this->bPreventMeshFromExploding = true;
    this->MeshBoundsErrorFactor = 1.00f;
    this->MaxBoneSpeed = 400.00f;
    this->OwnerGoat = NULL;
    this->OwnerMeshComponent = NULL;
    this->OverlapTestMeshComponent = NULL;
}

void UGGNeckRagdollComponent::ToRagdollEvent(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGNeckRagdollComponent::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

bool UGGNeckRagdollComponent::IsNeckRagdollActive() const {
    return false;
}


