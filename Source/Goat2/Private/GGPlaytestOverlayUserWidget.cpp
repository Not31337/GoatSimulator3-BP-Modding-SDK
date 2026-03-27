#include "GGPlaytestOverlayUserWidget.h"

UGGPlaytestOverlayUserWidget::UGGPlaytestOverlayUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MinMoveDelay = 0.00f;
    this->MaxMoveDelay = 0.00f;
    this->CurrentMoveDelay = 0.00f;
    this->MoveTimestamp = 0.00f;
    this->LastOrderFixTimestamp = 0.00f;
    this->UpdateTextTimestamp = 0.00f;
    this->UpdateTextInterval = 1.00f;
}

void UGGPlaytestOverlayUserWidget::SetNewOverlayText_Implementation(const FString& NewText) {
}



