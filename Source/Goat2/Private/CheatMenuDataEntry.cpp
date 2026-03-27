#include "CheatMenuDataEntry.h"

FCheatMenuDataEntry::FCheatMenuDataEntry() {
    this->CheatEntryType = CME_Teleport;
    this->bShouldCloseMenu = false;
    this->bIsCompleted = false;
    this->OwningObject = NULL;
}

