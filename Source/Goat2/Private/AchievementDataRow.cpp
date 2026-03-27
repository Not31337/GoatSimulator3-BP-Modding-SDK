#include "AchievementDataRow.h"

FAchievementDataRow::FAchievementDataRow() {
    this->bDifferentLockedIcon = false;
    this->AchievementIcon = NULL;
    this->AchievementClass = NULL;
    this->bHidden = false;
    this->EpicXP = 0;
    this->DLCAssociation = EGoatDLC::Invalid;
}

