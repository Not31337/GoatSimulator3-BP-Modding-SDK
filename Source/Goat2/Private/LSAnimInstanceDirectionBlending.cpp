#include "LSAnimInstanceDirectionBlending.h"

ULSAnimInstanceDirectionBlending::ULSAnimInstanceDirectionBlending() {
}

FString ULSAnimInstanceDirectionBlending::GetDirectionWeightAsString(bool bCompact) const {
    return TEXT("");
}

FLSDirectionBlend ULSAnimInstanceDirectionBlending::CalculateDirectionWeights(const FRotator& CharacterRotation, const FVector& CharacterVelocity) {
    return FLSDirectionBlend{};
}


