#include "QuestStepTier.h"

FQuestStepTier::FQuestStepTier() {
    this->bMustBeCompletedInOrder = false;
    this->bForceCompletePrevious = false;
    this->bUsesSavedCompletedOrderIndex = false;
}

