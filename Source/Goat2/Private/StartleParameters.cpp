#include "StartleParameters.h"

FStartleParameters::FStartleParameters() {
    this->bShouldStartle = false;
    this->bScarierWhenBehind = false;
    this->RequireTimeSinceLastStartle = 0.00f;
    this->RequireTimeSinceLastStartleWithActor = 0.00f;
    this->RequireTimeSinceLastStartleWithContext = 0.00f;
    this->RequireTimeSinceLastStartleWithActorAndContext = 0.00f;
    this->ChanceToStartle = 0;
    this->bAlwaysStartleWhenBehind = false;
    this->bLookAtIfNotStartled = false;
    this->LookAtDuration = 0.00f;
}

