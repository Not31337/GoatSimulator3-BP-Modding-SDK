#include "GGDialogueBranch.h"

FGGDialogueBranch::FGGDialogueBranch() {
    this->bActivateBranchIfPreviousIsFinished = false;
    this->bOnlyCheckIfFactExists = false;
    this->Equation = EGGEquation::Equal;
    this->FactComparisonValue = 0.00f;
}

