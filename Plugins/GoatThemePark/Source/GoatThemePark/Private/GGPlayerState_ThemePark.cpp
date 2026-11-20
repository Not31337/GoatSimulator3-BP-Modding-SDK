#include "GGPlayerState_ThemePark.h"
#include "GGCurrencyPlayerStateComponent.h"

AGGPlayerState_ThemePark::AGGPlayerState_ThemePark(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrencyComponent = CreateDefaultSubobject<UGGCurrencyPlayerStateComponent>(TEXT("CurrencyComponent"));
}


