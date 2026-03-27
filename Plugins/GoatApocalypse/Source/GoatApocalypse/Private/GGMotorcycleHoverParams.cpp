#include "GGMotorcycleHoverParams.h"

FGGMotorcycleHoverParams::FGGMotorcycleHoverParams() {
    this->MaxHoverDuration = 0.00f;
    this->AdditionalVerticalAcceleration = 0.00f;
    this->FallCompensationAccelerationMultiplier = 0.00f;
    this->ThrustStartParticlesSystem = NULL;
    this->ThrustParticlesSystem = NULL;
    this->ThrustEndParticlesSystem = NULL;
    this->ThrustEndSound = NULL;
    this->ThrustSound = NULL;
}

