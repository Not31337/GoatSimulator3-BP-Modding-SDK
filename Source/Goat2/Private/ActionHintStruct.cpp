#include "ActionHintStruct.h"

FActionHintStruct::FActionHintStruct() {
    this->position = EActionHintPosition::Left;
    this->Visibility = EActionHintVisibility::Always;
    this->HoldDuration = 0.00f;
    this->Interactable = false;
    this->Enabled = false;
}

