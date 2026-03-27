#include "GGGameSettingAction.h"

UGGGameSettingAction::UGGGameSettingAction() {
}

FString UGGGameSettingAction::SetValue_Implementation(const FString& InNewValue, const FGGGameSetting& InSetting, EGGGameSettingChangeContext InContext) const {
    return TEXT("");
}

void UGGGameSettingAction::RunAction_Implementation(const FGGGameSetting& InSetting) const {
}

FString UGGGameSettingAction::LoadValue_Implementation(const FString& InValue, const FGGGameSetting& InSetting) const {
    return TEXT("");
}

FString UGGGameSettingAction::GetValue_Implementation(const FString& CurrentValue, const FGGGameSetting& InSetting) const {
    return TEXT("");
}

AGGPlayerController* UGGGameSettingAction::GetPrimaryPlayerController(const FGGGameSetting& InSetting) {
    return NULL;
}

FString UGGGameSettingAction::GetDefault_Implementation(const FString& CurrentDefault, const FGGGameSetting& InSetting) const {
    return TEXT("");
}

void UGGGameSettingAction::ApplyValue_Implementation(const FString& InCurrentValue, const FGGGameSetting& InSetting) const {
}


