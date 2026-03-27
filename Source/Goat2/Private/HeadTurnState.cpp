#include "HeadTurnState.h"

FHeadTurnState::FHeadTurnState() {
    this->HeadTurningState = EHeadTurning::HT_None;
    this->LookAtActor = NULL;
    this->bBlackboardValue = false;
    this->bWaypointValue = false;
}

