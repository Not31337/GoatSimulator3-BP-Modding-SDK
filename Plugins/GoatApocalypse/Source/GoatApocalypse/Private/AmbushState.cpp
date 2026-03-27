#include "AmbushState.h"

FAmbushState::FAmbushState() {
    this->bActivatedAmbush = false;
    this->bLeapOut = false;
    this->bAmbushReady = false;
    this->Ambusher = NULL;
    this->AmbushActivatedTimestamp = 0.00f;
    this->bInitialDelayDone = false;
    this->TimeUntilDelayDone = 0.00f;
}

