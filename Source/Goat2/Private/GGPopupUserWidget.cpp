#include "GGPopupUserWidget.h"

UGGPopupUserWidget::UGGPopupUserWidget() {
    this->bIsFocusable = true;
    this->PopupOwner = NULL;
    this->bPaginateOnResolve = false;
    this->bSkipAnimations = false;
    this->bIsModal = true;
    this->bCancelOnOutOfFocusArea = false;
    this->bCannotBeAutomaticallyDismissed = false;
    this->bDismissPopupOnKeyUp = false;
    this->bFocusAnyButtonAsFallback = true;
    this->MobileScaleBoxContentScaleMultiplier = 2.00f;
    this->ScaleBox_Content = NULL;
    this->PopupTitleLabel = NULL;
    this->PopupTitleLabelRich = NULL;
    this->PopupBodyLabel = NULL;
    this->PopupBodyLabelLegacy = NULL;
    this->OutOfFocusArea = NULL;
    this->ButtonContainer = NULL;
    this->InitialScaleUpAnim = NULL;
}

void UGGPopupUserWidget::SetImageFromTexture(UTexture2D* Texture, int32 Width, int32 Height) {
}

bool UGGPopupUserWidget::SetImageFromIconSet(FName IconSetName) {
    return false;
}

bool UGGPopupUserWidget::RequiresUserInputToDismiss() {
    return false;
}

bool UGGPopupUserWidget::RequiresUserInputToCancel() {
    return false;
}

void UGGPopupUserWidget::RegisterButton(UGGUserWidget* ButtonWidget) {
}




void UGGPopupUserWidget::OnPopupButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

void UGGPopupUserWidget::OnOutOfFocusArea() {
}

void UGGPopupUserWidget::OnCreatedButton_Implementation(const FPopupButton& Button, UGGPopupButtonUserWidget* ButtonWidget) {
}

bool UGGPopupUserWidget::OnActionMappingPressed_Implementation(FName ActionName) {
    return false;
}

bool UGGPopupUserWidget::IsTopMostPopup() {
    return false;
}

void UGGPopupUserWidget::ButtonInteracted(const FString& InID, EPopupResponse InResponse) {
}


