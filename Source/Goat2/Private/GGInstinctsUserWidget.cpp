#include "GGInstinctsUserWidget.h"

UGGInstinctsUserWidget::UGGInstinctsUserWidget() {
    this->MaxAmountOfInstincts = 3;
    this->InstinctWidgetClass = NULL;
    this->InstinctWidgetContainer = NULL;
}

void UGGInstinctsUserWidget::OnInstinctWidgetFinished(UGGInstinctEntryUserWidget* Entry) {
}


UGGInstinctEntryUserWidget* UGGInstinctsUserWidget::GetWidgetForInstinct(AGGQuestBase* Quest) {
    return NULL;
}


