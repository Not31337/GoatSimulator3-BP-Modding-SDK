#include "GGResetSavePopupUserWidget.h"

UGGResetSavePopupUserWidget::UGGResetSavePopupUserWidget() {
    this->bCancelOnOutOfFocusArea = true;
    this->LastDeletedNoticeText = FText::FromString(TEXT("Progress was last reset on {0}"));
    this->PopupLastRemovedLabel = NULL;
}


