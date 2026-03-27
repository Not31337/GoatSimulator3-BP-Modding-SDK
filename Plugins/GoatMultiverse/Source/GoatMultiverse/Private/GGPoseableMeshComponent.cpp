#include "GGPoseableMeshComponent.h"

UGGPoseableMeshComponent::UGGPoseableMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FPoseableCollisionData UGGPoseableMeshComponent::GetPoseableCollisionData(USkeletalMeshComponent* SkeletalMeshComponent) {
    return FPoseableCollisionData{};
}

void UGGPoseableMeshComponent::CreateCollision_Struct(FPoseableCollisionData CollisionData) {
}

void UGGPoseableMeshComponent::CreateCollision_SkelMeshComp(USkeletalMeshComponent* RefSkeletalMeshComp) {
}

void UGGPoseableMeshComponent::ClearCollision() {
}


