#include "GGUserWidget.h"

UGGUserWidget::UGGUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bShowFocusMarkerOnHover = false;
    this->bShowFocusMarkerOnFocusMobile = true;
    this->bFocusOnHover = false;
    this->MobileScaleMultiplierNative = 1.30f;
    this->ReturnActionMapping = TEXT("Return");
    this->ExitActionMapping = TEXT("Exit");
    this->InteractActionMapping = TEXT("Interact");
    this->FocusMarker = NULL;
    this->Label = NULL;
    this->RichLabel = NULL;
    this->ShowAnim = NULL;
    this->HideAnim = NULL;
    this->bIncludeShowAnimInTotalDuration = false;
}

void UGGUserWidget::SetLabelText(const FText& InText) {
}

void UGGUserWidget::SetFocusToWidget_Implementation() {
}

void UGGUserWidget::SetEffectSource_Implementation(FGameplayTag InEffectTag, FGameplayTag InSourceTag, bool bEnabled) {
}




bool UGGUserWidget::IsMenuPathInteractable() {
    return false;
}

bool UGGUserWidget::HasFocus() {
    return false;
}

UGGMenuUserWidget* UGGUserWidget::GetTopMenu() {
    return NULL;
}

AGGGoat* UGGUserWidget::GetOwningGGPlayerPawn() {
    return NULL;
}

AGGPlayerController* UGGUserWidget::GetOwningGGPlayer() const {
    return NULL;
}

UGGLocalPlayer* UGGUserWidget::GetOwningGGLocalPlayer() {
    return NULL;
}

UGGMenuUserWidget* UGGUserWidget::GetNearestMenuParent() {
    return NULL;
}

UWidget* UGGUserWidget::GetInitialWidgetFocus_Implementation() {
    return NULL;
}

UGGMenuComponent* UGGUserWidget::GetGGMenuComponent() {
    return NULL;
}



