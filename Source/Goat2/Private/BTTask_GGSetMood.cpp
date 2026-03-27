#include "BTTask_GGSetMood.h"

UBTTask_GGSetMood::UBTTask_GGSetMood() {
    this->NodeName = TEXT("Set Mood");
    this->OnlySetIfMoodIs = EMoods::M_None;
    this->ResetInteraction = false;
    this->MoodSetType = EMoodSetType::MST_Default;
    this->NewMood = EMoods::M_Carefree;
    this->SetInteractMoodChange = false;
    this->SetSameOnSelf = true;
    this->SetAsDamagedBy = false;
    this->bCanEditInteractMoodChange = true;
    this->bCanEditDefault = true;
    this->bCanEditRandomMood = false;
    this->bCanEditBBKey = false;
    this->bCanEditAngryWithTar = false;
    this->bCanEditFleeFromLoc = false;
}


