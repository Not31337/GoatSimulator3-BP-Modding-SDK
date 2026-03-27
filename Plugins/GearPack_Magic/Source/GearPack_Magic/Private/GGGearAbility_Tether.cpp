#include "GGGearAbility_Tether.h"

UGGGearAbility_Tether::UGGGearAbility_Tether() {
    this->bReplicateInputDirectly = true;
    this->AbilityTraceLength = 1000.00f;
    this->AbilityTraceTiltAngle = 20.00f;
    this->ConstraintComponentClass = NULL;
    this->TraceCapsuleRadius = 10.00f;
    this->TraceCapsuleHalfHeight = 10.00f;
    this->CurrentlySelectedComponent = NULL;
}


