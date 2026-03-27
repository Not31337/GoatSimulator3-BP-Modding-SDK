#include "AreaSlotData.h"

FAreaSlotData::FAreaSlotData() {
    this->Slot = 0;
    this->CurrentState = EAreaSlotState::ASS_Empty;
    this->AreaAsset = NULL;
    this->ReservedForAreaAsset = NULL;
    this->bReservedTogether = false;
    this->AreaLogic = NULL;
    this->SetActiveTimestamp = 0.00f;
}

