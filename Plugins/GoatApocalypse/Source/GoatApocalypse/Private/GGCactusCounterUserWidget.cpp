#include "GGCactusCounterUserWidget.h"

UGGCactusCounterUserWidget::UGGCactusCounterUserWidget() {
    this->bIncludeShowAnimInTotalDuration = true;
    this->CactusCountSwitcher = NULL;
    this->CactusCountCurrentScoreContainer = NULL;
    this->CurrentCactusCountRichText = NULL;
    this->CurrentCactusTimerRichText = NULL;
    this->CactusCountHighScoreContainer = NULL;
    this->LastCactusCountRichText = NULL;
    this->HighscoreCactusCountRichText = NULL;
    this->GainCacti = NULL;
    this->CactusSystem = NULL;
    this->OwningPlayerState = NULL;
}

void UGGCactusCounterUserWidget::ShowHighScore(float InDuration) {
}


void UGGCactusCounterUserWidget::OnCactusStreakStarted(AGGPlayerState_Apocalypse* Player) {
}

void UGGCactusCounterUserWidget::OnCactusStreakEnded(AGGPlayerState_Apocalypse* Player, int32 CactusCount, bool bNewHighScore, int32 HighScore) {
}

void UGGCactusCounterUserWidget::HideHighScore() {
}


