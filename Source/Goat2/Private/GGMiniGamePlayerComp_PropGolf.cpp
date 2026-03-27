#include "GGMiniGamePlayerComp_PropGolf.h"

UGGMiniGamePlayerComp_PropGolf::UGGMiniGamePlayerComp_PropGolf(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ImpulseAngle = 45;
    this->MinImpulse = 0.00f;
    this->MaxImpulse = 65.00f;
    this->ImpulseFluctuationMultiplier = 2.50f;
    this->ImpulseMultiplier = 1000.00f;
}

float UGGMiniGamePlayerComp_PropGolf::GetCurrentImpulseAlpha() {
    return 0.0f;
}


