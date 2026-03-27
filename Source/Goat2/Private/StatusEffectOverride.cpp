#include "StatusEffectOverride.h"

FStatusEffectOverride::FStatusEffectOverride() {
    this->StatusEffectType = EStatusEffectTypes::SET_None;
    this->HasDurationOverride = EHasDurationOverride::HDO_Default;
    this->DurationOverride = 0.00f;
    this->CanSpreadOverride = ECanSpreadOverride::CSO_Default;
}

