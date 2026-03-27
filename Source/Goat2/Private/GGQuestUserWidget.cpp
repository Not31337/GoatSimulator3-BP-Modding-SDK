#include "GGQuestUserWidget.h"

UGGQuestUserWidget::UGGQuestUserWidget() {
    this->QuestManager = NULL;
    this->CurrentQuest = NULL;
}

bool UGGQuestUserWidget::HasActiveQuest() const {
    return false;
}


