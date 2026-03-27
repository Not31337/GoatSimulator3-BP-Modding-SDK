#include "GGFootstepComponent.h"

UGGFootstepComponent::UGGFootstepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCheckSurfaceType = true;
    this->FoleySound = NULL;
    this->MinTimeBetweenFootsteps = 0.02f;
    this->TraceChannel = TraceTypeQuery1;
    this->TraceDistance = 50.00f;
}

void UGGFootstepComponent::SetSoundOverride(USoundCue* Override) {
}

void UGGFootstepComponent::SetLandSoundOverride(USoundCue* Override) {
}

void UGGFootstepComponent::SetJumpSoundOverride(USoundCue* Override) {
}

void UGGFootstepComponent::SetFootstepSoundOverride(USoundCue* Override) {
}

void UGGFootstepComponent::PlayLandSound(const FVector& BoneLocation, const FVector& TraceDirection) {
}

void UGGFootstepComponent::PlayJumpSound(const FVector& BoneLocation, const FVector& TraceDirection) {
}

void UGGFootstepComponent::PlayFootstepSound(const FVector& BoneLocation, const FVector& TraceDirection) {
}



