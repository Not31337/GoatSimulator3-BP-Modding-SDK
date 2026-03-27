#include "GGGameSetting.h"

FGGGameSetting::FGGGameSetting() {
    this->SettingType = EGGGameSettingType::Resolution;
    this->bShouldBeSaved = false;
    this->WidgetType = EGGGameSettingsWidgetType::Bool;
    this->ApplyMode = EGGGameSettingApplyMode::Commit;
    this->GPUPerformanceImpact = EGGPerformanceImpact::None;
    this->CPUPerformanceImpact = EGGPerformanceImpact::None;
    this->VRAMPerformanceImpact = EGGPerformanceImpact::None;
    this->SettingAction = NULL;
    this->CustomEnableCondition = NULL;
    this->PlatformRestrictions = EPlatformFlags::None;
    this->bOnlyVisibleForPrimaryPlayer = false;
    this->SliderStepSize = 0.00f;
    this->SliderStepSizeMouse = 0.00f;
    this->ValueTextFactor = 0.00f;
    this->MaxFractionalDigits = 0;
    this->OptionFactory = NULL;
}

