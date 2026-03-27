#include "GGActionHintBarUserWidget.h"

UGGActionHintBarUserWidget::UGGActionHintBarUserWidget() {
    this->LeftHints = NULL;
    this->CenterHints = NULL;
    this->RightHints = NULL;
    this->bShowBaseHints = true;
}

void UGGActionHintBarUserWidget::UpdateHint_Implementation(FActionHintStruct Hint) {
}

void UGGActionHintBarUserWidget::RebuildHints_Implementation() {
}


TArray<UGGActionHintBarEntry*> UGGActionHintBarUserWidget::GetEntries(FName ActionName) const {
    return TArray<UGGActionHintBarEntry*>();
}

void UGGActionHintBarUserWidget::ActionHintWidgetInteracted(UGGUserWidget* Widget, FActionHintStruct Hint) {
}


