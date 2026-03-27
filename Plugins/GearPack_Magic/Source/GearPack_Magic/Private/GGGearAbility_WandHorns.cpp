#include "GGGearAbility_WandHorns.h"

UGGGearAbility_WandHorns::UGGGearAbility_WandHorns() {
    this->bReplicateInputDirectly = true;
    this->PhysicsHandleActorClass = NULL;
    this->LaunchInputHoldTime = 1.00f;
    this->LaunchForceScalar = 1000.00f;
    this->LaunchForceScalarCharacters = 1000.00f;
    this->LaunchDirectionAdditionalPitch = 45.00f;
    this->CarryHeightBaseZOffset = 100.00f;
    this->CarryHeightRandomOffsetMax = 100.00f;
    this->CarryXYRandomOffsetMax = 100.00f;
    this->AbilityTraceLength = 1000.00f;
    this->AbilityTraceTiltAngle = 20.00f;
    this->TraceCapsuleRadius = 10.00f;
    this->TraceCapsuleHalfHeight = 10.00f;
}


