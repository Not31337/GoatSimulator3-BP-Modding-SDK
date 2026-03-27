#include "GGGoatTowerTabUserWidget.h"

UGGGoatTowerTabUserWidget::UGGGoatTowerTabUserWidget() {
    this->StretchGoalList = NULL;
    this->GoatCastleSubsystem = NULL;
}

bool UGGGoatTowerTabUserWidget::IsHelpOrDetailsShowing_Implementation() {
    return false;
}

bool UGGGoatTowerTabUserWidget::IsDetailsPanelValidState() {
    return false;
}


