#include "NotifyParameters.h"

FNotifyParameters::FNotifyParameters() {
    this->NotifyAboutActor = NULL;
    this->LineOfSightSetting = ELineOfSightSetting::LoSS_None;
    this->bSkipRagdolls = false;
    this->bSkipPanicking = false;
    this->bSkipCannotChangeMood = false;
    this->bSkipMatchingReactType = false;
    this->bSkipStumbling = false;
    this->bNonStartleCanBypassStartle = false;
    this->ChanceToNotify = 0;
    this->PutOnCooldownFor = 0.00f;
}

