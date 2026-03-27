#include "GGSkeletalMeshActor.h"

AGGSkeletalMeshActor::AGGSkeletalMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeOptimized = true;
    this->SignificanceRange = 8000.00f;
}

void AGGSkeletalMeshActor::LostSignificance_Implementation() {
}

float AGGSkeletalMeshActor::GetSignificanceRange_Implementation() {
    return 0.0f;
}

FVector AGGSkeletalMeshActor::GetSignificanceLocation_Implementation() {
    return FVector{};
}

void AGGSkeletalMeshActor::GainedSignificance_Implementation() {
}


