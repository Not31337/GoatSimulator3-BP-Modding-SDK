#include "GGGoatGearListRule.h"

FGGGoatGearListRule::FGGGoatGearListRule() {
    this->bShouldBeShown = false;
    this->InThisDLCLevel = EGoatDLC::Invalid;
    this->FiltersMatchType = EGameplayContainerMatchType::Any;
    this->bGearUnlocked = ERuleBoolState::Unset;
    this->GearDescriptorMatchType = EGameplayContainerMatchType::Any;
}

