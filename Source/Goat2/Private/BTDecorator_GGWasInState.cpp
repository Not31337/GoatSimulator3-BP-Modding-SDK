#include "BTDecorator_GGWasInState.h"

UBTDecorator_GGWasInState::UBTDecorator_GGWasInState() {
    this->NodeName = TEXT("Was In State");
    this->State = EWasInStates::WIS_None;
    this->NotifyObserver = EBTGGBlackboardRestart::ResultChange;
}


