#include "QuestSharedProgress.h"

FQuestSharedProgress::FQuestSharedProgress() {
    this->Progress = 0;
    this->bActive = false;
    this->bCompleted = false;
    this->bDiscovered = false;
    this->bPreviouslyDiscovered = false;
    this->bLoadedOnServer = false;
}

