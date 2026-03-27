#include "GGOptionInputUserWidget.h"

UGGOptionInputUserWidget::UGGOptionInputUserWidget() {
    this->InputKeySelectorButton = NULL;
    this->KeyboardInputButtonShower = NULL;
    this->MouseInputButtonShower = NULL;
    this->GamepadInputButtonShower = NULL;
    this->ResetButton = NULL;
    this->ButtonInputTemplate = FText::FromString(TEXT("<keybind action=\"{action}\" input=\"{input}\" axisscale=\"{axisscale}\"/>"));
    this->PopUpClass = NULL;
    this->PopupUserWidget = NULL;
    this->bHasKeyboardBinding = false;
    this->bHasMouseBinding = false;
    this->bHasGamepadBinding = false;
}

void UGGOptionInputUserWidget::UpdateInputBindingTypes() {
}

void UGGOptionInputUserWidget::UpdateButtonText() {
}

void UGGOptionInputUserWidget::OnResetButtonPressed(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

void UGGOptionInputUserWidget::OnKeySelectorButtonPressed() {
}

void UGGOptionInputUserWidget::OnGamepadChanged(bool bIsUsingGamepad) {
}

void UGGOptionInputUserWidget::KeyRebindPopUpResponds(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

bool UGGOptionInputUserWidget::IsPlayerUsingAGamepad() const {
    return false;
}

bool UGGOptionInputUserWidget::HasAnyConflictingAction() const {
    return false;
}

FText UGGOptionInputUserWidget::GetKeySymbolForInputChord(const FInputChord& InputChord) const {
    return FText::GetEmpty();
}

FText UGGOptionInputUserWidget::GetInputButtonSymbol(const FString& InputType) const {
    return FText::GetEmpty();
}

void UGGOptionInputUserWidget::ConflictingDefaultBindingPopupRespond(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}


