#include "MoodChangeAreaElement.h"

FMoodChangeAreaElement::FMoodChangeAreaElement() {
    this->Direction = EMoodChange::MC_None;
    this->Radius = 0.00f;
    this->ChanceToChange = 0;
    this->bSkipRagdolls = false;
}

