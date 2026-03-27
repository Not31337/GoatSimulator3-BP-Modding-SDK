#include "ReplicatedStretchGoalState.h"

FReplicatedStretchGoalState::FReplicatedStretchGoalState() {
    this->StretchGoal = NULL;
    this->State = EStretchGoalStates::SGIS_Inactive;
}

