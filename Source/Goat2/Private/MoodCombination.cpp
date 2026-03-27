#include "MoodCombination.h"

FMoodCombination::FMoodCombination() {
    this->Interaction = ENPCInteractions::NPCI_None;
    this->Mood1 = EMoods::M_None;
    this->Mood2 = EMoods::M_None;
    this->InteractChance = EInteractChances::IC_Zero;
    this->RequiredInstigatorMood = EMoods::M_None;
}

