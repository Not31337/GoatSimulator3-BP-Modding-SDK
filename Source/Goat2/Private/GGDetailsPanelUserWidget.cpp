#include "GGDetailsPanelUserWidget.h"

UGGDetailsPanelUserWidget::UGGDetailsPanelUserWidget() {
    this->StretchGoalChaosIcon = NULL;
    this->StretchGoalChaosNeededLabel = NULL;
    this->StretchGoalProgressLabel = NULL;
    this->DescriptionWidgetSwitcher = NULL;
    this->DescriptionChaosPanel = NULL;
    this->DescriptionProgressPanel = NULL;
    this->ProgressUnlockableText = FText::FromString(TEXT("Go To the Goat Castle To Receive Reward"));
    this->ProgressUnlockedText = FText::FromString(TEXT("Completed"));
    this->StretchGoal = NULL;
}

void UGGDetailsPanelUserWidget::InitFromStretchGoal(AGGCastleStretchGoal* InStretchGoal) {
}


