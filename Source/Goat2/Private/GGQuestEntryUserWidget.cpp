#include "GGQuestEntryUserWidget.h"

UGGQuestEntryUserWidget::UGGQuestEntryUserWidget() {
    this->AssignedQuest = NULL;
    this->CachedProgressBase = 0.00f;
    this->bUseProgressbarAnimation = true;
    this->VerticalBoxQuest = NULL;
    this->ProgressContainer = NULL;
    this->QuestProgressBar = NULL;
    this->QuestStepContainer = NULL;
    this->QuestTitleLabel = NULL;
    this->QuestTitleLabel_Mobile = NULL;
    this->QuestDesctiptionLabel = NULL;
    this->QuestDesctiptionLabel_Mobile = NULL;
    this->QuestProgressLabel = NULL;
    this->AnimSplashNewQuestWidget = NULL;
    this->AnimSplashNewQuestWidget_Mobile = NULL;
    this->NewAnimShowQuestWidget = NULL;
    this->NewAnimHideQuestWidget = NULL;
    this->AnimQuestComplete = NULL;
    this->AnimProgressbarForward = NULL;
    this->AnimProgressbarReverse = NULL;
}

void UGGQuestEntryUserWidget::UpdateSteps(FGameplayTag QuestTag) {
}

void UGGQuestEntryUserWidget::UpdateProgressbarAnimation(float CurrentProgressBase) {
}

void UGGQuestEntryUserWidget::UpdateProgressbar() {
}

void UGGQuestEntryUserWidget::UpdateLabels() {
}



bool UGGQuestEntryUserWidget::IsAssignedQuest(AGGQuestBase* Quest) {
    return false;
}

AGGQuestBase* UGGQuestEntryUserWidget::GetAssignedQuest() {
    return NULL;
}

void UGGQuestEntryUserWidget::AssignQuest(AGGQuestBase* Quest) {
}


