#include "GGTentacle.h"

FGGTentacle::FGGTentacle() {
    this->CurrentState = EGGTentacleState::Idle;
    this->PhysicsConstraint = NULL;
    this->GrabAnchor = NULL;
    this->CurrentGrabbedWaitTime = 0.00f;
}

