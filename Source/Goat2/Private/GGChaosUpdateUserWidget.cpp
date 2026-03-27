#include "GGChaosUpdateUserWidget.h"

UGGChaosUpdateUserWidget::UGGChaosUpdateUserWidget() {
    this->ProgressImageProgressParameter = TEXT("Percent");
    this->ChaosIncreaseTextFormat = FText::FromString(TEXT("+{0}"));
    this->AnimShowWidget_LevelUp = NULL;
    this->AnimHideWidget_LevelUp = NULL;
    this->ChaosAmountIncreaseLabel = NULL;
    this->TotalChaosAmountLabel = NULL;
    this->LevelReachedLabel = NULL;
    this->ScaleBoxGoalReached = NULL;
}


