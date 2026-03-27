#include "StartleDetailsSettings.h"

FStartleDetailsSettings::FStartleDetailsSettings() {
    this->bShouldStartle = false;
    this->StartleType = EStartleVariations::SV_Light;
    this->LineOfSightSetting = ELineOfSightSetting::LoSS_None;
    this->StartleRadius = 0.00f;
    this->bScarierWhenBehind = false;
    this->RequireTimeSinceLastStartle = 0.00f;
    this->RequireTimeSinceLastStartleWithActor = 0.00f;
    this->RequireTimeSinceLastStartleWithContext = 0.00f;
    this->RequireTimeSinceLastStartleWithActorAndContext = 0.00f;
    this->ChanceToStartle = 0;
    this->bAlwaysStartleWhenBehind = false;
    this->bLookAtIfNotStartled = false;
    this->LookAtDuration = 0.00f;
    this->bSkipRagdolls = false;
    this->bSkipPanicking = false;
    this->bSkipCannotChangeMood = false;
    this->bSkipMatchingReactType = false;
    this->bSkipStumbling = false;
    this->bForSingleNotify = false;
}

