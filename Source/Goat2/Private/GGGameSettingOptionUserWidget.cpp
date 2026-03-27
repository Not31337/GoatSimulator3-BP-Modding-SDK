#include "GGGameSettingOptionUserWidget.h"

UGGGameSettingOptionUserWidget::UGGGameSettingOptionUserWidget() {
    this->bIsFocusable = true;
    this->ButtonUserWidget = NULL;
    this->bCountCommitAsInstant = true;
    this->NavigateLeftAction = TEXT("Left");
    this->NavigateRightAction = TEXT("Right");
    this->SelectAction = TEXT("Select");
    this->ParentSettingTab = NULL;
}

void UGGGameSettingOptionUserWidget::Setup_Implementation(FGGGameSettingHandle InSettingHandle, UGGSettingsTabMenuUserWidget* InParentSettingTab) {
}

void UGGGameSettingOptionUserWidget::SetSettingValueByIndex(int32 OptionIndex) {
}

void UGGGameSettingOptionUserWidget::SetSettingValueAsString(const FString& NewValue) {
}

void UGGGameSettingOptionUserWidget::SetSettingValueAsFloat(float NewValue) {
}



void UGGGameSettingOptionUserWidget::RunSettingAction() const {
}

void UGGGameSettingOptionUserWidget::RevertUnChangedSettings() {
}

void UGGGameSettingOptionUserWidget::ResetToDefault() {
}

void UGGGameSettingOptionUserWidget::RefreshOption_Implementation() {
}


void UGGGameSettingOptionUserWidget::OnSettingRequireApply(UGGGameSettingOptionUserWidget* ThisSettingWidget) {
}

void UGGGameSettingOptionUserWidget::OnOtherSettingsValueChanged(FGGGameSetting& OtherSetting, EGGGameSettingChangeContext InContext) {
}


void UGGGameSettingOptionUserWidget::OnEvaluateActiveStatusRequested() {
}

int32 UGGGameSettingOptionUserWidget::NavigateOptions(int32 CurrentIndex, int32 Direction, bool bWrap) {
    return 0;
}

bool UGGGameSettingOptionUserWidget::IsDefaultValue() const {
    return false;
}

FString UGGGameSettingOptionUserWidget::GetWidgetSettingValueAsString_Implementation(bool& OutIsSet) {
    return TEXT("");
}

int32 UGGGameSettingOptionUserWidget::GetWidgetSettingValueAsInt_Implementation(bool& OutIsSet) {
    return 0;
}

float UGGGameSettingOptionUserWidget::GetWidgetSettingValueAsFloat_Implementation(bool& OutIsSet) {
    return 0.0f;
}

bool UGGGameSettingOptionUserWidget::GetWidgetSettingValueAsBool_Implementation(bool& OutIsSet) {
    return false;
}

float UGGGameSettingOptionUserWidget::GetValueTextFactor() const {
    return 0.0f;
}

FString UGGGameSettingOptionUserWidget::GetValueForOptionIndex(int32 OptionIndex) const {
    return TEXT("");
}

FString UGGGameSettingOptionUserWidget::GetUnAppliedSettingValue_Implementation() const {
    return TEXT("");
}

FText UGGGameSettingOptionUserWidget::GetTooltipText_Implementation() {
    return FText::GetEmpty();
}

FString UGGGameSettingOptionUserWidget::GetSettingValueAsString(bool bIncludeValueTextFactor) const {
    return TEXT("");
}

int32 UGGGameSettingOptionUserWidget::GetSettingValueAsInt(bool bIncludeValueTextFactor) const {
    return 0;
}

float UGGGameSettingOptionUserWidget::GetSettingValueAsFloat(bool bIncludeValueTextFactor) const {
    return 0.0f;
}

bool UGGGameSettingOptionUserWidget::GetSettingValueAsBool() {
    return false;
}

float UGGGameSettingOptionUserWidget::GetSettingStepSizeMouse() const {
    return 0.0f;
}

float UGGGameSettingOptionUserWidget::GetSettingStepSize() const {
    return 0.0f;
}

FName UGGGameSettingOptionUserWidget::GetSettingName() const {
    return NAME_None;
}

int32 UGGGameSettingOptionUserWidget::GetOptionIndexForCurrentValue() const {
    return 0;
}

int32 UGGGameSettingOptionUserWidget::GetNumAvailableOptions() const {
    return 0;
}

float UGGGameSettingOptionUserWidget::GetMinSettingValue(bool bIncludeValueTextFactor) const {
    return 0.0f;
}

float UGGGameSettingOptionUserWidget::GetMaxSettingValue(bool bIncludeValueTextFactor) const {
    return 0.0f;
}

int32 UGGGameSettingOptionUserWidget::GetMaxFractionalDigits() const {
    return 0;
}

float UGGGameSettingOptionUserWidget::GetDefaultValueAsFloat() const {
    return 0.0f;
}

TArray<FGGSettingOption> UGGGameSettingOptionUserWidget::GetAvailableOptions() const {
    return TArray<FGGSettingOption>();
}

EGGGameSettingApplyMode UGGGameSettingOptionUserWidget::GetApplyMode() const {
    return EGGGameSettingApplyMode::Commit;
}

void UGGGameSettingOptionUserWidget::ApplySetting() {
}


