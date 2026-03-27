#include "GGTheCuberReplicatedVariables.h"

FGGTheCuberReplicatedVariables::FGGTheCuberReplicatedVariables() {
    this->State = EGGTheCuberState::Idle;
    this->Target = NULL;
    this->Cube = NULL;
}

