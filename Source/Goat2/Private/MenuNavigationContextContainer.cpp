#include "MenuNavigationContextContainer.h"

FMenuNavigationContextContainer::FMenuNavigationContextContainer() {
    this->Priority = 0;
    this->Duration = 0.00f;
    this->Timestamp = 0.00f;
    this->bHold = false;
    this->bPermanent = false;
}

