#include "GGCurrencyGameStateComponent.h"

UGGCurrencyGameStateComponent::UGGCurrencyGameStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChaosSourcesDataTable = NULL;
    this->CurrencySourcesDataTable = NULL;
    this->SpendingSourcesDataTable = NULL;
    this->CurrencyPrefix = TEXT("Currency_");
    this->CurrencyActorClass = NULL;
}

int32 UGGCurrencyGameStateComponent::GetCurrencyFromTypeIndex(int32 TypeIndex) const {
    return 0;
}


