#include "NPCInteractionCooldown.h"

FNPCInteractionCooldown::FNPCInteractionCooldown() {
    this->Interaction = ENPCInteractions::NPCI_None;
    this->CooldownTime = 0.00f;
}

