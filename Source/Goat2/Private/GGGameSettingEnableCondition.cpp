#include "GGGameSettingEnableCondition.h"

UGGGameSettingEnableCondition::UGGGameSettingEnableCondition() {
}

bool UGGGameSettingEnableCondition::ShouldSettingBeActive_Implementation(UGGGameSettingOptionUserWidget* InUserWidget) const {
    return false;
}

void UGGGameSettingEnableCondition::OnWidgetDestroyed_Implementation(UGGGameSettingOptionUserWidget* InUserWidget) {
}

void UGGGameSettingEnableCondition::OnWidgetConstructed_Implementation(UGGGameSettingOptionUserWidget* InUserWidget) {
}


