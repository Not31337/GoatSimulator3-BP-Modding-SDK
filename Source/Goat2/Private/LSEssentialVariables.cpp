#include "LSEssentialVariables.h"

FLSEssentialVariables::FLSEssentialVariables() {
    this->ControlAndCharacterRotDelta = 0.00f;
    this->ControlYawRate = 0.00f;
    this->InputAndVelocityVectorDelta = 0.00f;
    this->VelocityAndCharacterRotDelta = 0.00f;
    this->bIsMoving = false;
    this->bHasMovementInput = false;
    this->MovementDirection = ELSMovementDirection::Forward;
}

