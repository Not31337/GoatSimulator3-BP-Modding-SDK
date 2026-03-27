#include "GGDialogueLine.h"

FGGDialogueLine::FGGDialogueLine() {
    this->ContinueMode = EGGDialogueLineContinueMode::AfterSoundFinished;
    this->DisplayDuration = 0.00f;
    this->Equation = EGGEquation::Equal;
    this->FactComparisonValue = 0.00f;
    this->FactValueOnLineEnded = 0.00f;
    this->bIsUsingFactForAdvancing = false;
    this->bShowDisplayDuration = false;
    this->bUpdateFactOnLineEnded = false;
}

