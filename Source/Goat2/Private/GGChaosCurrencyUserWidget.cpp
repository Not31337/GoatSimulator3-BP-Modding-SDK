#include "GGChaosCurrencyUserWidget.h"

UGGChaosCurrencyUserWidget::UGGChaosCurrencyUserWidget() {
    this->bIncludeShowAnimInTotalDuration = true;
    this->LastBucketReleaseTime = 0.00f;
    this->CollectedChaosReleaseLimit = 25;
    this->SpentChaosReleaseLimit = 1;
    this->CollectedChaosEmptyInterval = 1.50f;
    this->CurrencyGetText = NULL;
    this->CurrencySpendText = NULL;
    this->GainCurrency = NULL;
    this->SpendCurrency = NULL;
    this->CollectedChaosBucket = 0;
    this->SpentChaosBucket = 0;
}

void UGGChaosCurrencyUserWidget::OnTotalChaosChanged(int32 NewTotalChaos) {
}

void UGGChaosCurrencyUserWidget::OnChaosAcquired(int32 Amount) {
}


