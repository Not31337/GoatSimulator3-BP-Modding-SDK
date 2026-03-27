#include "KaijuBeam.h"

FKaijuBeam::FKaijuBeam() {
    this->CurrentState = EKaijuBeamState::Idle;
    this->bImpact = false;
}

