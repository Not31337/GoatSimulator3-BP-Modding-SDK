#include "LSPivotParams.h"

FLSPivotParams::FLSPivotParams() {
    this->Direction = 0.00f;
    this->CompletedMovementDirection = ELSMovementDirection::Forward;
    this->CompletedStartTime = 0.00f;
    this->InterruptedMovmentDirection = ELSMovementDirection::Forward;
    this->InterruptedStartTime = 0.00f;
}

