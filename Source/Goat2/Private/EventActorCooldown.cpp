#include "EventActorCooldown.h"

FEventActorCooldown::FEventActorCooldown() {
    this->EventClass = NULL;
    this->CooldownActor = NULL;
    this->CurrentCooldown = 0.00f;
}

