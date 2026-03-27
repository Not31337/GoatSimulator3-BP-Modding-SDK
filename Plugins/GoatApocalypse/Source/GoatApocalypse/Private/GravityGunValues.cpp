#include "GravityGunValues.h"

FGravityGunValues::FGravityGunValues() {
    this->CurrentState = EGravityGunState::Idle;
    this->GrabbedActor = NULL;
    this->GrabbedActorSize = 0.00f;
}

