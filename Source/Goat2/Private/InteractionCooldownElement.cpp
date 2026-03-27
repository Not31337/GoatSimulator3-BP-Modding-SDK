#include "InteractionCooldownElement.h"

FInteractionCooldownElement::FInteractionCooldownElement() {
    this->Character = NULL;
    this->Interaction = ENPCInteractions::NPCI_None;
    this->InteractionTimestamp = 0.00f;
}

