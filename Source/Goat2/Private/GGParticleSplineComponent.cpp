#include "GGParticleSplineComponent.h"

UGGParticleSplineComponent::UGGParticleSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ValidSectionType = EValidSectionType::VST_Distances;
}

bool UGGParticleSplineComponent::IsInputKeyValid(float InputKey) const {
    return false;
}

bool UGGParticleSplineComponent::IsDistanceValid(float InDistance) const {
    return false;
}

void UGGParticleSplineComponent::ClearValidParticleRanges() {
}

void UGGParticleSplineComponent::AddNewValidParticleRange(float StartValue, float EndValue) {
}


