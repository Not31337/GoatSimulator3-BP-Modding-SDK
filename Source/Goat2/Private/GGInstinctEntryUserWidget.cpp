#include "GGInstinctEntryUserWidget.h"

UGGInstinctEntryUserWidget::UGGInstinctEntryUserWidget() {
    this->AssociatedInstinct = NULL;
    this->InstinctCategoryIcons.AddDefaulted(29);
}

bool UGGInstinctEntryUserWidget::IsWidgetStale_Implementation() {
    return false;
}

UTexture2D* UGGInstinctEntryUserWidget::GetInstinctIconFromTag(FGameplayTag InInstinctTag) {
    return NULL;
}


