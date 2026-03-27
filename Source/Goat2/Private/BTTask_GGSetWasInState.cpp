#include "BTTask_GGSetWasInState.h"

UBTTask_GGSetWasInState::UBTTask_GGSetWasInState() {
    this->NodeName = TEXT("Set WasInStates");
    this->State = EWasInStates::WIS_None;
    this->RemoveFromString = false;
    this->ClearString = false;
}


