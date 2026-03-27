#include "GGStretchGoalGroup.h"

UGGStretchGoalGroup::UGGStretchGoalGroup() {
    this->GroupSize = 0;
    this->bSetCurrentlyActiveGoal = true;
    this->bSaveAsKeyValueData = false;
    this->bDisregardGoalOrder = false;
    this->bHasGoalWithSpecialCondition = false;
    this->bCanSwitchBackFromUnlockable = false;
}

void UGGStretchGoalGroup::AddNewGoal() {
}


