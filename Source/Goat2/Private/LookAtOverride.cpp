#include "LookAtOverride.h"

FLookAtOverride::FLookAtOverride() {
    this->LookAtActor = NULL;
    this->Duration = 0.00f;
    this->bResetOnRagdoll = false;
    this->bResetOnProximityReact = false;
    this->bResetOnExtremeMood = false;
    this->bResetOnPanic = false;
}

