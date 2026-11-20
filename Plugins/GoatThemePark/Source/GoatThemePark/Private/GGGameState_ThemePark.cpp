#include "GGGameState_ThemePark.h"
#include "EGoatDLC.h"
#include "GGCurrencyGameStateComponent.h"

AGGGameState_ThemePark::AGGGameState_ThemePark(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssociatedDLC = EGoatDLC::GoatThemePark;
    this->CurrencyComponent = CreateDefaultSubobject<UGGCurrencyGameStateComponent>(TEXT("CurrencyComponent"));
}


