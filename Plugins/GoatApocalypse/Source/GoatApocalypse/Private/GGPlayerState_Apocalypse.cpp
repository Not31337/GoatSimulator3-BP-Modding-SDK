#include "GGPlayerState_Apocalypse.h"
#include "GGCurrencyPlayerStateComponent.h"

AGGPlayerState_Apocalypse::AGGPlayerState_Apocalypse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrencyComponent = CreateDefaultSubobject<UGGCurrencyPlayerStateComponent>(TEXT("CurrencyComponent"));
}

void AGGPlayerState_Apocalypse::OnCactusStreakStarted(AGGPlayerState_Apocalypse* Player) {
}

void AGGPlayerState_Apocalypse::OnCactusStreakEnded(AGGPlayerState_Apocalypse* Player, int32 CactusCount, bool bNewHighScore, int32 HighScore) {
}

void AGGPlayerState_Apocalypse::OnCactusStreakCactusDestroyed(AGGPlayerState_Apocalypse* Player, int32 IncreaseBy) {
}

void AGGPlayerState_Apocalypse::ClientDestroyedCactus_Implementation(int32 IncreaseBy) {
}


