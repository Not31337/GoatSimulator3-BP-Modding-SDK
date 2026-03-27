#include "GGChaosCurrencyUserWidget_AP.h"

UGGChaosCurrencyUserWidget_AP::UGGChaosCurrencyUserWidget_AP() {
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

void UGGChaosCurrencyUserWidget_AP::OnTotalChaosChanged(int32 NewTotalChaos) {
}

void UGGChaosCurrencyUserWidget_AP::OnChaosAcquired(int32 Amount) {
}


