#include "GGQuestListUserWidget.h"

UGGQuestListUserWidget::UGGQuestListUserWidget() {
    this->QuestList = NULL;
}

bool UGGQuestListUserWidget::ShouldShowQuestInList(AGGQuestBase* Quest) {
    return false;
}

bool UGGQuestListUserWidget::RebuildQuestListWithTagSet(TSet<FGameplayTag> TagSet) {
    return false;
}

void UGGQuestListUserWidget::RebuildGridFromCollection(AGGQuestBase* QuestCollection) {
}

void UGGQuestListUserWidget::ClearQuestList() {
}


