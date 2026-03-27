#include "GGCompanionSettings.h"

FGGCompanionSettings::FGGCompanionSettings() {
    this->Mass = 0.00f;
    this->RagdollDamageThreshold = 0.00f;
    this->MaxRagdollSpeedToStandUp = 0.00f;
    this->VisionRange = 0.00f;
    this->VisionAngle = 0.00f;
    this->DelayBetweenActions = 0.00f;
    this->bCanBeRagdolled = false;
    this->bCanBeLicked = false;
    this->DistanceForBeingStuck = 0.00f;
    this->TimeWithoutMovementUntilConsideredStuck = 0.00f;
}

