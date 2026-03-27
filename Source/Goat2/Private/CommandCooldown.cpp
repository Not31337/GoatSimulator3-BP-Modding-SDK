#include "CommandCooldown.h"

FCommandCooldown::FCommandCooldown() {
    this->NPC = NULL;
    this->CooldownTimestamp = 0.00f;
    this->CooldownLength = 0.00f;
}

