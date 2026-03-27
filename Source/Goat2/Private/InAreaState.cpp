#include "InAreaState.h"

FInAreaState::FInAreaState() {
    this->CurrentArea = NULL;
    this->CurrentSlot = 0;
    this->State = EInAreaState::IAS_NotInArea;
    this->bFinishedLoadingOnServer = false;
    this->AreaLogic = NULL;
}

